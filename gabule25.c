#include <stdio.h>

int main(void)
{
	int age;
	double monthly_salary;
	double monthly_debt_payments;

	printf("Enter applicant's age: ");
	if (scanf("%d", &age) != 1) {
		printf("Invalid age input.\n");
		return 1;
	}

	printf("Enter monthly salary (P): ");
	if (scanf("%lf", &monthly_salary) != 1) {
		printf("Invalid salary input.\n");
		return 1;
	}

	printf("Enter existing monthly debt payments (P): ");
	if (scanf("%lf", &monthly_debt_payments) != 1) {
		printf("Invalid debt payment input.\n");
		return 1;
	}

	if (age < 21 || age > 60) {
		printf("Applicant does not qualify.\n");
		printf("First failed requirement: age must be between 21 and 60.\n");
	} else if (monthly_salary < 20000.0) {
		printf("Applicant does not qualify.\n");
		printf("First failed requirement: monthly salary must be at least P20,000.\n");
	} else if (monthly_debt_payments > monthly_salary * 0.40) {
		printf("Applicant does not qualify.\n");
		printf("First failed requirement: monthly debt payments must not exceed 40%% of salary.\n");
	} else {
		printf("Applicant qualifies for the loan.\n");
	}

	return 0;
}
