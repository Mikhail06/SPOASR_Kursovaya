#include <ros/ros.h>
#include <turtlesim/Spawn.h>

int main(int argc, char **argv){

    ros::init(argc, argv, "spawner");

    ros::NodeHandle node;

    ros::service::waitForService("spawn");

    ros::ServiceClient spawner2 = node.serviceClient<turtlesim::Spawn>("spawn");
    turtlesim::Spawn turtle2;
    turtle2.request.x = 4;
    turtle2.request.y = 5;
    turtle2.request.theta = 0;
    turtle2.request.name = "turtle2";
    spawner2.call(turtle2);

    return 0;
}