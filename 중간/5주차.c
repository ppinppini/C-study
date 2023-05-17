#include <stdio.h>
float hap(float a, float b){
    float c ;
    c=a+b;
    printf("%4.1f\n",c);
    return c;

}

main() {
    printf("%4.1f\n",hap(34.5,24)+2);
    printf("%4.1f\n",hap(67,27.2));
    printf("%4.1f\n",2*hap(88,10.1)+1);

}
p 라는 정수형 기억공간 4byte
*p 라는 정수형 기억공간 , * --> 포인트 연산자 
& -->주소번지를 구하는 연산자  &x는 x의 주소번지 
1.p라는 이름의 주소번지 담을 수 있는 기억공간
2. 주소번지를 찾아가면 *p  라는 int 형 기억공간 

float x; // x 라는 float형 기억공간
  float *kbs; // kbs 라는 주소번지를 가지는 기억공간
  
  x=32; // x라는 기억공간의 32 이라는 값을 저장
  kbs=&x; // x의 주소번지를 kbs 라고 저장
  *kbs=x+10; // x의 주소번지가 32+10 = 42

  printf("%4.1f %4.1f\n",x,*kbs); // %  소숫점 자리 부족시 4.1f 는 반올림

*배열의 원리
1. char a[i]; --> a라는 주소번지를 가지는 기억 공간 생성 
2. char 형으로 담을 수 있는 연속된 기억공간 생성
3. 연속된 기억공간의 첫번째 번지를 a의 주소번지를 가짐 

 char ss [] = "we will keep\0on fighting till the end.";
   printf("%s\n",ss+4);
   printf("%s\n",ss+13);



