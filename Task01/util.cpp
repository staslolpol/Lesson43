#include "util.h"

void init_random(int array[DEFAULT_SIZE], int lenght, int a, int b) {
	if (a > b) {
		int t = a;
		a = b;
		b = t;
	}

	for (int index = 0; index < lenght; index++)
	{
		array[index] = rand() % (b - a + 1) + a;
	}
}

string convert(int array[DEFAULT_SIZE], int lenght) {
	string s = "";
	for (int index = 0; index < lenght; index++)
	{
		s += to_string(array[index]) + " ";
	}

	return s;
}

void print(string msg) {
	cout << msg << endl;
}