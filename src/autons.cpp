#include "autons.hpp"


void skills(){
    using namespace arms::chassis;

	//fire cata for 44 triballs
	intakepist.set_value(true);
	for (int i; i < 44; i += 1) {
		triballcontrol::fireCata;
        pros::delay(10);
    }
	//move({{-80, 0}}, 100, arms::NONE); //move through barrier
	//move({{-70, 30, -180}}, 70, arms::REVERSE );//follow L shape barrier until get to middle- tune
	
	move({{-100, -56, 180}}, 100, arms::NONE); //bash triballs
	//get back to the same place

	//move to left side
	move({{-60, -60, 90}}, 100, arms::NONE);
	//bash triballs
	move({{-100, -56, 180}}, 100, arms::NONE);
	move({{-60, -60, 90}}, 100, arms::NONE);

	//come to middle
	move({{-60, -30, 90}}, 100, arms::NONE);
	turn({{10, -30}}); //turn towards goal from middle
	move({{-100, -30, 180}}, 100, arms::NONE); //bash from center

	

	
}


void leftsidehalfawp(){
    using namespace arms::chassis;

    //grab triball
    triballcontrol::intakewithoptical();
    intakepist.set_value(true);
    pros::delay(1000);

    //grab and come back
    move({{-50, 0, -45}}, 100, arms::REVERSE | arms::ASYNC);
    intakepist.set_value(false);
    waitUntilFinished(2);

    
    



}