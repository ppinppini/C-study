#include <stdint.h>
void print_array(int *arr, int size){
    int i;
    arr[2]=80;
        for (i=0 ; i<size; i++){
        printf("%d",*(arr+i));
        

    }
}
    int main () {
        int arr[5] ={1,2,3,4,5};
        print_array(arr,5);
        printf("%d\n",arr[2]);
        return 0;
    }

char ss[]="We will keep on fighting till the end";
printf("%s\n",ss);
for(i=0;ss[i]!='0';i++){
    ss[i]=ss[i]-1;
}