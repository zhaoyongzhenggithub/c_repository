#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int x;
    int one,two,five;
    
    //scanf("%d",&x);
    x=2;
    for(one=1;one<x*10;one++){
    	for(two=1;two<x*10/2;two++){
    		for(five=1;five<x*10/5;five++){
    			if(one+two*2+five*5==x*10){
    				printf("������%d��1�Ǽ�%d��2�Ǽ�%d��5�ǵõ�%dԪ\n",
					one,two,five,x);
					goto out;
				}
			}
		}
	}
out:
	return 0;
}
