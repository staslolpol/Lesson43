#include <iostream>

using namespace std;
int main() {
	int length;

	cout << "Input size of array: ";
	cin >> length;

	int count = 0;

	while (length > 0) {
		length /= 2;
		count++;
	}


	cout << "Result count: " << count << endl;


	return 0;
}