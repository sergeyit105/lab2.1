// 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"



int main()
{
	double x = 1, S = 0.0, a = (x*x*x) / 3;
	long int n = 1, N = 20;
	for (n=1; n <= N; n++) {
		S += a;
		a *= -1 * (x*x) * (4 * n* n - 1) / (4 * (n + 2)*(n + 2) - 1);
	}

	double y = (1 + (x * x))/2 * atan(x) - x/2;
	printf("Sum S=%f\n Control y=%f\nTolerance %f\n", S, y,  fabs(y-S));

    return 0;
}
