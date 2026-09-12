 #include <stdio.h>

int main(void)
{
	int day, month, year;
	int valid = 0;

	printf("Enter day, month, and year: ");
	if (scanf("%d %d %d", &day, &month, &year) != 3) {
		printf("Invalid input.\n");
		return 1;
	}

	if (year > 0) {
		if (month >= 1 && month <= 12) {
			if (month == 2) {
				if (day >= 1 && day <= 28) {
					valid = 1;
				} else {
					if (day == 29) {
						if (year % 400 == 0 ||
							(year % 4 == 0 && year % 100 != 0)) {
							valid = 1;
						}
					}
				}
			} else {
				if (month == 4 || month == 6 || month == 9 || month == 11) {
					if (day >= 1 && day <= 30) {
						valid = 1;
					}
				} else {
					if (day >= 1 && day <= 31) {
						valid = 1;
					}
				}
			}
		}
	}

	if (valid) {
		printf("The date is valid.\n");
	} else {
		printf("The date is invalid.\n");
	}

	return 0;
}
