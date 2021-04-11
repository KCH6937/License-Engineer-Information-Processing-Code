#include<stdio.h>

int main(void) 
{
	int a = 3;	// 초깃값
	int d = 5;	// 공차
	int ret[5] = { 0, }; // 5번째 항을 구하므로 편의상 배열크기를 5로 잡았다.

	ret[0] = a; // 1번째 항은 3이므로 a를 대입

	for(int i = 1; i < 5; i++)
	{
		ret[i] = ret[i-1] + d;	// i번째 항은 i-1번째 항에 공차(d)를 더하면 됨
	}

	printf("%d", ret[4]);	// 결과값 : 23
}