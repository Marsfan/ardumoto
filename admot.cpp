#include <admot.h>

Admot::Admot() {
pinMode(3, OUTPUT);
	pinMode(11, OUTPUT);
	pinMode(12, OUTPUT);
	pinMode(13, OUTPUT);
}


void Admot::mot1(int dir, int pwr)
{
	digitalWrite(12, dir);
	analogWrite(3, pwr);
}

void Admot::mot2(int dir, int pwr)
{
	digitalWrite(13, dir);
	analogWrite(11, pwr);
}

void Admot::both(int dir1, int dir2, int pwr)
{
	digitalWrite(12, dir1);
	digitalWrite(13, dir2);
	analogWrite(3, pwr);
	analogWrite(11, pwr);
}

void stop()
{
	analogWrite(3, 0);
	analogWrite(11, 0);
}
