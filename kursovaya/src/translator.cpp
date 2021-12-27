#include "ros/ros.h" 				                                                    
#include "geometry_msgs/Twist.h"	                                                    

ros::Publisher pub;

void callback (geometry_msgs::Twist data)
{
    geometry_msgs::Twist twist = data;

    twist.linear.x = -twist.linear.x;

    pub.publish(twist);
}

int main(int argc, char **argv)
{				
    ros::init(argc, argv, "my_node");
    ros::NodeHandle node;

    ros::Subscriber sub = node.subscribe("turtle1/cmd_vel", 1000, callback);

    pub = node.advertise<geometry_msgs::Twist>("turtle2/cmd_vel", 1000); 

	ros::spin();
	return 0;
}
