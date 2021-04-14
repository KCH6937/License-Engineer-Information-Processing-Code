#include<stdio.h>

int main(void)
{
	int a = 12;
	
	for(int i = 1; i <= a; i++)
	{
		if(a % i == 0)	// a에서 i로 나눴을 때의 값이 0인 것 -> 약수
		{
			printf("%d ", i);	// 결과값 : 1, 2, 3, 4, 6, 12
		}
	}
}