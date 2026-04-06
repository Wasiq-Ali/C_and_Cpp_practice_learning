// #include <stdio.h>

// int main() {
// 	int asking_number;

// 	printf("Set a Number Please! \n");

// 	if (scanf("%d", &asking_number) != 1) {
// 		printf("Invalid input\n");
// 		return 1;
// 	}

// 	if (asking_number >= 1) {
// 		printf("Natural Number\n");
// 	} else {
// 		printf("Not Natural Number\n");
// 	}

// 	return 0;
// }

#include <stdio.h>

int main() {
	int number;
	int d1, d2, d3;
	int result;

	printf("Enter a 3-digit number: ");
	scanf("%d", &number);

	d1 = number / 100;
	d2 = (number / 10) % 10;
	d3 = number % 10;

	result = d1*d1*d1 + d2*d2*d2 + d3*d3*d3;

	if (result == number) {
		printf("Armstrong Number\n");
	} else {
		printf("Not an Armstrong Number\n");
	}

	return 0;
}