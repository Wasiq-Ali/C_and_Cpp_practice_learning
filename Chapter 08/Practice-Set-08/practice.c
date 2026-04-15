// 1. Which of the following is used to appropriately read a multi-word string.
// 	1. gets()
// 	2. puts()
// 	3. printf()
// 	4. scanf()

// Answer is gets()

// 2. Write a program to take string as an input from the user using %c and %s confirm
// that the strings are equal.

#include <stdio.h>
// #include <string.h>

// int main() {
// 	char str_0[20];
// 	char str_1[20];

// 	scanf("%s", str_0);

// 	scanf(" %c", &str_1[0]);
// 	for (int i = 1; i < strlen(str_0); i++) {
// 		scanf("%c", &str_1[i]);
// 	}
// 	str_1[strlen(str_0)] = '\0';

// 	if (strcmp(str_0, str_1) == 0) {
// 		printf("Strings are equal\n");
// 	} else {
// 		printf("Strings are not equal\n");
// 	}

// 	return 0;
// }

// 3. Write your own version of strlen function from <string.h>

#include <stdio.h>

int mystrlen(char str[]);

int main(){
	char str[] = "Wasiq Bhai";

	printf("The Length is: %d\n", mystrlen(str));
	return 0;
}

int mystrlen(char str[]) {
	int i = 0;
	while (str[i] != '\0') {
		i++;
	}
	return i;
}
