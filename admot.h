#ifndef _ADMOT_H
#define _ADMOT_H

#if (ARDUINO >= 100)
# include <Arduino.h>
#else
# include <WProgram.h>
#endif

class Admot {
	private:
		// Private functions and variables here
	public:
	Admot();
	void mot1(int dir, int pwr);
	void mot2(int dir, int pwr);
	void both(int dir1, int pwr1, int dir2 = -1, int pwr2 = -1);
	void stop();
};

#endif
