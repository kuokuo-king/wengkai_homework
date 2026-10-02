#include <stdio.h>
/*12345/10000 = 1  12345%10000 2345
2345/1000 =1     2345%1000 345
 */
int main(){
	int n,dig=0,a,b,cnt=1,cnt0;
	scanf("%d",&n);
	if(n<0){
		printf("fu ");
		n = -n;
	}
	int n0=n;
	while(n>0){
		n/=10;
		cnt*=10;
		dig+=1;
	}
	cnt/=10;
	cnt0=cnt;
	n=n0;
	while(dig>0){
		a = n/cnt;
		b = n%cnt;
		switch(a){
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
		n = b;
		cnt /= 10; 
		dig--;
	}
}
