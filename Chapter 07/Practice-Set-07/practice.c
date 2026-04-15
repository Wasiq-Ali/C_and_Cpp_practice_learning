// 1. Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points
// to the third element where ptr is a pointer pointing to the first element of the
// array

// #include <stdio.h>

// int main() {
// 	int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

// 	int *ptr = arr;

// 	printf("%d\n", *(ptr+2));

// 	printf("%p\n", &arr[0]); // As the same as printf("%p\n", arr).

// 	return 0;
// }

// 2. If S[3] is a 1-D array of integers then *(S+3) refers to the third element:
// (i) True. Wrong
// (ii) False. True
// (iii) Depends. Wrong

// 2. Write a program to create an array of 10 integers and store multiplication table of
// 5 in it.

// #include <stdio.h>

// int main(){
// 	int array[10];

// 	for (int i = 0; i < 10; i++) {
// 		array[i] = 5 * (i + 1);
// 	};

// 	for (int i = 0; i < 10; i++) {
// 		printf("%d\n", array[i]);
// 	};

// 	return 0;
// }

// 3. Repeat problem 3 for a general input provided by the user using scanf.

// #include <stdio.h>

// int main(){
// 	int array[10];
// 	int input_number;

// 	printf("Please Enter a Number: ");
// 	scanf("%d", &input_number);

// 	for (int i = 0; i < 10; i++) {
// 		array[i] = input_number * (i + 1);
// 	};

// 	for (int i = 0; i < 10; i++) {
// 		printf("%d\n", array[i]);
// 	};

// 	return 0;
// }

// 4. Write a program containing a function which reverses the array passed to it.

// #include <stdio.h>

// void reverse(int array[], int n);
// void print_array(int array[], int n);

// int main(){
// 	int array[5] = {1, 2, 3, 4, 5};
	
// 	print_array(array, 5);
// 	reverse(array, 5);
// 	print_array(array, 5);
	
// 	return 0;
// }

// void print_array(int array[], int n) {
// 	for (int i = 0; i < n; i++){
// 		printf("%d ", array[i]);
// 	}

// 	printf("\n");
// };

// void reverse(int array[], int n) {
// 	int temporary;

// 	for (int i = 0; i < n/2; i++){
// 		temporary = array[i];
// 		array[i] = array[n - i - 1];
// 		array[n - i - 1] = temporary;
// 	}

// 	printf("\n");
// };

// 5.  Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7
// and 9 respectively.

// #include <stdio.h>

// int main(){
// 	int array[3][10];
// 	int table[3] = {2, 4, 6};

// 	for (int i = 0; i < 3; i++) {
// 		for (int j = 0; j < 10; j++) {
// 			array[i][j] = table[i] * (j + 1);	
// 		}
// 	};

// 	for (int i = 0; i < 3; i++) {
// 		for (int j = 0; j < 10; j++) {
// 			printf("The value of Array %d\n", array[i][j]);	
// 		}

// 		printf("\n");
// 	}
	
// 	return 0;
// }

// 6. Create a three–dimensional array and print the address of its elements in
// increasing order

#include <stdio.h>

int main(){
	int array[2][3][4];

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 4; k++) {
				printf("%p ", &array[i][j][k]);
			}
		}
	}
	
	return 0;
}