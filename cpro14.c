#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n;
    int i;
    double sum=0.0;
    //int sign=1;
    double sign=1.0;
    //scanf("%d",&n);
    n=10000;
    for(i=1;i<=n;i++){
    	sum+=sign/i;
    	sign=-sign;
	}
    
    printf("f(%d)=%f\n",n,sum);
	return 0;
}
