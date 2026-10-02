#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a=1,b=1,c;
	while (b<=n){
		c=a*b;
		printf("%d * %d=%d",a,b,c);
		if (a==b){
			printf("\n");
			a=1;
			b++;
		}else{
			if (c<10){
				printf("   ");
			}else{
				printf("  ");
			}
			a++;
		}
	}
	return 0;
}
