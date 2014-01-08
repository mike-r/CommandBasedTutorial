#include "OI.h"
#include "Commands/ExampleCommand.h"
#include "Commands/DriveMotorCommand.h"
#include "Commands/DriveMotorOneSec.h"
#include "Robotmap.h"

OI::OI() {
	// Process operator interface input here.
	rightJoy = new Joystick(rightStick);
	
	button1 = new JoystickButton(rightJoy, 1);
	button1->WhenPressed(new ExampleCommand());
	
	button2 = new JoystickButton(rightJoy, 2);
	button2->WhileHeld(new ExampleCommand());
	
	button3 = new JoystickButton(rightJoy, 3);
	button3->WhenReleased(new ExampleCommand());
	
	button4 = new JoystickButton(rightJoy, 4);
	button4->WhenPressed(new DriveMotorOneSec());
}
