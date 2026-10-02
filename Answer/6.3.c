#include <stdio.h>

int main(){
	int cnt=0;
	char c;
	scanf("%c",&c);
	while (c!='.'){
		while(c!=' '&c!='.'){
			cnt++;
			scanf("%c",&c);
		}
		if(c!='.')scanf("%c",&c);
		printf("%d",cnt);
		if(c!='.')printf(" ");
		cnt=0;
	}
	return 0;
}
