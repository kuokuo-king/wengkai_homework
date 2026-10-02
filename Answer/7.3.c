#include <stdio.h>
int main(){
    int m,n,i=2,a,cnt,b,c=0;
    scanf("%d %d",&m,&n);
    for(;i<10e+4;i++){
        a=2;
        while(i%a!=0){
            a++;
        }
        if(a==i){
            cnt++;
            if(cnt>=m && cnt<=n){
                printf("%d",i);
                c++;
                if(c<10){
                	printf(" ");
				}
				else{
					printf("\n");
					c =0;
				}
            }
        }
    }
    return 0;
}
