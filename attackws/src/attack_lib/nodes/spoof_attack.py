#!/usr/bin/env python
#Akila Ganlath, University of California Riverside, Pasqualetti-Zhu Cyberphysical Security Group
#Creates a node which publishes an random values to a sensor
import rospy
import math
import random
from  ardrone.h import navdata
from std_msgs.msg import String

def alt_attacker():
	#publish to altitude topic
	spoof_altitude = rospy.Publisher('/ardrone/navdata/alt', BLAH, queue_size=10)
	#publish strings to a new topic called chatter
	chat = rospy.Publisher('chatter', String, queue_size=10)
	rospy.init_node('spoof_attack', anonymous=False)
	
	#define the rospy Rate object
	alt_hertz=5					#hz
	rate = rospy.Rate(alt_hertz)	
	while not rospy.is_shutdown():
		
		#define the msg as a Twist msg type
		alt_msg=BLAH()
		
		#from ardrone_drive documentation, the /ardrone/navdata/alt msg range is [-,]
		alt_msg = random.randint(-,)
		
		#publish the attack to cmd_vel topic
		rand_vel.publish(attack_msg)
		
		#log and print the attack values
		attack_str="Publishing Attack Messages %s" % rospy.get_time()
		print "Linear X: %d" % alt_msg
		rospy.loginfo(attack_str)
		chat.publish(attack_str)
		rate.sleep()
		
if __name__ == '__main__':
    try:
	rand_attacker()
    except rospy.ROSInterruptException:
	pass
