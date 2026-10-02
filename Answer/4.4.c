#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int a,count=0;
	srand(time(0)) ;
	a = rand();
	int number = a%100;
	//printf("%d",answer);
	int guess=101;
	while(guess!= number){
		if (count>10){
			printf("Game Over");
			return 0;
		}
		scanf("%d",&guess);
		count++;
		if (guess<number){
			printf("Too small");
		}
		if (guess>number){
			printf("Too big");
		}
		if (guess==number) {
			if (count<=3){
				printf("Bingo!");
			}
			else if(count<=10){
				printf("Good Guess!");
		
			}
			
			
		}
	}
	
	
	return 0;
}
