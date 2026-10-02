#include <stdio.h>

int main(){
	int N;
	int i;
	double sum=0;
	double add;
	double up=2;
	double down=1;
	double down0;
	scanf("%d",&N);
	for(i=1;i<=N;i++){
		down0 = down;
		add = up/down;
		sum += add;
		up +=down;
		down = up-down0;
	}
	printf("%.2f",sum);
}
