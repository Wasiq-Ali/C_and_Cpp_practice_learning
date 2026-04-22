// 1. Write a program to read three integers from a file.

// #include <stdio.h>

// int main(){
// 	FILE *fptr;
// 	int number;

// 	fptr = fopen("../practice.txt", "r");

// 	if (fptr == NULL){
// 		printf("Error: Could not open file.\n");
// 		return 1;
// 	}

// 	for(int i = 0; i < 3; i++){
// 		if (fscanf(fptr, "%d", &number) == 1){
// 			printf("The Number is: %d\n", number);
// 		} else {
// 			printf("Error: Failed to read number.\n");

// 			break;
// 		}
// 	}

// 	fclose(fptr);

// 	return 0;
// }

// 2. Write a program to generate multiplication table of a given number in text
// format. Make sure that the file is readable and well formatted.

// Take name and salary of two employees as input from the user and write them to
// a text file in the following format:
// i. Name1, 3300
// ii. Name2, 7700

// #include <stdio.h>

// int main(){
// 	FILE *fptr;
// 	int asking;

// 	printf("Please enter the number for the table: ");
// 	scanf("%d", &asking);

// 	fptr = fopen("table.txt", "w");

// 	if (fptr == NULL){
// 		printf("❌ Error: File create nahi ho saki.\n");
// 		return 1;
// 	}

// 	fprintf(fptr, "Multiplication Table of %d\n", asking);
// 	fprintf(fptr, "----------------------------\n");

// 	for (int i = 1; i <= 10; i++){
// 		if (fprintf(fptr, "%2d x %2d = %3d\n", asking, i, asking * i) < 0){
// 			printf("❌ Error: Table write nahi ho saki.\n");
// 			fclose(fptr);
// 			return 1;
// 		}
// 	}

// 	if (fclose(fptr) != 0){
// 		printf("❌ Error: File properly close nahi hui.\n");
// 		return 1;
// 	}

// 	printf("✅ Mubarak ho! Table successfully file me save ho gayi.\n");

// 	return 0;
// }


#include <stdio.h>

int main(){
	FILE *fptr;
	char name1[50], name2[50];
	int salary1, salary2;

	printf("Enter name of first employee: ");
	scanf(" %[^\n]", name1);

	printf("Enter salary of first employee: ");
	scanf("%d", &salary1);

	printf("Enter name of second employee: ");
	scanf(" %[^\n]", name2);

	printf("Enter salary of second employee: ");
	scanf("%d", &salary2);

	fptr = fopen("employees.txt", "w");

	if (fptr == NULL){
		printf("Error: File could not be created.\n");
		return 1;
	}

	fprintf(fptr, "%s, %d\n", name1, salary1);
	fprintf(fptr, "%s, %d\n", name2, salary2);

	fclose(fptr);

	printf("Data successfully written to file.\n");

	return 0;
}