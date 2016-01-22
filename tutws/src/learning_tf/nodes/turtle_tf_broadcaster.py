#!/usr/bin/env python
import roslib
roslib.load_manifest('learning_tf')
import rospy

import tf
import turtlesim.msg

#function definition
def handle_turtle_pose(msg, turtlename):
	#access the tf type contents
	br = tf.TransformBroadcaster()
	br.sendTransform((msg.x, msg.y, 0),
		tf.transformations.quaternion_from_euler(0, 0, msg.theta),
		rospy.Time.now(),
		turtlename,
		"world")

#subscribe to the turtles pose, and call the above function
if __name__== '_main_':
	rospy.init_node('turtle_tf_broadcaster')
	turtlename = rospy.get_param('~turtle')
	rospy.Subscriber('/%s/pose' % turtlename,
			  turtlesim.msg.Pose,
			  handle_turtle_pose,
			  turtlesname)

rospy.spin()
