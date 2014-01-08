#include "MotorControlSubsystem.h"
#include "../Commands/DriveMotorCommand.h"
#include "../Robotmap.h"

MotorControlSubsystem::MotorControlSubsystem() : Subsystem("MotorControlSubsystem") {
	motorJaguar = new CANJaguar(windowMotor, CANJaguar::kPercentVbus);	// set output from -1.0 to 1.0 (same as PWM)
	motorJaguar->ConfigNeutralMode(CANJaguar::kNeutralMode_Brake);		// set Jag to "break" when output = 0.0

/*
 	leftFrontJaguar = new CANJaguar(leftFrontMotor, CANJaguar::kPercentVbus);	// set output from -1.0 to 1.0 (same as PWM)
	leftFrontJaguar->ConfigNeutralMode(CANJaguar::kNeutralMode_Brake);		// set Jag to "break" when output = 0.0
	
	leftRearJaguar = new CANJaguar(leftRearMotor, CANJaguar::kPercentVbus);	// set output from -1.0 to 1.0 (same as PWM)
	leftRearJaguar->ConfigNeutralMode(CANJaguar::kNeutralMode_Brake);		// set Jag to "break" when output = 0.0
	
	rightFrontJaguar = new CANJaguar(rightFrontMotor, CANJaguar::kPercentVbus);	// set output from -1.0 to 1.0 (same as PWM)
	rightFrontJaguar->ConfigNeutralMode(CANJaguar::kNeutralMode_Brake);		// set Jag to "break" when output = 0.0

	rightRearJaguar = new CANJaguar(rightRearMotor, CANJaguar::kPercentVbus);	// set output from -1.0 to 1.0 (same as PWM)
	rightRearJaguar->ConfigNeutralMode(CANJaguar::kNeutralMode_Brake);		// set Jag to "break" when output = 0.0
*/
}
    
void MotorControlSubsystem::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new DriveMotorCommand());
}

void MotorControlSubsystem::Drive(float speed) {
	motorJaguar->Set(speed);
//	leftFrontJaguar->Set(speed);
//	leftRearJaguar->Set(speed);
//	rightFrontJaguar->Set(speed);
//	rightRearJaguar->Set(speed);
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
