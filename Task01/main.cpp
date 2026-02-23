#include "util.h"

int main() {
	int array[DEFAULT_SIZE];

	int length;
	int a = 0, b = 20;

	do {
		cout << "Input size of array: ";
		cin >> length;
	} while (length <= 0);

	init_random(array, length, a, b);

	print("Result array: \n");
	print(convert(array, length));

	int value = 17;

	bool result = search_linear(array, length, value);


	print(result ? "Yes" : "No");

	print("Index of first element - "
		+ to_string(get_first_element(array, length, value)) + "\n");

	print("Index of last element - "
		+ to_string(get_last_element(array, length, value)) + "\n");

	print("Count elemen is "
		+ to_string(count_element(array, length, value)) + "\n");
	return 0;
}
