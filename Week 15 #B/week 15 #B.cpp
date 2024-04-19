// Ethan Goins
// CIS 1202 101
// April 18, 2024
// Exceptions, Templates, and Standard Template Library (STL) #B

#include"goinsLib.h"
#include<typeinfo>

template <class T>																							// Template
	T half(T number) {
		if (typeid(T).name() == typeid(int).name())															// Checks if int
		{
			float halfed = static_cast<float>(number) / 2;
			halfed = round(halfed);
			return halfed;
		}
		else if (typeid(T).name() == typeid(double).name()) {												// Checks if double
			double halfed = number;
			halfed = number / 2;
			return halfed;
		}
		else{																								// If its neither of the above its a float
			float halfed = number;
			halfed = number / 2;
			return halfed;
		}
	}

int main(){
	double a = 7.0;																							// Variables
	float b = 5.0f;
	int c = 3;

	cout << half(a) << endl;																				// Output
	cout << half(b) << endl;
	cout << half(c) << endl;

	endProgram();
}