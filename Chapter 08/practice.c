// #include <stdio.h>

// int main() {
// 	char first_name[] = "Wasiq Ali";
// 	char *fruits[3] = {"Apple", "Orange", "Grapes"};

// 	printf("Hello World\n");

// 	for(int i = 0; i < 3; i++) {
// 		printf("%s\n", fruits[i]);
// 	}

// 	return 0;
// }

// #include <stdio.h>

// int main() {
// 	char string[100];
// 	printf("Please Enter a String: \n");

// 	fgets(string, 100, stdin);

	

// 	printf("%s", string);

// 	for (int i = 0; string != "\0"; i++) {
		
// 	}
	

// 	return 0;
// }

#include <stdio.h>

int main() {
	char str[100];
	char *p;

	printf("Enter a string: ");
	fgets(str, sizeof(str), stdin);

	p = str;

	while(*p != '\0') {
		if(*p == '\n') {
			*p = '\0';
			break;
		}

		if(*p >= 'a' && *p <= 'z') {
			*p = *p - 32;
		}

		p++;
	}

	printf("Uppercase: %s\n", str);

	return 0;
}