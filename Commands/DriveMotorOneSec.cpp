#include "DriveMotorOneSec.h"
#include "../Subsystems/MotorControlSubsystem.h"

DriveMotorOneSec::DriveMotorOneSec() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(motorControlSubsystem);		// This is what causes this command
	timer = new Timer();					//     to preempt the joystick
}

// Called just before this Command runs the first time
void DriveMotorOneSec::Initialize() {
	timer->Reset();
	timer->Start();
}

// Called repeatedly when this Command is scheduled to run
void DriveMotorOneSec::Execute() {
	motorControlSubsystem->Drive(.3);
}

// Make this return true when this Command no longer needs to run execute()
bool DriveMotorOneSec::IsFinished() {
	return timer->Get() > 1;
}

// Called once after isFinished returns true
void DriveMotorOneSec::End() {
	motorControlSubsystem->Drive(0);
	timer->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveMotorOneSec::Interrupted() {
	motorControlSubsystem->Drive(0);
	timer->Stop();
}
