Hardware used : 
Component	Quantity
Arduino R4 Minima	1
NEMA 17 Stepper Motor	1
DRV8825 Driver	1
12V Power Supply	1
Breadboard / Jumper Wires	As required

Finding phases of the stepper motor: We can further Connect one of it’s phases to A1, A2 and another to B1,B2.
 Check for the resistance between each wire of the motor, if the wires belong to the same coil, there will exist some resistance. For wires from 2 different coils there will be no resistance. 
1.	Both the coils have nearly the same resistance.
2.	The Beep mode in the multi-metre can also be used to check if the wires belong to the same coil.
3.	2 endings of the coils are the 2 wires and belong to 1 phase.

Wiring Connections of drv8825:
(Also refer to the wiring diagram attached)
There are 16 pins of DRV8825. 
•	En – Enables/Disables the activities of the driver. It’s an active low pin. For it to enable the driver, it has be LOW, at HIGH, it disables the driver.
•	RST- Reset. The motor returns to the same starting position, It’s an active low pin, so gets connected to 5V of Arduino for normal operation of motor.
•	SLP – Puts driver into power saving sleep mode when not it use. It’s an active low pin, so gets connected to 5V of Arduino so that driver is enabled while it’s functioning.
•	STEP – This pin gets connected to a pin of Arduino and this controls the 
•	DIR - This pin gets connected to a pin of Arduino and this controls the direction of motion of the motor. For acw rotation set it to LOW and for cw rotation set it to HIGH.
•	MO, M1,M2 – These pins get connected to Arduino and when set to a combination of HIGHs/LOWs, results in different micro-stepping conditions.
•	VMOT and GND MOT – connect to external supply (12V power supply).
•	Pins 11,12,13,14 – gets connected to wires from motor, connect A1,A2 to 11, 12 and B1,B2 to 13,14. Maintain a certain order for smooth function of motor.
•	GND logic – gets connected to gnd of Arduino.

Micro-stepping: 
Full step mode – 200 steps per revolution. A1,A2,B1,B2 get energized individually one at a time.
Half step – 400 steps per revolution. A1, A1-A2, A2, A2-B1,B1, B1-B2,B2,B2-A2 : process of the coils getting energized. 
1/4 step – 800 steps per revolution.
1/8 step – 1600 steps per revolution.
1/16 step – 3200 steps per revolution.
1/32 step – 6400 steps per revolution.


Ritisha Tripathy,
NIT,Durgapur.
(drv8825 driver has 1/32 microstepping configuration)

Trouble shooting:
1.	Motor doesn’t rotate, only vibrates :
There are chances of loose connection or fault in connection of coils.
You may also check and adjust the input of the delay() function accordingly.
