#include <stdio.h>

int main(void){
	int m,n,i,j;
	scanf("%d %d",&m,&n);
	int num[m][n];
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			scanf("%d",&num[i][j]);
		}
	}
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			if(i==0){
				if(num[i][j]<=num[i+1][j]){
					continue;
				}
			}else if(i==m){
				if(num[i][j]<=num[i-1][j]){
					continue;
				}
			}else{
				if(num[i][j]<=num[i+1][j] || num[i][j]<=num[i-1][j]){
					continue;
				}
			}
			if(j==0){
				if(num[i][j]<=num[i][j+1]){
					continue;
				}
			}else if(j==n){
				if(num[i][j]<=num[i][j-1]){
					continue;
				}
			}else{
				if(num[i][j]<=num[i][j+1] || num[i][j]<=num[i][j-1]){
					continue;
				}
			}
			printf("%d %d %d\n",num[i][j],i+1,j+1);
		}
	}
}
