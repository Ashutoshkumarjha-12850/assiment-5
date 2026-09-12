/* Menu-Driven Calculator */
#include <stdio.h>
#include <math.h>

int main(void)
{
	int choice;
	double first, second;

	do {
		printf("\nMenu-Driven Calculator\n");
		printf("1. Addition\n");
		printf("2. Subtraction\n");
		printf("3. Multiplication\n");
		printf("4. Division\n");
		printf("5. Modulus\n");
		printf("6. Power\n");
		printf("7. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);

		if (choice == 7) {
			printf("Exiting calculator.\n");
			break;
		}

		if (choice < 1 || choice > 6) {
			printf("Invalid choice. Please try again.\n");
			continue;
		}

		printf("Enter two numbers: ");
		scanf("%lf %lf", &first, &second);

		switch (choice) {
			case 1:
				printf("Result: %.2f\n", first + second);
				break;
			case 2:
				printf("Result: %.2f\n", first - second);
				break;
			case 3:
				printf("Result: %.2f\n", first * second);
				break;
			case 4:
				if (second == 0)
					printf("Error: division by zero is not allowed.\n");
				else
					printf("Result: %.2f\n", first / second);
				break;
			case 5:
				if (second == 0)
					printf("Error: modulus by zero is not allowed.\n");
				else
					printf("Result: %.2f\n", fmod(first, second));
				break;
			case 6:
				printf("Result: %.2f\n", pow(first, second));
				break;
		}
	} while (1);

	return 0;
}
