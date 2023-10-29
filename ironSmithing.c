/*
 * OSRS Smithing Calculator
 * Adrian Curammeng- akaSkies
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	// EXP Granted for Items
	const double ironBar = 12.5;
	const double ironPlatebody = 125.0;
	double expNeeded = 0.0;
	double accumExp = 0.0;

	int platesNeeded = 0;
	int barsNeeded = 0;

	printf("Enter EXP Needed for level-up: ");
	scanf("%lf", &expNeeded);
	printf("\n");

	int i;
	int flag = 0;
	while (accumExp < expNeeded)
	{
		for (i = 0; i < 5 && !flag; i++)
		{
			if (accumExp >= expNeeded)
			{
				flag = 1;
			}
			else
			{
				accumExp += ironBar;
				barsNeeded++;
			}
		}
		if (accumExp < expNeeded)
		{
			accumExp += ironPlatebody;
			platesNeeded += 1;
		}
	}

	printf("Platebodies needed: %d  (%d bars)\n", platesNeeded, barsNeeded);

	return 0;
}
