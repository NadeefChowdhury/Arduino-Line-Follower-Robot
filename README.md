# Arduino-Line-Follower-Robot
A line follower robot using Arduino Uno, L293D motor driver and 2 IR sensors
# Components
Arduino Uno, L293D motor driver, 2 IR sensors, 2 DC/Gear motors, 1 9V battery, jumpers
# Theory
The IR sensors transmit and receive Infra red rays. If rays are received by a sensor, it indicates that they have been reflected from the ground, which proves that the ground there is white.
Again, if rays are not received, it indicates that they have not been reflected due to a black surface.
The robot has been programmed to move in the direction where the rays have not been reflected, in other words, follow a black line on a white surface.
