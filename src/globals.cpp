#include "main.h"
pros::Controller master(pros::E_CONTROLLER_MASTER);
pros::Controller slave(pros::E_CONTROLLER_PARTNER);

pros::Motor FL(1);
pros::Motor BL(2);
pros::Motor FR(3);
pros::Motor BR(4);
//drive functions
//bool arcade;
int leftdrive;
int rightdrive;

void cv(){
leftdrive = master.get_analog(ANALOG_LEFT_Y);
rightdrive = master.get_analog(-ANALOG_RIGHT_Y);
}

void vroomvroom(){
	//if(arcade==!arcade){
		FL.move(leftdrive);
		BL.move(leftdrive);
		FR.move(rightdrive);
		BR.move(rightdrive);
	//}
}