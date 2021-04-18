#include<stdio.h>

int main(void)
{
	int decimal = 0;	// 10진수로 변환된 값이 저장될 변수
    int binary[7] = { 1, 0, 0, 1, 0, 1, 1 };    // 1001011 순서대로 저장(10진수 75)
	int position = 0;	// 쉬프트 연산을 할 변수
	
	for (int i = 6; i >= 0; i--)	// 6부터 0까지 총 7번(= 배열의 크기)
	{
		if (binary[i] == 1)
		{
			decimal += 1 << position;	// 왼쪽 시프트(**핵심)
		}
		position++;	// 왼쪽 시프트 이동하는 칸수값 1 증가
	}
	
	printf("%d\n", decimal);	// 10진수 출력
}