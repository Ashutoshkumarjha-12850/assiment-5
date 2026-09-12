/* Solve ax^2 + bx + c = 0. */
#include <math.h>
#include <stdio.h>

int main(void)
{
	double a, b, c, discriminant;

	printf("Enter coefficients a, b, and c: ");
	if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
		printf("Invalid input.\n");
		return 1;
	}

	if (a == 0.0) {
		printf("Invalid quadratic equation: a must not be zero.\n");
		return 1;
	}

	discriminant = b * b - 4.0 * a * c;
	printf("Discriminant = %.6f\n", discriminant);

	if (discriminant > 0.0) {
		double root1 = (-b + sqrt(discriminant)) / (2.0 * a);
		double root2 = (-b - sqrt(discriminant)) / (2.0 * a);

		printf("The roots are real and distinct.\n");
		printf("Root 1 = %.6f\nRoot 2 = %.6f\n", root1, root2);
	} else if (discriminant == 0.0) {
		double root = -b / (2.0 * a);

		printf("The roots are real and equal.\n");
		printf("Root = %.6f\n", root);
	} else {
		printf("The roots are imaginary.\n");
	}

	return 0;
}
