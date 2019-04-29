#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    int x;
	int n=0;
	scanf("%d",&x); 
	do{
		x/=10;
		n++; 
	}while(x>0);
	printf("%d",n);
	return 0;
}
