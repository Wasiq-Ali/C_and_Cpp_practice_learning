// Question No 01: What will be the output of this program

// #include <stdio.h>

// int main(){
// 	int a = 10;
// 	if (a = 11)
// 		printf("I am 11 \n"); // Output is this every time because a = 11 is assign opeator not compare operator.
// 	else
// 		printf("I am not 11 \n");

// 	return 0;
// }

// Question No 02: Write a program to determine whether a student has passed or failed. To pass, a
// student requires a total of 40% and at least 33% in each subject. Assume there
// are three subjects and take the marks as input from the user.

// #include <stdio.h>

// int main() {
// 	int eng, maths, isl;

// 	printf("Enter the Marks of Eng: ");
// 	scanf("%d", &eng);

// 	printf("Enter the Marks of Maths: ");
// 	scanf("%d", &maths);

// 	printf("Enter the Marks of Isl: ");
// 	scanf("%d", &isl);

// 	float percentage = (eng + maths + isl) / 3.0;

// 	if (eng < 33 || maths < 33 || isl < 33) {
// 		printf("Sorry! You are Failed (Subject fail)\n");
// 	}
// 	else if (percentage < 40) {
// 		printf("Sorry! You are Failed (Low percentage: %.2f)\n", percentage);
// 	}
// 	else {
// 		printf("Yahoo!! You Passed. Percentage: %.2f\n", percentage);
// 	}

// 	return 0;
// }

// Question: 03

// #include <stdio.h>

// int main(){
// 	int age;

// 	printf("Please Enter You Age to Check Eligibility of Driving: ");
// 	scanf("%d", &age);

// 	switch (age) {
// 	case 12:
// 		printf("Not Able \n");
// 		break;

// 	case 14:
// 		printf("Not Able You Are just 14 \n");
// 		break;
// 	case 18:
// 		printf("Able You Are just 18 \n");
// 		break;
// 	default:
// 		printf("Not Able");
// 	}
// 	return 0;
// }
