// Question 01: Write a C program to calculate area of a rectangle:
// 				a. Using hard coded inputs.
// 				b. Using inputs supplied by the user.


// #include <stdio.h>

// int main() {
// 	int width, height;

// 	printf("Please Enter a Width: \n");
// 	scanf("%d", &width);

// 	printf("Please Enter a Height: \n");
// 	scanf("%d", &height);

// 	int rectangle = width * height;

// 	printf("The Area of Recatange is: %d \n", rectangle);

// 	return 0;
// }

// Question 02: Calculate the area of a circle and modify the same program to calculate the
// volume of a cylinder given its radius and height.

// #include <stdio.h>
// #define PI 3.1416

// int main(){
// 	int radius = 50;
// 	int height = 23;

// 	float area_of_circle = PI*radius*radius;
// 	float volume_of_cylinder = PI*radius*radius*height;

// 	printf("The Area of Circle %d is %f: \n", radius, area_of_circle);
// 	printf("Volume of Cylinder (radius = %d, height = %d): %f\n", radius, height, volume_of_cylinder);

// 	return 0;
// }

// Question 03: Write a program to convert Celsius (Centigrade degrees temperature to
// Fahrenheit.

// #include <stdio.h>

// int main(){
// 	int celsius;

// 	printf("Please Insert a Temprature in Celsius:");
// 	scanf("%d", &celsius);

// 	float celsius_to_fahrenheit = (9.0 / 5.0)*celsius+32; 

// 	printf("Here is your Celsius to Fahrenheit Conversion: %f \n", celsius_to_fahrenheit);

// 	return 0;
// }

// Question 04: Write a program to calculate simple interest for a set of values representing
// principal, number of years and rate of interest

// #include <stdio.h>

// int main() {
// 	int p = 5500;
// 	int r = 10;
// 	int t = 5;

// 	float simple_interest = (p * r * t) /100;
// 	printf("Here is Your Simple Interest of a %d Years is: %.2f Rs. \n", t, simple_interest);

// 	return 0;
// }
