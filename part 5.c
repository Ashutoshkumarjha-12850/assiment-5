/* Menu-driven banking system */
#include <stdio.h>

int main(void)
{
	int choice;
	double balance = 5000.0;
	double amount, rate, years, interest;

	do {
		printf("\n===== Banking System =====\n");
		printf("1. Check balance\n");
		printf("2. Deposit money\n");
		printf("3. Withdraw money\n");
		printf("4. Calculate annual simple interest\n");
		printf("5. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			printf("Current balance: Rs. %.2f\n", balance);
			break;

		case 2:
			printf("Enter deposit amount: ");
			scanf("%lf", &amount);
			if (amount > 0) {
				balance += amount;
				printf("Deposit successful. New balance: Rs. %.2f\n", balance);
			} else {
				printf("Invalid deposit amount.\n");
			}
			break;

		case 3:
			printf("Enter withdrawal amount: ");
			scanf("%lf", &amount);
			if (amount <= 0) {
				printf("Invalid withdrawal amount.\n");
			} else if (amount > balance) {
				printf("Insufficient balance.\n");
			} else {
				balance -= amount;
				printf("Withdrawal successful. New balance: Rs. %.2f\n", balance);
			}
			break;

		case 4:
			printf("Enter annual interest rate (%%): ");
			scanf("%lf", &rate);
			printf("Enter time in years: ");
			scanf("%lf", &years);
			if (rate >= 0 && years >= 0) {
				interest = balance * rate * years / 100.0;
				printf("Simple interest: Rs. %.2f\n", interest);
			} else {
				printf("Invalid rate or time.\n");
			}
			break;

		case 5:
			printf("Thank you for using the banking system.\n");
			break;

		default:
			printf("Invalid choice. Please try again.\n");
		}
	} while (choice != 5);

	return 0;
}
 