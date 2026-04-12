// 1. Write a program using function to find average of three numbers

// #include <stdio.h>

// float average(int x, int y, int z);

// int main() {
// 	int x = 5, y = 10, z = 20;

// 	printf("%f \n", average(x, y, z));

// 	return 0;
// }

// float average(int x, int y, int z) {
// 	return (x + y + z) / 3.0;
// };

// 2. Write a function to convert Celsius temperature into Fahrenheit.

// #include <stdio.h>

// float convert_to_fahrenheit(int celsius);

// int main(){
// 	int celsius = 32;

// 	printf("Here is your Celsius to fahrenheit: %f \n", convert_to_fahrenheit(celsius));

// 	return 0;
// }

// float convert_to_fahrenheit(int celsius) {
// 	return (9.0 / 5.0) * celsius + 32;
// };

// 3. Write a program using recursion to calculate nth element of Fibonacci series.

// #include <stdio.h>

// int fibonacci(int n);

// int main() {
// 	int n = 6;

// 	printf("Fibonacci at position %d = %d", n, fibonacci(n));

// 	return 0;
// }

// int fibonacci(int n) {
// 	if (n == 0) {
// 		return 0;
// 	}
// 	if (n == 1) {
// 		return 1;
// 	}

// 	return fibonacci(n - 1) + fibonacci(n - 2);
// }

// What will the following line produce in a C program:

// #include <stdio.h>

// int main(){
// 	int a = 4;
// 	printf("%d %d %d \n", a, ++a, a++);

// 	return 0;
// }	