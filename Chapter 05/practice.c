// #include <stdio.h>

// void print_greetings();
// int sum(int x, int y);

// int main() {
// 	printf("Hello World! \n");
// 	print_greetings();

// 	int addition = sum(5, 6);

// 	printf("%d \n", addition);

// 	return 0;
// }

// void print_greetings() {
// 	printf("Assalam Walikum, Bhai!! \n");
// }

// int sum(int x, int y) {
// 	return x + y;
// }


#include <stdio.h>

double my_pow(double base, int exponent) {
	double result = 1;
	int i;

	if(exponent < 0) {
		base = 1 / base;
		exponent = -exponent;
	}

	for(i = 0; i < exponent; i++) {
		result *= base;
	}

	return result;
}

int main() {
	double base;
	int exponent;

	printf("Enter base: ");
	scanf("%lf", &base);

	printf("Enter exponent: ");
	scanf("%d", &exponent);

	double result = my_pow(base, exponent);
	printf("%.2lf ^ %d = %.4lf\n", base, exponent, result);

	return 0;
}