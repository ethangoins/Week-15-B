#ifndef HALF_H
#define HALF_H
#include"goinsLib.h"

template <typename T>
class half {
private:
public:
	half(int);
	half(double);
	half(float);
};


template <typename T>
half<T>::half(int number) {
float halfed;
round(halfed) = static_cast<float>(number / 2);
return static_cast<int>(halfed);
}

template <typename T>
half<T>::half(double number) {
	double halfed;
	halfed = number / 2;
	return halfed;
}

template <typename T>
half<T>::half(float number) {
	float halfed;
	halfed = number / 2;
	return halfed;
}

#endif 