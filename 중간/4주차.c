// #include<stdio.h>
// main(){
    // char ss[5] = {'k','b','c','\0'};// char ss [5] --> 5개의 기억공간 생성 
    // int i;
    // ss[0]='k';
    // ss[1]='b';
    // ss[2]='s';
    // ss[3]='\0';
    // for( i=0;ss[i]!='\0';i++)
    //     printf("%c",ss[i]);

    // \0 --> null
    
     // char --> 정수 값을 받을 수 있는  정수형 기억공간
    // ss= -24;  ---> 숫자 리터럴 
    // ss= ss*2;

    // ss= "kbs"; // 'A' --> 문자 리터럴  

    // char ss[] ="we will keep on fighting till the end.";
    // int i,count=0;
    // for(i=0;ss[i]!='\0';i++){
    //     if(ss[i]==' '){
    //     count=count+1;
    //     }
    //     }
    //     printf("%d",count);


//위의 두문장으로 기억공간이 선언되어있습니다. 이제 hh[] 내의 문자열을 ss[] 로 몽땅 복사하는 프로그램을 한번 만들어 봅시다. 우선 궁리부터 하시구요..

// #include <stdio.h>
// main() {
//    char hh[]="we are the chapmpion";
//    char ss[80];
//    int i;
//    for(i=0;hh[i]!='\0';i++){
//     if(hh[i]!=' ')
//       ss[i]=hh[i]-32;
//     else
//          ss[i]=hh[i];
//    }
//    ss[i]='\0';     

//    printf("%s",ss);
// }



#include <stdio.h>
main() {
  int sbs[3][4]={5,7,2,4,9,5,8,3,6,9,5,1};

  printf("%d %d %d %d\n",sbs[0][0],sbs[0][1],sbs[0][2],sbs[0][3]);
  printf("%d %d %d %d\n",sbs[1][0],sbs[1][1],sbs[1][2],sbs[1][3]);
  printf("%d %d %d %d\n",sbs[2][0],sbs[2][1],sbs[2][2],sbs[2][3]);
}



// char ss [4]= "kbs" ==  char ss[4] = {'k','b','c','\0'}
    