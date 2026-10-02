#include <stdio.h>

int main()
{
	int number;
	scanf("%d",&number);
	int n1 = number/100;
	int n2 = number/10-n1*10;
	int n3 = number-n1*100-n2*10;
	int n = n3*100+n2*10+n1;
	printf("%d",n);
	return 0;
}
