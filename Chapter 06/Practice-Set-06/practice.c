// 1. Write a program to print the address of a variable. Use this address to get the
// 	value of the variable

#include <stdio.h>

int main(){
	int a = 10;
	int *pointer = &a;

	printf("Address of a Variable: %p\n", (void*)&a);
	printf("Value of a Variable: %d\n", *pointer);

	return 0;
}

// 2. Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to
// a function and print its address. Are these addresses same? Why? => No because that var is non pointer var its call by value not Call by reference;

// #include <stdio.h>

// void print_address(int a);

// int main(){
// 	int i = 15;

// 	printf("The Address of I is: %p\n", &i);

// 	print_address(i);

// 	return 0;
// }

// void print_address(int a) {
// 	printf("The Address of Passing One: %p\n", &a);
// }

// 3. Write a program to change the value of a variable to ten times of its current
// value.

// #include <stdio.h>

// void change_value_10_times(int *a);

// int main() {
// 	int x = 20;

// 	change_value_10_times(&x);

// 	printf("The Core Value: %d\n", x);

// 	return 0;
// }

// void change_value_10_times(int *a) {
// 	*a = (*a) * 10;
// 	printf("The Calling Value: %d\n", *a);
// }

// 6. Write a program to print the value of a variable i by using “pointer to pointer” type
// of variable.

// #include <stdio.h>

// int main(){
// 	int i = 30;
// 	int *pointer_01 = &i;
// 	int **pointer_02 = &pointer_01;

// 	printf("%d\n", **pointer_02);

// 	return 0;
// }