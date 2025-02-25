#include "util.h"
int main() {
	int size;
	string name;

	cout << "Input count of examples (max count is 100): ";
	cin >> size;

	while (size <= 0) {
		cout << "Please enter a valid number: ";
		cin >> size;
	}

	cout << "Input your name: ";
	cin >> name;

	Syst;
	cout << examples(size, name) << endl;
	PAUS;
	Syst;

	cout << "Do you want to decide agin? if yeah print Yes, if no print No: ";
	string decision;
	cin >> decision;

	if (decision != "Yes" && decision != "No" && decision != "yes" && decision != "no") {
		cout << "Error";
		return -1;
	}

	if (decision == "No" || decision == "no") {
		Syst;
		cout << "\033[1;31m It's your decision. Bruh \033[0m";
		return 0;
	}

	if (decision == "Yes" || decision == "yes") {
		cout << "Input count of examples: ";
		cin >> size;
		cout << examples(size, name) << endl;
	}

	PAUS;
	return 0;
}