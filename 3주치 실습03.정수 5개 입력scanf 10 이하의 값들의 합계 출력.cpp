#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
 
int main()
{
	printf("정수 5개 입력\n");
	int a,b,c,d,e;
	int sum = 0;
	scanf("%d %d %d %d %d", &a, &b, &c,&d,&e);
	if (a <= 10)
		sum = sum + a;
	if (b <= 10)
		sum = sum + b;
	if (c <= 10)
		sum = sum + c;
	if (d <= 10)
		sum = sum + d;
	if (e <= 10)
		sum = sum + e;
	printf("10이하의 값들의 합계: %d\n", sum);
	return 0;
}