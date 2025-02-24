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

int examples(int size, int name) {
	srand(time(0));
	int first_num, sec_num, third_num;
	int result;
	long long count_of_mistakes = 0;

	int vec[SIZE];

	clock_t start_time = clock();

	for (int i = 0; i < size; i++) {
		char sign = mathematical_sign();

		int sign2;
		switch (sign) {
		case '+': sign2 = '-'; break;
		case '-': sign2 = '+'; break;
		}


		do {
			first_num = rand() % 8 + 1;
			sec_num = rand() % 8 + 1;
			third_num = rand() % 8 + 1;

			switch (sign) {
			case '+': result = first_num + sec_num - third_num; break;
			case '-': result = first_num - sec_num + third_num; break;
			}
		} while (result <= 0);



		cout << first_num << " " << sign << " " << sec_num << " " << sign2 << " " << third_num << " = ";

		cin >> vec[i];

		while (vec[i] != result || vec[i] <= 0) {

			cout << "Try again: " << endl;
			cout << first_num << " " << sign << " " << sec_num << " " << sign2 << " " << third_num << " = ";
			cin >> vec[i];
			count_of_mistakes++;


		}
	}
		clock_t end_time = clock();
		double time_spent = double(end_time - start_time) / CLOCKS_PER_SEC;

		int minutes = int(time_spent) / 60;
		int seconds = int(time_spent) % 60;

		cout << "Spent time: " << (minutes < 10 ? "0" : "") << minutes << ":" << (seconds < 10 ? "0" : "") << seconds << endl;
		cout << "Count of mistakes: " << count_of_mistakes << endl;

		cout << "Made by: ";
		return name;
	}
