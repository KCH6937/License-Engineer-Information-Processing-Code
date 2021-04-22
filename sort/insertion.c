#include <stdio.h>
 
int main(void)
{
	int arr[5] = {2, 1, 5, 3, 4};
	int key = 0, j = 0;	// key에 저장된 값을 기준으로 정렬될 나머지 값들의 위치를 정한다.
	
	for (int i = 1; i < 5; i++)	// i = 1부터, i < 배열의 크기
	{
	
		key = arr[i];
		for (j = i - 1; j >= 0; j--)	// j = i - 1부터, j >= 0 까지
		{
			if (arr[j] > key)	// > : 오름차순, < : 내림차순
			{
				arr[j + 1] = arr[j];	// key값보다 arr[j]가 클 시 arr[j+1]에 값 저장
			}
			else
			{
				break;
			}
		}
		
		arr[j + 1] = key;	// key값에 들어있던 변수를 서로 교환 후, i값 증가
	}
}	