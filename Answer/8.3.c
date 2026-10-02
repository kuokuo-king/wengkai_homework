#include <stdio.h>

int main(void){
	int num[10],i,obj;
	for (i=0;i<10;i++){
		scanf("%d",&num[i]);
	}
	int min=0,cnt=0;
	while(1){
		min=10;
		for (i=0;i<10;i++,cnt++){
			if (cnt<10){
				if (num[i]<10 && num[i]>0 &&num[i]<min){
				min=num[i];
				obj=i;
				}
			}		
			else{
				if (num[i]<10 && num[i]<min){
				min=num[i];
				obj=i;
			}
			}	
		}
		if(min==10){
			break;
		}
		printf("%d",min);
		num[obj]=10;
	}
	return 0;
}
