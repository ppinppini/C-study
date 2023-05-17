#include <stdio.h>
#include<math.h>
// int ppp(){
//     static int k=1;
//     k=k+2;
//     printf("%d ",k);
// }
// bye(){
//     printf("\nBye Bye");
// }
        
// int main() {
//     int i;
//     for(i=0;i<3;i++){
//     ppp();
//     }
//     bye();
// }

// 180도 = 파이
// x->y

// 180:파이 =x:y
// y=x*파이/180
main(){
    graph(float d){
        int k,i;
        k=(int)(d/2);
        for(i=0;i<k;i++){
            printf("*");
        }
    }
const float pi =3.1415926543;
float x=30;
float d;
int i;
for(i=0;i<180;i++){
    x=i;
d=sin(x/180* pi);
// printf("%6.1f %9.2f\n",x,d);
graph(d*100);
printf("\n");
}
}


#include <stdio.h>
main() {
    const int chung[3]={4,7,5};
    int hap=0;
    // chung[0]=4;
    // chung[1]=7;
    // chung[2]=5;
    hap=chung[0]+chung[1]+chung[2];
    printf("hap = %d\n",hap);
}
