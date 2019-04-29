#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    int n;
    
    //scanf=("%d",&n);
    n=4;
    int fact=1;
    
    int i=n;
//    for(i=2;i<=n;i++){
//    	fact*=i;
//	}
    for(;n>1;n--){
    	fact*=n;
	}
	printf("%d!=%d\n",i,fact);
	return 0;
}
