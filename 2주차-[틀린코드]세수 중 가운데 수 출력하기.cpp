#include <stdio.h>
#define MAX2(a,b) (((a)>(b))?(a):(b))
#define MIN2(a,b) (((a)<(b))?(a):(b))
 
int main()
{
	int vOne, vTwo,vThree;
	int vLargest;
 
	vOne = 3;
	vTwo = 1;
	vThree = 7;
	vLargest = MAX2(vOne, vTwo);
	vLargest = MIN2(vLargest, vThree);
	printf("%d is middle integer among %d and %d and %d\n", vLargest, vOne, vTwo,vThree);
	return 0;
}