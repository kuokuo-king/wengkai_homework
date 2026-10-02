#include <stdio.h>
#include <string.h>

int main(void){
	char x[101],y[101];
	int i,n;
	char* p=x;
	char* q=y;
	while ((x[i]=getchar())!='\n')i++;
	x[i]='\0';
	scanf("%d",&n);
	for (i=0;i<n;i++){
		y[i]=x[i];
	}
	strcpy(p,p+n);
	printf("%s%s",x,y);
}
