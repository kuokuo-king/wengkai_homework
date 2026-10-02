#include <stdio.h>

int main(void){
	int l=0;
	char* p;
	char x[81];
	while((x[l]=getchar())!='\n')l++;
	x[l]='\0';
	for (;l>0;l--){
		if(x[l]==' '){
			p=x+l;
			*p='\0';
			printf("%s ",p+1);
		}
	}
	printf("%s",x);
	return 0;
}
