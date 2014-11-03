#include <admot.h>

admot::admot() {
pinMode(3, OUTPUT);
	pinMode(11, OUTPUT);
	pinMode(12, OUTPUT);
	pinMode(13, OUTPUT);
}


void admot::mot1(int dir, int pwr)
{
	digitalWrite(12, dir);
	analogWrite(3, pwr);
}

void admot::mot2(int dir, int pwr)
{
	digitalWrite(13, dir);
	analogWrite(11, pwr);
}

void admot:both(int dir1, int dir2, int pwr1, int pwr2)
{
	digitalWrite(12, dir1);
	analogWrite(3, pwr1);
	digitalWrite(13, dir2);
	analogWrite(11, pwr);
}

void stop()
{
	analogWrite(3, 0);
	analogWrite(11, 0);
}
