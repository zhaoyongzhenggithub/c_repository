#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    const int READY=24;
	int code=0;
	int count=0;
	
	scanf("%d %d",&code,&count); 
	if(code==READY)
	    if(count<20)
	        printf("一切正常\n");
    else
	        printf("继续等待\n");
	return 0;
}
