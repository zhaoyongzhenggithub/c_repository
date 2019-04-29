#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int x;
	
	//scanf("%d",d);
	x=13425;
	int t=0;
	do{
		int d=x%10;
		t=t*10+d;
	}
	do{
		int d=x%10;
		printf("%d",d);
		if(x>9){
			printf(" ");
		}
		x/=10;
	} while(x>0);
	printf("\n");
	return 0;
}
