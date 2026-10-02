#include <stdio.h>

int main()
{
	int centimeter;
	printf("请输入长度(cm)：");
	scanf("%d",&centimeter);
	int inch = centimeter/30.48;
	int foot = (centimeter/30.48-inch)*12;
	printf("长度为：%d英尺,%d英寸",inch,foot);
	
	return 0; 
	
}
