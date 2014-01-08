#ifndef DRIVEMOTORONESEC_H
#define DRIVEMOTORONESEC_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Mike
 */
class DriveMotorOneSec: public CommandBase {
private:
	Timer *timer;				// Keep track on how long command is running
public:
	DriveMotorOneSec();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
