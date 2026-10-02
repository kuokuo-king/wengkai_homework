#include <stdio.h>

int main(){
	char c;
	scanf("%c",&c) ;
	while(c!='#'){
		if (c>= 65 & c<=90){
			c+=32;
		}
		else if (c>=91 & c<=122){
			c-=32;
		}
		printf("%c",c);
		scanf("%c",&c);
	}
	return 0;
}
