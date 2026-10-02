#include <stdio.h>

int main(){
	int len=0,x;
	scanf("%d",&x);
	int x0=x,a,sum,b=1;
	for(;x>0;x/=10){
		len++;
	}
	x=x0;
	for(;x>0;x/=10){
		a=x%10;
		sum=sum*10+a;
	}
	for(;len>0;len--){
		a=sum%10;
		sum/=10;
		switch(len){
			case 3:
				for(;a>0;a--){
					printf("B");
				}
				break;
			case 2:
				for(;a>0;a--){
					printf("S");
				}
				break;
			case 1:
				for(;a>0;a--,b++){
					printf("%d",b);
				}
				break;
		
				
		}
	}
}
