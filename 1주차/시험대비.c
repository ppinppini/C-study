// 8. 정수형 변수 k 를 활용하여 다음과 같이 출력하고자 한다. 완전한 프로그램으로 작성하시오.
// (모습이 아니라 계산된 값)

// #include <stdio.h>
// main() {
//     float k=0;
//     float i;
//     for(i=4;i<101;i=i+1){
//         k=i/((i-1)*(i-2));
//         printf("%f\n",k);
//     }
// }

// 9.sum 과 x 라는 2개의 변수만을 이용하여 아래의 내용을 계산하는 완전한 프로그램을 작성하시오.(for문이용)

// #include <stdio.h>
// main () {
//     int x;
//     int sum=0;
//     for(x=1;x<23;x=x+3){
//         sum=sum+x;
        
//     }
//     printf("%d\n",sum);
// }

// 10. 다음에 주어진 배열로부터 각문항을 코딩하시오 (for 문 이용)

// #include <stdio.h>
// main (){
//     int m[12]= {10,17,22,14,19,4,25,12,35,9,11,8};
//     int i ;
//     int sum=0;
//     int min=100;
//     int max=0;
//     for(i=0;i<12;i=i+1){
//         if(max<m[i])
//         max=m[i];
//         printf("%d\n",max);
//     }
    
// }


// 11.'We are the Champion, we will keep on fighting till the end.'
// #include <stdio.h>
// main () {
//     int i;
//     int c=0;
//     char ss[] ="We are the Champion, we will keep on fighting till the end.";
//     char hh[100];
//     for(i=0; ss[i]!='\0';i=i+1){
//        if(ss[i]>='a'&&ss[i]<='z') {
//         ss[i]=ss[i]-32;
//         if(ss[]==='THE'){
//             c=c+1;
//             printf("%d",c);
//         }
//        }

//        }
      
//     }
   

// #include<stdio.h>
// int hap(int a,int b){
//     return a+b;
// }
// main() {
//     int x1=10,x2=20,x3=30;
//     int result;
//     result = hap(x1,x2) + hap(x2,x3)*2;
//     printf("value = %d\n",result);
// }

// #include <stdio.h>
// swap(int *a,int*b){
//     int t;
//     t=*a; // t=80
//     a=*b; // a=50;
//     *b=t; // b=80;

// }
// main() {
//     int x=80,y=50;
//     printf("%d %d\n",x,y);
//     swap(x,y);
//     printf("%d %d",x,y);
// }


#include <stdio.h>
main() {
   char a[]="We are the Champion, we will keep on fighting till the end.";
   int i,c=0;
   for(i=0;a[i]!='\0';i++){
      if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z')|| (a[i]>='1'&&a[i]<='10')  )
         c=c+1;
}
printf("%d",i-c);
}