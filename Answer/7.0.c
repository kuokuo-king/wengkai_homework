#include <stdio.h>

int main(){
	char x;
	int sum=0;
	while(1){
		scanf("%c",&x);
		if (x=='\n'){
			break;
		}
		sum += x-'1'+1;
	}
	int sum0=sum,sum1=0,a,b;
	for(;sum>0;sum/=10){
		a=sum%10;
		sum1=sum1*10+a;
	}
	for(;sum1>0;sum1/=10){
		b=sum1%10;
		switch (b){
			case 0: printf("ling "); break;
			case 1: printf("yi "); break;
			case 2: printf("er "); break;
			case 3: printf("san "); break;
			case 4: printf("si "); break;
			case 5: printf("wu "); break;
			case 6: printf("liu "); break;
			case 7: printf("qi "); break;
			case 8: printf("ba "); break;
			case 9: printf("jiu "); break;
		}
			
	}
}
