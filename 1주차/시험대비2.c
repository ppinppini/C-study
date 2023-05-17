#include<stdio.h>
maximum(int *a){
    int i;
    int maxmax=0;
    for(i=0;i<4;i=i+1)
        if(a+i >maxmax)
        *a=maxmax;
    
}
main() {
 float x[ ] = { 32.5, 64.2, 13.7, 45.3 } ; 
 float max ; int c = 4; 
 max = maximum(c,); 
 printf("max value = %4.1f \n", max); 
 }
