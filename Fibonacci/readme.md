# 피보나치 수열
피보나치 수열
- - -       
n : n번째 항을 나타냄  

공식 :    
![2](https://wikimedia.org/api/rest_v1/media/math/render/svg/c374ba08c140de90c6cbb4c9b9fcd26e3f99ef56)  
![3](https://wikimedia.org/api/rest_v1/media/math/render/svg/a176d38fc02d945d2966c5a4b8d84e295291ed63)  
- - -

ex) 1번째 항과 2번째항은 무조건 1이므로, 

코드 예시

```
#include<stdio.h>

int main(void)
{
	int ret[7] = { 1, 1 }; // 7번째 항을 구하므로 편의상 배열크기를 7로 잡았다.
						   // 1,2번째 항은 둘다 1 이므로 초깃값을 {1, 1} 로 잡는다.

	for(int i = 2; i < 7; i++)	// ret[0], ret[1] 은 둘다 1 이므로, i는 2부터 시작한다.
	{
		ret[i] = ret[i-1] + ret[i-2];	// i번째 항은 (i-1)번째 항 + (i-2)번째 항과 같다. 
										 // *피보나치수열 공식참조
	}

	printf("%d", ret[6]);	// 결과값  : 13
}

```