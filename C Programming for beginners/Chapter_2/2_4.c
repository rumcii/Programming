// Create a new program that prompts a user for numbers and
// determines total revenue using the following formula: Total
// Revenue = Price * Quantity .


#include <stdio.h>

main()
{
	float fPrice;
	float fQuantity;
	float fRevenue;

	printf("Enter quantity: ");
	scanf("%f", &fQuantity);
	printf("Enter price: ");
	scanf("%f", &fPrice);

	fRevenue = fPrice * fQuantity;

	printf("The revenue is: %.2f\n", fRevenue);

	return 0;
}