#include <stdio.h>
#include <stdlib.h>

int max(int a,int b){
	int ret;
	if(a>b){
		return a;
	}else{
		return b;
	}
	
//	return ret;
} 

int main(){
	int a,b,c;
	a=5;
	b=6;
	c=max(10,12);
	c=max(a,b);
	c=max(c,23);
	max(23,45);
	printf("%d\n",max(a,b));
	
	return 0;
}
