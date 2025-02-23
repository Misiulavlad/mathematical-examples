#include "util.h"

char mathematical_sign() {
	srand(time(0));
	char sign;
	int num = rand() % 1;
	switch (num) {
	case 0: sign = '+';
	case 1: sign = '-';
	}
	return sign;
}


int examples() {
	srand(time(0));
	int start = rand();
	int first_num;
	int sec_num;
	int result;
	int count_of_mistakes = 0;
	char sign = mathematical_sign();
	int vec[SIZE];

	clock_t start_time = clock();

	for (int i = 0; i <= 5; i++) {
		first_num = rand() % 20+1;
		sec_num = rand() % 20+1;
		switch (sign) {
		case '+':cout << first_num << "+" << sec_num<<endl;
		case '-':cout << first_num << "-" << sec_num<<endl;
		}

		switch (sign) {
		case '+':result = first_num + sec_num;
		case '-':result = first_num - sec_num;
		}
		cout << "Answer: ";
		cin >> vec[i];
		if (vec[i] != result) {
			count_of_mistakes++;
		}
	}
	clock_t end_time = clock();
	double time_spent = double(end_time - start_time) / CLOCKS_PER_SEC;

	int finish = rand();
	int spent = finish - start;
	int minutes = int(time_spent) / 60;
	int seconds = int(time_spent) % 60;
	

	cout << "Spent time: " << minutes << " minutes " << seconds << " seconds"<<endl;
	cout << "Count_of_mistakes: ";
	return count_of_mistakes;

}