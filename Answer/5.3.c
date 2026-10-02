#include <stdio.h>

int main(){
	int a,n,sum,add,cnt=1;
	scanf("%d %d",&a,&n);
	add =a;
	sum =a;
	while(cnt<n){
		add = add *10 +a;
		sum +=add;
		cnt++;
		
	}
	printf("%d",sum);
}
