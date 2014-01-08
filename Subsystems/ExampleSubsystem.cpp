#include "ExampleSubsystem.h"
#include "../Robotmap.h"

ExampleSubsystem::ExampleSubsystem() : Subsystem("ExampleSubsystem") {
	relay1 = new Relay(1);			// use LED number 1
}
    
void ExampleSubsystem::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
	relay1->Set(Relay::kOff);
}

void ExampleSubsystem::On()
{
	relay1->Set(Relay::kOn);
}

void ExampleSubsystem::Off()
{
	relay1->Set(Relay::kOff);
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

