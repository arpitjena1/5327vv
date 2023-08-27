#include "autons.hpp"
#include "ARMS/chassis.h"

void catafire(int times){
	intakepist.set_value(true);
	for (int i; i < times; i += 1) {
		triballcontrol::fireCata;
        pros::delay(10);
    }
}

void skills(){
    using namespace arms::chassis;

	//fire cata for 44 triballs
	//catafire(50);
	move({{-80, 0,0}}, 100, arms::REVERSE); //move through barrier


  
	move({{-80, -10, 90}}, 100, arms::REVERSE );//follow L shape barrier close;lk nb
	move({{-60, -25, 90}}, 70, arms::NONE); //l shape
	waitUntilFinished(5);
	move({{-100, -50, 180}}, 100, arms::REVERSE); //bash triballs

	//get back to the same place
	move({{-55, -20, -90}}, 70, arms::NONE);


	//move to left side
	move({{-55, -85, -90}}, 50, arms::NONE);

	//bash triballs
	move({{-100, -60, -180}}, 100, arms::REVERSE);

	move({{-55, -85, -90}}, 50, arms::NONE);

	//bash triballs
	move({{-100, -70, -180}}, 100, arms::REVERSE);
	move({{-55, -95, -90}}, 50, arms::NONE);

	//bash triballs
	move({{-100, -80, -180}}, 100, arms::REVERSE);
	move({{-55, -85, 0}}, 50, arms::NONE);
	


	/*
	move({{-55, -70, 90}}, 50, arms::NONE);
	move({{-100, -50, 0}}, 100, arms::REVERSE); //bash from center
	move({{-55, -70, -90}}, 50, arms::NONE);
	move({{-60, -25, 90}}, 70, arms::NONE); 
	move({{-100, -50, 180}}, 100, arms::REVERSE); //bash triballs
	*/




	

	
}


void simpleleftsidehalfawp(){
    using namespace arms::chassis;

    //grab triball
    triballcontrol::intake();
    intakepist.set_value(true);
    pros::delay(1000);

    //grab and come back
    move({{0, -30, -45}}, 100, arms::REVERSE | arms::ASYNC);
    intakepist.set_value(false);
	intake.move(0);
    waitUntilFinished(2);
	
    
    

}


void simplerighthalfawp(){
	using namespace arms::chassis;
	//push triball in goal
	move({{-30, 10, 0}}, 100, arms::REVERSE);
}


void multtriballrightside(){
	using namespace arms::chassis;

	triballcontrol::intakewithoptical;
	intakepist.set_value(true);

	//go back with preload and ball under barrier
	move({{-70, -20, -90}}, 100, arms::REVERSE);
	//move a little forward
	move({{-70, -10, -90}}, 100, arms::REVERSE);

	//turn around and outtake triball out of system
	move({{-70, -10, 90}}, 100, arms::REVERSE);
	triballcontrol::outtakewithoptical;

	//go forward to take out matchload and bash both triball in goal
	triballcontrol::intake();
    intakepist.set_value(true);
	move({{-70, -5, -90}}, 100, arms::REVERSE);
    pros::delay(1000);
    move({{-70, -45, -90}}, 100, arms::REVERSE | arms::ASYNC);
    intakepist.set_value(false);
	intake.move(0);
    waitUntilFinished(2);

	//turn around to outtake matchload
	move({{-70, -10, 90}}, 100, arms::REVERSE);
	triballcontrol::outtakewithoptical;

	//go forward a little bit to bash the third ball in
	move({{-70, -1, -90}}, 100, arms::REVERSE);
	move({{-70, -30, -90}}, 100, arms::REVERSE);
	
	
	

}