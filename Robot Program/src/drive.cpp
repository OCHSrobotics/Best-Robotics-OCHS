#include"main.h"
void drive() {
		int power;
		int turn;
		int joystick;
	while (1) {
		joystick = 1;
		power = joystickGetAnalog(joystick,2);
		turn = joystickGetAnalog(joystick,1);
		motorSet(2,power+turn);
		motorSet(3,power-turn);
	delay(20);
}}
