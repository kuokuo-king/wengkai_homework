#include <stdio.h>

int main(void){
    char x[81];
    char n;
    int i=0;
    while((x[i]=getchar())!='\n')i++;
    x[i] ='\0';
    n =getchar();
    i=0;
    char* a = strchr(x,n);
    if(a!=NULL){
    	printf("%s",a);
	}else printf("Not found");
	return 0;
}
