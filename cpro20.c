#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a;
	a=6;
	printf("sizeof(double)=%ld\n",sizeof(long double)); 
	printf("sizeof(a+1.0)=%ld\n",sizeof(a+1.0));
	printf("a=%d\n",a);
	return 0;
}
