#include<stdio.h>
int main()
{
	float h,m;
	printf("Enter the hour:");
	scanf("%f",&h);
	m=h*60;
	printf("%f h converted to minutes is %f mins",h,m);
	return 0;
}
