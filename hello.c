#include <stdio.h>
    int score=0;
    int pass=60;
    printf("请输入成绩：");
	scanf("%d",&score); 
	
	printf("你输入的成绩是%d.\n",score);
	if(score<pass){
		priintf("很遗憾，这个成绩不及格");
	}
	else 
	    printf("祝贺你，及格了");
	
	printf("再见");
	
	return 0;
}







