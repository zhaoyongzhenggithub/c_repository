#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    unsigned char c=0;
	int i=255;
	c=c-1;
	printf("c=%d,i=%d",c,i); 
	//  11111111
	//  00000000  00000000  00000000  11111111
	return 0;
}
