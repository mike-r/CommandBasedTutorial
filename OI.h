#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI {
private:

public:
	OI();
	Joystick* rightJoy;				// First joystick plugged into DS
	JoystickButton* button1;		// Trigger
	JoystickButton* button2;		// ??
	JoystickButton* button3;		// Unknown
	JoystickButton* button4;		// On left top of joystick
};

#endif
