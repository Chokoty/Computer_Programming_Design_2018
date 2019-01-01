#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
 
int main()
{
	printf("정수 3개 입력\n");
	int x1, x2, x3;
	float m, d;
	scanf("%d %d %d", &x1, &x2, &x3);
	m = (x1 + x2 + x3) / 3;
	d = sqrt(((x1 - m)*(x1 - m) + (x2 - m)*(x2 - m) + (x3 - m)*(x3 - m))/3);// ^2안되는?
	printf("평균: %f\n표준편차: %f\n", m, d);
	return 0;
}