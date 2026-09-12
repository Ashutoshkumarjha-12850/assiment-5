#include <stdio.h>

int main(void)
{
	double weight, height, bmi;

	printf("Enter weight in kilograms: ");
	if (scanf("%lf", &weight) != 1 || weight <= 0) {
		printf("Invalid weight. Weight must be greater than zero.\n");
		return 1;
	}

	printf("Enter height in metres: ");
	if (scanf("%lf", &height) != 1 || height <= 0) {
		printf("Invalid height. Height must be greater than zero.\n");
		return 1;
	}

	bmi = weight / (height * height);
	printf("BMI: %.2f\n", bmi);

	if (bmi < 18.5)
		printf("Classification: Underweight\n");
	else if (bmi < 25.0)
		printf("Classification: Normal\n");
	else if (bmi < 30.0)
		printf("Classification: Overweight\n");
	else if (bmi < 35.0)
		printf("Classification: Obesity Class I\n");
	else if (bmi < 40.0)
		printf("Classification: Obesity Class II\n");
	else
		printf("Classification: Obesity Class III\n");

	return 0;
}