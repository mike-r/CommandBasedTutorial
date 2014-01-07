#include "MotorControlSubsystem.h"
#include "../Commands/DriveMotorCommand.h"
#include "../Robotmap.h"

MotorControlSubsystem::MotorControlSubsystem() : Subsystem("MotorControlSubsystem") {
	motorJaguar = new CANJaguar(windowMotor, CANJaguar::kPercentVbus);	// set output from -1.0 to 1.0 (same as PWM)
	motorJaguar->ConfigNeutralMode(CANJaguar::kNeutralMode_Brake);		// set Jag to "break" when output = 0.0
}
    
void MotorControlSubsystem::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new DriveMotorCommand());
}

void MotorControlSubsystem::Drive(float speed) {
	motorJaguar->Set(speed);
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
