#include <stdio.h>

int main(void){
    int n,i=1,a,b,c;
    scanf("%d", &n);
    for (;i<=n;i++){
        scanf("%d %d %d", &a,&b,&c);
        if(a+b>c){
            printf("Case #%d: true\n", i);
        } else {
            printf("Case #%d: false\n", i);
        }
    }
}