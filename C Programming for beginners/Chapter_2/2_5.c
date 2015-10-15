// Build a new program that prompts a user for data and
// determines a commission using the following formula:
// Commission = Rate * (Sales Price – Cost).

#include <stdio.h>

main()
{
	float fSalesPrice, fCost, fCommission;
	int iRate;

	printf("Enter rate: ");
	scanf("%d", &iRate);
	printf("Enter sales price: ");
	scanf("%f", &fSalesPrice);
	printf("Enter cost: ");
	scanf("%f", &fCost);

	fCommission = iRate * (fSalesPrice - fCost);

	printf("The commission is: %.2f\n", fCommission);

	return 0;
}