#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
 
int main()
{
	printf("���� 5�� �Է�\n");
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
	printf("10������ ������ �հ�: %d\n", sum);
	return 0;
}