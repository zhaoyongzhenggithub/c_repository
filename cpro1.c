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
	        printf("һ������\n");
    else
	        printf("�����ȴ�\n");
	return 0;
}
