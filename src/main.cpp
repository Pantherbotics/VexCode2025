/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       cseab                                                     */
/*    Created:      3/26/2025, 5:24:42 PM                                     */
/*    Description:  V5 project                                                */
/*      This is a mechanum drive squarebot with a single arm motor and a claw.
The drive uses the right joystick for xY motion and the left for arcade.  
The mixture allows strafing and steering.   The soft limits on the arm and
 claw require the arm to start in the down position and the claw to start 
 fully open.                                                                         */
/*----------------------------------------------------------------------------*/
#include "vex.h"
#include "init.hpp"
#include "mechanum.hpp"
using namespace vex;
    

int main() {
    omnidrive();
        
        // Allow other tasks to run
        //this_thread::sleep_for(10);
}//end main

