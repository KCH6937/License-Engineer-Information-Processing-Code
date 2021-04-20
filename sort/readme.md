# 선택 정렬, 삽입 정렬, 버블 정렬
선택정렬
---
- 전체 코드  
```
	int arr[5] = {3, 1, 4, 2, 5};
	int temp;       // 임시 저장 변수
	int minimum;    // 최솟값 → 선택정렬은 값들중 최소값을 찾아 제일 앞자리부터 정렬하는 방식
	
	for(int i = 0; i < 4; i++) // i = 0부터, i < 배열의 크기 -1
	{
		minimum = i;
		for(int j = i + 1; j < 5; j++) // j = i + 1부터, j < 배열의 크기
		{
			if(arr[minimum] > arr[j]) // > : 오름차순, < : 내림차순
			{
				minimum = j;	// arr[minimum]에 가장 작은값이 저장되어 if문을 탈출
			}                                            
		}
		temp = arr[minimum];	  //
		arr[minimum] = arr[i];	//   arr[i]와 arr[minimum]의 값을 서로 바꾸는 코드(스왑!)
		arr[i] = temp;			//	
	}
```
- 핵심
```
for(int i = 0; i < 5 - 1; i++) // i = 0부터, i < 배열의 크기 -1
	{
		minimum = i;
		for(int j = i + 1; j < 5; j++) // j = i + 1부터, j < 배열의 크기
		{
			if(arr[minimum] > arr[j]) // > : 오름차순, < : 내림차순
			{
				minimum = j;	// arr[minimum]에 가장 작은값이 저장되어 if문 탈출(오름차순 기준)
			}                                            
		}
	}
```
- - -
삽입 정렬  
---
- 전체 코드  

```
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

```  
- 핵심

```
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
```

- - -  
버블정렬  
--- 
- 전체 코드

```
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
}

```
- 핵심
```
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
```
- - -

