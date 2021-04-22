# 트리거(trigger)
- 문법   
CREATE [ OR REPLACE ] TRIGGER trigger_name  
[AFTER/BEFORE]  [이벤트1] [OR 이벤트2] ……  
   ON table_name  
   [ FOR EACH ROW ]  -- 행트리거 여부를 결정  
DECLARE  
   선언부  
BEGIN    
   -- 트리거 실행 코드  
EXCEPTION  
END;  

BEFORE : INSERT, UPDATE, DELETE문이 실행되기 전에 트리거가 실행 된다.  
AFTER : INSERT, UPDATE, DELETE문이 실행된 후 트리거가 실행 된다.  
trigger_event : INSERT, UPDATE, DELETE 중에서 한 개 이상 올 수 있다.  
FOR EACH ROW : 이 옵션이 있으면 행 트리거가 된다.

- - -

# 트랜잭션
- 트랜잭션의 성질
	1. 원자성(Atomicity) : 트랜잭션의 연산은 데이터베이스에 모두 반영되든지 아니면 전혀 반영되지 않음
	
	2. 일관성(Consistency) : 트랜잭션이 그 실행을 성공적으로 완료하면 언제나 일관성 있는 데이터베이스 상태로 변환
	3. 독립성(Isolation) : 수행중인 트랜잭션은 완전히 완료될 때까지 다른 트랜잭션에서 수행 결과를 참조할 수 없음
	
	4. 영속성(Durablility) : 성공적으로 완료된 트랜잭션의 결과는 시스템이 고장나더라도 영구적으로 반영
	
- 트랜잭션 연산
	1. Commit : 한개의 논리적 단위(트랜잭션)에 대한 작업이 성공적으로 끝났고 데이터베이스가 다시 일관된 상태에 있을 때, 
	이 트랜잭션이 행한 갱신 연산이 완료된 것을 트랜잭션 관리자에게 알려주는 연산  
	
	2. Rollback : 트랜잭션의 일부가 정상적으로 처리되었더라도 트랜잭션의 원자성을 구현하기 위해 이 트랜잭션이 행한 모든 연산을 취소(Undo)하는 연산
	
- 트랜잭션 문법  
>  
	BEGIN TRAN  
	 SQL문 ...  
	COMMIT TRAN (또는 COMMIT WORK 또는 ROLLBACK TRAN)  