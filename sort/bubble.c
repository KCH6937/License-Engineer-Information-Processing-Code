#include<stdio.h>

int main(void)
{
	int i, j, temp;
	int arr[5] = {3, 2, 4, 5, 1};
	
    for (int i = 0; i < 5; i++)    // i < 배열의 크기
    {
        for (int j = 0; j < 4; j++)   // i < 배열의 크기 - 1
        {
            if (arr[j] > arr[j + 1])          //  > : 오름차순, < : 내림차순  ==> 선택정렬과 동일
            {                                 
                temp = arr[j];
                arr[j] = arr[j + 1];	// 선택정렬에서 썼던 스왑코드가 버블정렬에서는 if문 안쪽에 위치
                arr[j + 1] = temp;            
            }
        }
    }
	
	for(i = 0; i < 5; i++)
		printf("%d ", arr[i]);
}