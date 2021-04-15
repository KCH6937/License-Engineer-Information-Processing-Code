#include<stdio.h>

int main(void)
{
	int a = 3;
	
	for(int i = 1; i < 100; i++)	// 99까지
	{
		printf("%d ", a * i);	// 결과값 : 3, 6, 9, 12, 15, ... , 99	
	}
}