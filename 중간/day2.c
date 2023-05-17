
#include <stdio.h>
main() {
  int x;
  int *kbs;
  int *sbs;
  
  x=32;
  kbs=&x;
  sbs=kbs;

  *kbs=*kbs+10;
  *sbs=*sbs+20;

  printf("%p %p %p\n",&x,kbs,sbs);
  printf("%4d %4d %4d\n",x,*kbs,*sbs);
}