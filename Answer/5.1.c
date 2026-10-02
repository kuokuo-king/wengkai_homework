#include <stdio.h>

int main(){
	int a,b,i;
	scanf("%d/%d",&a,&b);
	for (i=1;i<=a;i++){
		if(a%i == 0){
			if(b%i == 0){
				a=a/i;
				b=b/i;
				i=1;
			}
		}
	}
	printf("%d/%d",a,b);
	return 0;
}
