#include<stdio.h>

int main(void)
{
	int arr[5] = {3, 1, 4, 2, 5};
	int temp;       // 임시 저장 변수
	int minimum;    // 최솟값

	for(int i = 0; i < 5 - 1; i++) 
	{
		minimum = i;
		for(int j = i + 1; j < 5; j++) 
		{
			if(arr[minimum] < arr[j]) 
			{
				minimum = j;
			}                                            
		}
		temp = arr[minimum];
		arr[minimum] = arr[i];
		arr[i] = temp;
	}


	for(int i = 0; i < 5; i++) 
	{
		printf("%d", arr[i]);
	}
}
       
