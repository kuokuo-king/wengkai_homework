#include <stdio.h>
//水仙花数是指一个N位数(N23)，它的每个位上的数字的N次幂之和等于它本身
int main(){
	int n,a,d=1,sum=0;
	scanf("%d",&n);                     //几位数 
	int min=1,count=1;
	while (count<n){
		min*=10;
		count++;
		
	}
	count =1; 
	int i;
	int max = min*10;
	while (min<max) {
		a=min;
		while (a>0){
			i = a%10;
			while(count<n+1){
				d=d*i;
				count++; 
			}
			count = 1; 
			sum += d;
			d =1;
			a = a/10;
			
		}
		if (sum == min){
			printf("%d\n",min);
		}
		sum =0;
		min++;
	}
	
	return 0;
}
