
#include <stdio.h>
#include <stdlib.h>
main() {
    char *b;
    b=malloc(10);
    *b=14;
    *(b+1)=15;
    *(b+2)=17;
    printf("%d %d %d\n",*b,*(b+1),*(b+2));
    free(b);
    b=malloc(20);
    *b=16;
    free(b);
}

#include <stdio.h>
kmodify(int a) {
	a=a+2;
}

main() {
	int k;
	k=10;
	printf("%d\n",k);
	kmodify(k);
	printf("%d\n",k);
}