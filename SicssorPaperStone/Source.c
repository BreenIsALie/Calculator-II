/*Calculator 2 v2*/
/*User can now change numbers between function runs*/
/*Mathias Jönsson*/

#include <stdio.h>

int main(void)
{
	float NumberOne, NumberTwo, Result;
	int Selection;								
	
	printf("\nFunction Select:");
	printf("\n1: Sum\n2: Difference\n3: Quotient\n4: Product\n5: Exit\n");	/*Show user functions and prompt for select*/
	scanf_s("%d", &Selection);
	
	while (Selection != 5)			/*Run loop until user inputs 5 (Exit condition for while loop)*/
	{
		printf("\nEnter first number: \n");
		scanf_s("%f", &NumberOne);				/*Normal number input here, save to float variables*/
		printf("\nEnter second number: \n");
		scanf_s("%f", &NumberTwo);
		
		if (Selection == 1)			/*If user selects 1, run this function then end the loop to go to function select again*/
		{	
			Result = NumberOne + NumberTwo;	
			printf("\n\nResult: %f ", Result);
		}
		else if (Selection == 2)	
		{
			Result = NumberOne - NumberTwo;
			printf("\nResult: %f", Result);
		}
		else if (Selection == 3)
		{
			if (NumberTwo == 0) /*Detect if second number is 0, and */
			{
				printf("\nError: Cannot divide by zero due to logic\n");
			}
			else				/*If the number isn't 0, run the calculation as normal*/
			{
				Result = NumberOne / NumberTwo;
				printf("\nResult: %f ", Result);
			}
		}
		else if (Selection == 4)
		{	
			Result = NumberOne*NumberTwo;
			printf("\nResult: %f ", Result);
		}
		else
		{
			printf("\n\nERROR: Not a valid function, Select a function between 1 and 5");	/*Give user an error if the selection is not 1 - 5*/
		}
		printf("\n1: Sum\n2: Difference\n3: Quotient\n4: Product\n5: Exit\n");	/*Function select after one run of the while loop*/
		printf("\nFunction Select: \n");
		scanf_s("\n%d", &Selection);
	}
	return 0;
}