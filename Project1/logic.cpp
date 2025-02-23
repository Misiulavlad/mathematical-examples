#include "util.h"

char mathematical_sign() {

	char sign;
	int num = rand() % 2+1;
	switch (num) {
	case 1: sign = '+'; break;
	case 2: sign = '-'; break;
	}
	return sign;
}


int examples() {
	srand(time(0));
	int start = rand();
	int first_num;
	int sec_num;
	int result;
	long long count_of_mistakes = 0;

	int vec[SIZE];

	clock_t start_time = clock();

	for (int i = 0; i < 50; i++) {
		char sign = mathematical_sign();

		first_num = rand() % 20+1 ;
		sec_num = rand() % 20+1;
		
		cout << first_num << " " << sign << " " << sec_num << " = ";
		

		switch (sign) {
		case '+':result = first_num + sec_num; break;
		case '-':result = first_num - sec_num; break;
		}
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


	cout << "Spent time: " << minutes << " minutes " << seconds << " seconds" << endl;
	cout << "Count_of_mistakes: ";
	return count_of_mistakes;

}