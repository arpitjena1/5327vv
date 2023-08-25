#include "globalconfig.hpp"


pros::Rotation cataRot(19);
pros::Motor cata(7,true);
pros::Motor intake(8);
pros::Optical optical(13);
pros::Controller master(CONTROLLER_MASTER);
pros::ADIDigitalOut wings('D');
pros::ADIDigitalOut intakepist('F');
pros::ADIDigitalOut blockers('A');