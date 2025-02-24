#include "util.h"
int main() {
	int size;
	cout << "Input count of examples: ";
	cin >> size;
	while (size <= 0) {
		cin >> size;
	}

	cout << "Input your name: ";
	int name;
	cin >> name;
	cout << examples(size,name);

	return 0;
}