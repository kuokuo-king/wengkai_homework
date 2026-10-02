#include <stdio.h>

int main(){
	int result,a;
	char op;
	scanf("%d",&result);
	while(1){
		scanf(" %c",&op);
		if (op == '='){
			printf("%d",result);
			break;
		}
		scanf("%d",&a);
		switch(op){
			case '+':result+=a;break;
			case '-':result-=a;break;
			case '*':result*=a;break;
			case '/':
				if(a==0){
					printf("ERROR");
					return 0;
				}
				result/=a;
				break;
			default:
				printf("ERROR");
				return 0;
		}
	}
}
