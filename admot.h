#ifndef _ADMOT_H
#define _ADMOT_H

#if (ARDUINO >= 100)
# include <Arduino.h>
#else
# include <WProgram.h>
#endif

class admot {
	private:
		// Private functions and variables here
	public:
		admot();
		void begin();
};

#endif
