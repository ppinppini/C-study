#include <stdio.h>
#include<math.h>

// int main () {
//     int i;
//     int n;
//     for (i=0;i<99;i=i+1)
//     {
//         n=(2*i+3)/2*(i+1)*(2*i+4);
   
//         printf(" %d\n",n);
//     }
// }


int main () {

    int a[]={32,65,87,94,22,76,54};
    int i,k,count;
    float sum=0, b,c=0,d,f,max,min,j;

    
    for(k=0;k<7;k=k+1)
    {   
        if(a[k]>50)
        count=count+1;
    }

    for(k=0;k<7;k=k+1)
  {
        if(max<a[k])
	    max=a[k];}

    for(k=0;k<7;k=k+1){
  if (a[k] > min)
      min = a[i]; 
}
    for (i=0;i<7;i=i+1){
        sum=sum+a[i];
        b=sum/(sizeof(a)/sizeof(int));
        
    }
     
    for (i=0;i<7;i=i+1){
        c=(a[i]-b)*(a[i]-b)+c;
        d=c/7.0;
    }

    f=sqrt(d);
    printf("%f\n",b); //평균
    printf("%f\n",d);// 분산
    printf("%f\n",f);//표준편차
    printf("%f\n",max);//최댓값
    printf("%f\n",min);//최솟값
    printf("%f\n",j);//50이상 출력
    printf("%d,%d,%d,%d,%d",a[1],a[2],a[3],a[5],a[6]);//50 이상의 갯수

}







