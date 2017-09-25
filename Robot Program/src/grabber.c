#include "main.h"
#include "grabber.h"

void openGrabber(int channel) // opens the grabber without a toggle
{
	motorSeet(channel, 127);

	if (motorGet(channel) == 0)
	{
		motorStop(channel);
	}
}

void openGrabber(int channel, bool toggle) // opens the grabber with a toggle
{
	if (toggle) // if the toggle is on then turn on the servo
	{
		motorSet(channel, 127);
	}

	if (motorGet(channel) == 0) // when the servo stops moving, stop applying power.
	{
		motorStop(channel);
	}
}

void closeGrabber(int channel)
{
	motorSet(channel, -127);

	if (motorGet(channel) == 0)
	{
		motorStop(channel);
	}
}

void closeGrabber(int channel, bool toggle)
{
	if (toggle)
	{
		motorSet(channel, -127)

		if 
	}
}

void moveVertical(int channel, int value)
{

}

void autoUp(int channel, int speed, bool limit)
{

}

void autoDown(int channl, int speed, bool limit)
{

}
