#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int x;
    
    //scanf("%d",&x);
    x=9;
    
    int i;
    int isPrime=1;    //x是素数 
    for(i=2;i<x;i++){
    	if(x%i==0){
//    		isPrime=0;
    		break;
		}
	    printf("%d\n",i);
	}
//	if(isPrime==1){
	if(i<x){
		printf("不是素数\n");
	}else{
		printf("是素数\n");
	}
	return 0;
}
