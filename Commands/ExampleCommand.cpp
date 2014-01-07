#include "ExampleCommand.h"

ExampleCommand::ExampleCommand() {
	// Use Requires() here to declare subsystem dependencies
	Requires(examplesubsystem);
}

// Called just before this Command runs the first time
void ExampleCommand::Initialize() {
	printf("Initialize\n");			// write to NetConsole
	SetTimeout(5);
	examplesubsystem->On();
}

// Called repeatedly when this Command is scheduled to run (50 times per second)
void ExampleCommand::Execute() {
	printf("Execute\n");			// write to NetConsole
}

// Make this return true when this Command no longer needs to run execute()
// Runs once when the command is done
bool ExampleCommand::IsFinished() {
	printf("IsFinished\n");			// write to NetConsole
	return IsTimedOut();			// Will be TRUE after 5 seconds from Init
}

// Called once after isFinished returns true
void ExampleCommand::End() {
	printf("End\n");
	examplesubsystem->Off();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ExampleCommand::Interrupted() {
	printf("Interupted\n");
	examplesubsystem->Off();

}
