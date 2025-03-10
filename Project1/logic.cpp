#include "util.h"
#include <ctime>

char mathematical_sign() {
	char sign;
	int num = rand() % 2 + 1;

	switch (num) {
	case 1: sign = '+'; break;
	case 2: sign = '-'; break;
	}
	return sign;
}


int examples(int size, string name) {
	srand(time(0));

	int first_num, sec_num, third_num;
	int result;
	long long count_of_mistakes = 0;
	int vec[SIZE] = { 0 };
	int point = 1;

	clock_t start_time = clock();

	for (int i = 0; i < size; i++) {

		char sign = mathematical_sign();

		do {
			first_num = rand() % 8 + 1;

			do {

				sec_num = rand() % 8 + 1;

			} while (sec_num == first_num);

			do {

				third_num = rand() % 8 + 1;

			} while (third_num == first_num || third_num == sec_num);

			switch (sign) {
			case '+': result = first_num + sec_num - third_num; break;
			case '-': result = first_num - sec_num + third_num; break;
			}

		} while (result <= 0);

		switch (sign) {
		case '+':cout << point << "/" << size << "). " << first_num << " + " << sec_num << " - " << third_num << " " << " = "; break;
		case '-':cout << point << "/" << size << "). " << first_num << " - " << sec_num << " + " << third_num << " " << " = "; break;
		}
		point++;
		cin >> vec[i];

		while (vec[i] != result || vec[i] <= 0) {

			cout << "\033[1;31m Try again : " << endl;
			cout << "\033[0m";

			switch (sign) {
			case '+':cout << first_num << " + " << sec_num << " - " << third_num << " " << " = "; break;
			case '-':cout << first_num << " - " << sec_num << " + " << third_num << " " << " = "; break;
			}

			cin >> vec[i];

			count_of_mistakes++;
		}

		cout << "\033[1;32m Correct " << "\033[0m" << endl;

	}

	clock_t end_time = clock();
	double time_spent = double(end_time - start_time) / CLOCKS_PER_SEC;

	int minutes = int(time_spent) / 60;
	int seconds = int(time_spent) % 60;

	cout << "\n";
	cout << "Made by: " << name << endl;
	cout << "Spent time: " << (minutes < 10 ? "0" : "") << minutes << ":" << (seconds < 10 ? "0" : "") << seconds << endl;
	cout << "Count of mistakes: ";

	return count_of_mistakes;
}