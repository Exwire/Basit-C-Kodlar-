#include <stdio.h>

int main(){
	
	int a=0,b=1,c,terim,n;
	
	printf("Kacinci terime kadar istiyorsunuz.\n");
	scanf("%d",&terim);
	
	printf("1\n");
	
	for(n=1; n<terim; n++){
	
		c=a+b;
		a=b;
		b=c;
		printf("%d\n",c);
	}
	return 0;
}
