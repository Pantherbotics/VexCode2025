#include "init.hpp"

motor RightFront = motor(PORT10, ratio18_1, true);
motor LeftFront = motor(PORT1, ratio18_1, false);
motor RightRear = motor(PORT9, ratio18_1, true);
motor LeftRear = motor(PORT12, ratio18_1, false);
motor Arm = motor(PORT19, ratio18_1, false);
motor Claw = motor(PORT11, ratio18_1, false);
controller Controller1 = controller(primary);
vex::brain       Brain;
int Y=0;
int X=0;
int R=0;
int Armpos =0;
int Clawpos = 0;
    