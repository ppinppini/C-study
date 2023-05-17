#include <stdio.h>
int main(){
int m[12]={10,17,22,14,19,4,25,12,35,9,11,8};
// 3)짝수 구하기
// int i;
// for(i=1;i<12;i=i+1){
//     if(m[i]%2==0){
//     printf("%d\n",m[i]);}
// }
// //평균구하기
// int i;
// int sum=0;

// for(i=0;i<12;i=i+1){
//     sum=sum+i;
// }

// printf("%f",sum/12.0);

int i;
int sum=0;
int c;
float avr;
for(i=0;i<12;i=i+1){
    if(m[i]<=30){
        sum=sum+m[i];
        c=c+1;
    }

}
avr =(float)sum/c;
pritnf("7.2%f",avr);
}


