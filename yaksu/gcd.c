#include<stdio.h>

int main(void)
{
	int a = 6, b = 15;
	int temp;
	int r;
	
	
	if(a < b)	// a,b 중 큰값을 a에 위치시키기 위한 조건문
	{
		temp = a;
		a = b;
		b = temp;
	}
	
	// a = 15, b = 6
	
	while(b!=0)	// b가 0일 때까지 반복한다.
	{
		r = a % b;	// 
		a = b;		// 유클리드의 핵심 부분(암기 필요)
		b = r;		//
	}
	
	printf("%d", a);	// 결과값 : 3
}