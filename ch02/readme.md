# 02

## 형, 연산자, 수식

### 변수명
- 한 함수 내에서만 사용되는 변수명 : 31개 문자.
- 외부 이름에 대해서 ANSI 표준은 여섯개 문자에 대해서만 유일성을 보장.

### 데이터형
- 데이터이 형/ 크기는 기종에 따라 다름
- <limits.h>, <fload.h> 에서 정의(standard headers)

type 	| desc
-----	|-----
char	| 1 byte 문자
int		| 정수
float	| single-precision 부동소수점
double	| double-precision 부동소수점

#### 한정사
1. short / long
	- short/long (int) num;
	- (usually) short = 16bit, long = 32bit
	- long double - 부동 소수 정밀도 up
2. signed / unsigned
	- 인쇄 가능한 문자는 모두 양수
	
