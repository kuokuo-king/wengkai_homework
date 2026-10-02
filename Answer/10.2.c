#include <stdio.h>
#include <string.h>

int main(void){
	char x[81],y[81];
	int i=0,j=0;
	while((x[i]=getchar())!='\n')i++;
	x[i]='\0';
	while((y[j]=getchar())!='\n')j++;
	y[j]='\0';
	char *p;
	while((p=strstr(x,y)!=NULL){
		strcpy(p,p+strlen(y));
	}
	printf("%s",x);
}
