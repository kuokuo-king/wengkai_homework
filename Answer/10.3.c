#include <stdio.h>
#include <stdio.h>

int main(void){
	char x[81];
	int i;
	while ((x[i]=getchar())!='\n')i++;
	x[i]='\0';
	for(;i>=0;i--){
		printf("%c",x[i]);
	}
}
