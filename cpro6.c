#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int x;
    int ret=-1;
    
    //scanf("%d",&x);
    x=128;
    int t=x;
    while(x>0){
    	x/=2;
    	ret++;
	}
	printf("log2 of %d is %d",t,ret);
	return 0;
}
