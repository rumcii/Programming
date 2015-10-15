// Силата на гравитационното поле на луната е приблизително 17% от
// това на земята. Напишете програма, която да изчислява тежестта на
// човек на луната, по дадената тежест на земята.

#include <stdio.h>

main()
{
	float fWeight;
	float fMoonWeight;

	printf("\nEnter your weight: ");
	scanf("%f", &fWeight);

	fMoonWeight = fWeight * ((float)17 / 100);

	printf("\nYour weight on the moon is: %.2f\n\n", fMoonWeight);

	return 0;
}