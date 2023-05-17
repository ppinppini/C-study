
#include <stdio.h>
main() {
  int sbs[3][4];
  sbs[0][0]=5; sbs[0][1]=7; sbs[0][2]=2; sbs[0][3]=4;
  sbs[1][0]=9; sbs[1][1]=5; sbs[1][2]=8; sbs[1][3]=3;
  sbs[2][0]=6; sbs[2][1]=9; sbs[2][2]=5; sbs[2][3]=1;

  printf("%d %d %d %d\n",sbs[0][0],sbs[0][1],sbs[0][2],sbs[0][3]);
  printf("%d %d %d %d\n",sbs[1][0],sbs[1][1],sbs[1][2],sbs[1][3]);
  printf("%d %d %d %d\n",sbs[2][0],sbs[2][1],sbs[2][2],sbs[2][3]);
}