#include "DriveMotorCommand.h"

DriveMotorCommand::DriveMotorCommand() {
	// Use requires() here to declare subsystem dependencies
	Requires(motorControlSubsystem);
}

// Called just before this Command runs the first time
void DriveMotorCommand::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void DriveMotorCommand::Execute() {
	motorControlSubsystem->Drive(oi->rightJoy->GetX());
}

// Make this return true when this Command no longer needs to run execute()
bool DriveMotorCommand::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void DriveMotorCommand::End() {
	motorControlSubsystem->Drive(0);		// Shutdown motor
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveMotorCommand::Interrupted() {
}
