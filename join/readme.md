# 조인
![1](https://img1.daumcdn.net/thumb/R720x0.q80/?scode=mtistory2&fname=http%3A%2F%2Fcfile1.uf.tistory.com%2Fimage%2F9967FA335996B3F12F2CCF)
- - -
- SELECT <열 목록>  
FROM <첫 번째 테이블>   
[조인종류] JOIN <두 번째 테이블>  // ex) [INNER, OUTER, LEFT OUTER, RIGHT OUTER]  
ON <조인될 조건>  
[WHERE 검색조건]  
내부조인(Inner Join)
---
- 예시

employees 테이블  
![2](https://blog.advenoh.pe.kr/static/7994de03d4876b75f03a5a1c5f5a0bc7/d703b/image_11.png)

departments 테이블    
![3](https://blog.advenoh.pe.kr/static/42cce7511cf3a4ab4cb4af7532a3bb20/6ddef/image_21.png)

내부조인 결과  
![4](https://blog.advenoh.pe.kr/static/a3ac3bd9f4b75bb80310229cdcf003b6/91af2/22B68707-E0B8-4DA8-82FA-3CFEE9B05EFD.png)   

* 코드  
SELECT *  
FROM employees  
INNER JOIN dept_emp  
ON employees.emp_no = dept_emp.emp_no;
- - -

완전 조인(Outer Join) 또는 완전 외부조인(Full Outer Join)
---
- 예시
![5](https://blog.advenoh.pe.kr/static/08b82495fa2de918b9e1ed3714226c8c/e1dbf/image_9.png)
* 코드  
SELECT *    
FROM table1    
LEFT OUTER JOIN table2    
ON table1.n = table2.n    
UNION  // 핵심부분(빈칸 출제할거같아욥)  
SELECT *      
FROM table1  
RIGHT OUTER JOIN table2  
ON table1.n = table2.n;  

- - -

왼쪽 조인(Left Join) 또는 왼쪽 외부조인(Left Outer Join)
---
- 예시
![5](https://blog.advenoh.pe.kr/static/8d9eeb43f54e0e3702327ed6d9d34876/d4fa6/image_16.png)
* 코드  
SELECT *  
FROM table1  
LEFT OUTER JOIN table2  
ON table1.n = table2.n;  

- - -

오른쪽 조인(Right Join) 또는 오른쪽 외부조인(Right Outer Join)
---
- 예시
![5](https://blog.advenoh.pe.kr/static/d0c4fc4f7af65f761029f9a48e588426/d866c/image_19.png)
* 코드  
SELECT *  
FROM table1  
RIGHT OUTER JOIN table2  
ON table1.n = table2.n;  
- - -





