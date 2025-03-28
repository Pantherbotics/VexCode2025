#include "init.hpp" 
#include "mechanum.hpp"

void omnidrive(){
    Brain.Screen.printAt( 10, 20, "it works" );
    Controller1.Screen.setCursor(1,1);
    Controller1.Screen.print("it work");

    Arm.setStopping(hold);
    Claw.setStopping(hold);
    Arm.setPosition(0,degrees);
    Claw.setPosition(0,degrees);
    Arm.setVelocity(30,percent);
    Claw.setVelocity(30,percent);
    while(1) {
        Y=Controller1.Axis2.position(percent)+Controller1.Axis3.position(percent);
        X=Controller1.Axis1.position(percent);
        R=Controller1.Axis4.position(percent);

        RightFront.setVelocity(Y-X-R,percent);
        LeftFront.setVelocity(Y+X+R,percent);
        RightRear.setVelocity(Y+X-R,percent);
        LeftRear.setVelocity(Y-X+R,percent);

        RightFront.spin(forward);
        RightRear.spin(forward);
        LeftFront.spin(forward);
        LeftRear.spin(forward);

        Armpos=Arm.position(degrees);
        Controller1.Screen.setCursor(2,1);
        Controller1.Screen.print("Arm position=");
        Controller1.Screen.print(Armpos);

        Clawpos=Claw.position(degrees);
        Controller1.Screen.setCursor(3,1);
        Controller1.Screen.print("Claw position=");
        Controller1.Screen.print(Clawpos);

        if (Controller1.ButtonR1.pressing()&& Armpos<650){
            Arm.spin(forward);
            }
            else if(Controller1.ButtonR2.pressing()&& Armpos>70){
            Arm.spin(reverse);}
            else {Arm.stop();}

        if (Controller1.ButtonL1.pressing()&& Clawpos<250){
            Claw.spin(forward);
            }
            else if(Controller1.ButtonL2.pressing()&& Clawpos >50){
            Claw.spin(reverse);}
            else {Claw.stop();}


            
    }
}