// 1. Create a two-dimensional vector using structures in C

// #include <stdio.h>

// struct vector {
// 	int x;
// 	int y;
// };

// int main() {
// 	struct vector quantity = {10, 50};
	
// 	printf("%d %d\n", quantity.x, quantity.y);

// 	return 0;
// }

// 2. Write a function ‘sumVector’ which returns the sum of two vectors passed to it.
// The vectors must be two–dimensional

// #include <stdio.h>

// struct vector {
// 	int i;
// 	int j;
// };

// struct vector add(struct vector v1, struct vector v2) {
// 	struct vector v3 = {
// 		v1.i + v2.i,
// 		v1.j + v2.j
// 	};

// 	return v3;
// } 

// int main(){
	
// 	struct vector v1 = {5, 6};
// 	struct vector v2 = {1, 9};
// 	struct vector v3 = add(v1, v2);

// 	printf("The value of vector v3 is %di + %d\n", v3.i, v3.j);
	
// 	return 0;
// }

// #include <stdio.h>
// #include <string.h>

// struct Student {
// 	char name[50];
// 	int age;
// 	char email[50];
// };

// void print_student(struct Student ind_01);

// int main(){
// 	struct Student ind_01 = {"Wasiq Ali", 21, "wasiqali878@gmail.com"};

// 	print_student(ind_01);

// 	return 0;
// }

// void print_student(struct Student ind_01) {
// 	printf("%s\n", ind_01.name);
// 	printf("%d\n", ind_01.age);
// 	printf("%s\n", ind_01.email);
// }

#include <stdio.h>
#include <string.h>

struct Student {
	char name[50];
	int age;
	char email[50];
};

struct Student print_student(struct Student ind_01);

int main() {
	struct Student ind_01 = {"Wasiq Ali", 21, "wasiqali878@gmail.com"};

	struct Student ind_02 = print_student(ind_01);

	return 0;
}

struct Student print_student(struct Student ind_01) {
	struct Student ind_02;

	strcpy(ind_02.name, ind_01.name);
	ind_02.age = ind_01.age;
	strcpy(ind_02.email, ind_01.email);

	printf("%s\n", ind_01.name);
	printf("%d\n", ind_01.age);
	printf("%s\n", ind_01.email);

	return ind_02;
}