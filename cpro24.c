#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    float a,b,c;
    
    a=1.345f;
    b=1.123f;
    c=a+b;
    if(c==2.468)
       printf("���\n");
    else
       printf("�����! c=%.10f,��%f\n",c,c);
	return 0;
}
