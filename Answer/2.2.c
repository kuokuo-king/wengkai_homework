#include <stdio.h>

int main()
{
	int time_0,time_pass;
	scanf("%d %d",&time_0,&time_pass);
	int hour = time_0/100;
	int minute = time_0 - hour*100;
	int time_1 = hour*60 + minute;
	int time_terminal = time_1 +time_pass;
	int minute_terminal = time_terminal%60;
	int hour_terminal = time_terminal/60;
	int end = hour_terminal*100+minute_terminal;
	printf("%d",end);
	return 0;
}
