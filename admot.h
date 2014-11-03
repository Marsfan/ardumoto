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
	//void both(int dir1, int dir2, int pwr);
	void stop();
};

#endif
