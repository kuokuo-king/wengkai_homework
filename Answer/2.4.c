#include <stdio.h>

int main()
{
	int n0;
	scanf("%d",&n0);
	int n1=n0/12;
	int n2=n0-n1*16;
	int n3=n1*10+n2;
	printf("%d",n3);
	return 0;
}
