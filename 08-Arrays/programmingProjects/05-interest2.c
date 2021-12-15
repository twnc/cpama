// Modify the interest.c program of Section 8.1 so that it compounds interest
// monthly instead of annually. The form of the output shouldn't change; the
// balance should still be shown at annual intervals.
// ORIGINAL:
// Prints a table of compound interest
// Enter interest rate: 6
// Enter number of years: 5
//
// Years  6%	  7%	  8%	  9%	 10%
//   1 	106.00	107.00	108.00	109.00	110.00
//   2 	112.36	114.49	116.64	118.81	121.00
//   3	119.10	122.50	125.97	129.50	133.10
//   4 	126.25	131.08	136.05	141.16	146.41
//   5 	133.82	140.26	146.93	153.86	161.05

#include<stdio.h>

#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int main(void)
{
	int i, low_rate, num_years, year;
	double value[5];

	printf("Enter interest rate: ");
	fflush(stdout);
	scanf("%d", &low_rate);
	printf("Enter number of years: ");
	fflush(stdout);
	scanf("%d", &num_years);

	printf("\nYears");
	for (i = 0; i < NUM_RATES; ++i) {
		printf("\t%3d%%", low_rate + i);
		value[i] = INITIAL_BALANCE;
	}
	printf("\n");


	for (year = 1; year <= num_years; ++year) {
		printf("%3d\t", year);
		for (i = 0; i < 5; ++i) {
			for(int j = 0; j < 12; ++j) {
				value[i] *= (100 + low_rate + i)/100.00;
			}
			printf("%7.2f\t", value[i]);
		}
		printf("\n");
	}



	return 0;
}
