#include <stdio.h>

int main(){
	int m,n;
	scanf("%d %d",&m,&n);
	int count=0,sum=0;
	int a=2;
	if (m>n){
		printf("Êı¾İ´íÎó"); 
		return 0;
	}
	else{
		while(m<=n){
			a=2;
			while(m%a != 0){
				a++;
			}
			if (a==m){
				count++;
				sum += m;
			}
			m++;
		}
		printf("%d %d",count,sum);
	}
	return 0;
}
