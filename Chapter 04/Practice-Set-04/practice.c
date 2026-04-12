// Question: Write a program to print multiplication table of a given number n.

// #include <stdio.h>

// int main() {
// 	int input_number;

// 	printf("Please Enter a Number: ");
// 	scanf("%d", &input_number);

// 	for(int i = 1; i <= 10000000; i++) {
// 		printf("%d x %d = %d \n", input_number, i, (input_number * i));
// 	}

// 	return 0;
// }

// Write a program to print multiplication table of 10 in reversed order

// #include <stdio.h>

// int main() {
// 	int input_number = 2;

// 	for(int i = 10; i; i--) {
// 		printf("%d x %d = %d \n", input_number, i, (input_number * i));
// 	}

// 	return 0;
// }

// A do while loop is executed:
	// a. At least once. (TRUE)
	// b. At least twice.
	// c. At most once.

// What can be done using one type of loop can also be done using the other two
// types of loops – true or false? (TRUE)

// Write a program to sum first ten natural numbers using while loop

// #include <stdio.h>

// int main(){
// 	int i = 1;
// 	int sum = 0;

// 	while (i <= 10) {
// 		sum += i;
// 		i++;
// 	}

// 	printf("The Sum of First Ten Natural Number is: %d \n", sum);
	
// 	return 0;
// }

//  Write a program to implement program 5 ‘do-while’ loop

// #include <stdio.h>

// int main(){
// 	int i = 1;
// 	int sum = 0;

// 	do {
// 		sum = sum + i;
// 		i++;
// 	} while(i <= 10);

// 	printf("The Sum of First Ten Natural Number is: %d \n", sum);
	
// 	return 0;
// }

// Write a program to calculate the factorial of a given number using a for loop.

// #include <stdio.h>

// int main(){
// 	int n, product = 1;
// 	printf("Enter a Number: ");

// 	scanf("%d", &n);

// 	for (int i = 1; i <= n; i++) {
// 		product *= i;
// 	}
	
// 	printf("%d \n", product);

// 	return 0;
// }