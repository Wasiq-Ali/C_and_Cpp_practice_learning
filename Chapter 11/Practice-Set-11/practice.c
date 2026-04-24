// 1. Write a program to dynamically create an array of size 6 capable of storing 6
// integers.

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
// 	int *ptr;
// 	int n = 6;

// 	ptr = malloc(n * sizeof(int));

// 	ptr[0] = 0;
// 	ptr[1] = 1;
// 	ptr[2] = 2;
// 	ptr[3] = 3;
// 	ptr[4] = 5;

// 	printf("%d\n", ptr[4]);

// 	free(ptr);

// 	return 0;
// }

// 2. Eg Pratice File

// #include <stdio.h>

// int main(){
// 	FILE *ptr;

// 	ptr = fopen("../practice.txt", "w");

// 	fprintf(ptr, "The is the file of Hello World\n");
// 	fprintf(ptr, "Yes you are Right my friend\n");

// 	fclose(ptr);

// 	return 0;
// }

// 3. Use the array in problem 1 to store 6 integers entered by the user.

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
// 	int n = 6;

// 	int *ptr = malloc(n * sizeof(int));

// 	for (int i = 0; i < n; i++) {
// 		scanf("%d", &ptr[i]);
// 	}

// 	for (int i = 0; i < n; i++) {
// 		printf("%d ", ptr[i]);
// 	}

// 	free(ptr);
// 	return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
// 	int n = 6;
// 	int *ptr;

// 	ptr = calloc(n, sizeof(int));

// 	for (int i = 0; i < n; i++) {
// 		ptr[i] = i + 1;
// 	}

// 	for (int i = 0; i < n; i++) {
// 		printf("%d ", ptr[i]);
// 	}

// 	free(ptr);

// 	return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
// 	int *ptr;
// 	int n = 5;

// 	// allocate 5 integers
// 	ptr = malloc(n * sizeof(int));

// 	// input for 5 elements
// 	for (int i = 0; i < n; i++) {
// 		scanf("%d", &ptr[i]);
// 	}

// 	// increase size to 10
// 	ptr = realloc(ptr, 10 * sizeof(int));

// 	// input remaining 5 elements
// 	for (int i = 5; i < 10; i++) {
// 		scanf("%d", &ptr[i]);
// 	}

// 	// print all 10 elements
// 	for (int i = 0; i < 10; i++) {
// 		printf("%d ", ptr[i]);
// 	}

// 	free(ptr);

// 	return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
// 	int n;
// 	printf("How many names? ");
// 	scanf("%d", &n);

// 	char **names = malloc(n * sizeof(char *));

// 	for (int i = 0; i < n; i++) {
// 		names[i] = malloc(50 * sizeof(char)); // each name max 50 chars
// 		scanf("%s", names[i]);
// 	}

// 	for (int i = 0; i < n; i++) {
// 		printf("%s\n", names[i]);
// 	}

// 	for (int i = 0; i < n; i++) {
// 		free(names[i]);
// 	}
// 	free(names);

// 	return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// typedef struct {
// 	char name[50];
// 	int age;
// } User;

// int main() {
// 	int capacity = 2;
// 	int count = 0;

// 	User *users = malloc(capacity * sizeof(User));

// 	while (1) {
// 		if (count == capacity) {
// 			capacity *= 2;
// 			users = realloc(users, capacity * sizeof(User));
// 		}

// 		printf("Enter name (or 'exit' to stop): ");
// 		scanf("%s", users[count].name);

// 		if (strcmp(users[count].name, "exit") == 0) {
// 			break;
// 		}

// 		printf("Enter age: ");
// 		scanf("%d", &users[count].age);

// 		count++;
// 	}

// 	printf("\n--- Users List ---\n");
// 	for (int i = 0; i < count; i++) {
// 		printf("%s - %d\n", users[i].name, users[i].age);
// 	}

// 	free(users);
// 	return 0;
// }