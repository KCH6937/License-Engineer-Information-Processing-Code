#include<stdio.h>

int main(void)
{
	int a = 6, b = 7;
	int i;
	
	if(a > b)	// a,b 중 큰값을 i에 위치시키기 위한 조건문
	{
		i = a;
	}
	else
	{
		i = b;
	}
	
	// if문 결과 : i = b
	
	while(i <= a * b)	// a,b 두 수의 곱은 공배수이며 최소공배수는 두 수의 곱보다 작거나 같다.
	{
		if(i % a == 0 && i % b == 0) // i가 a로 나누어 떨어지고, b로도 나누어 떨어지면 i는 최소공배수이다.
		{
			printf("%d", i);
		}
		
		i++;
	}
}