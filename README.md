# vaccumcleanerbot
BASIC AIM:
To make a vacuum cleaning bot which can detect the presence of obstacles in its path to navigate itself throughout the area.

APPROACH:
Connecting the ultrasonic sensor to arduino and controlling it to detect obstacles in the path of the bot and creating a vacuum which can be used for suction of dirt particles from the floor. 






HARDWARE USED:
1. ultrasonic sensor
2. motor
3. arduino
4. motor driver

SOFTWARE USED:
For programing the arduino, arduino IDE was used.

IMPLEMENTATION AND WORKING:

The ultrasonic sensor and motors for wheels are connected to the arduino. The motor used for creating vacuum is powered separately, which remains on throughout, and a fan is connected to the shaft to create low pressure. The ultrasonic sensor is used to detect the obstacles in the path. If something is detected nearby both the wheels rotate in opposite direction so that the bot can turn otherwise it will continue moving forward. thus the bot traverse across the floor while cleaning it.
