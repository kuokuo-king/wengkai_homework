#include <stdio.h>

int main(void){
	int n,i,m;
	scanf("%d",&n);
	int num[n],result[n],cnt[10]={0};
	for (i=0;i<n;i++){
		scanf("%d",&num[i]);
		result[i]=num[i]%10;
	}
	for (i=0;i<10;i++) {
		for(m=0;m<n;m++){
			if (result[m]==i){
				cnt[i]++;
			}
		}
	}
	int Max=0;
	for (i=0;i<10;i++){
		if(cnt[i]>Max){
			Max=cnt[i];
		}
	}
	printf("%d:",Max);
	for (i=0;i<10;i++){
		if (cnt[i]==Max){
			printf(" %d",i);
		}
	}
	return 0;
}
