#include <stdio.h>

int main(void){
	int n,x,i,a;
	scanf("%d %d",&n,&x);
	int num[n];
	for (i=0;i<n;i++){
		scanf("%d",&a);
		num[i]=a;		
	}
	for (i=0;i<n;i++){
		if(x==num[i]){
			printf("%d",i);
			break;
		}
	}
	if (i==5){
		printf("Not found");
	}
}
