#include <stdio.h>
//klavyeden -1 girilene kadar girilmiş sayılardan en küçük olanı yazdıran program.

int main(){
	
	int i=1,a,min;
	
	printf("Bir sayi giriniz\n");
	scanf("%d",&a);
	min=a;
	
	while(i!=-1)
	{
		printf("Bir sayi giriniz.\n");
		scanf("%d",&a);
		if(a==-1)
		break;	
		else if(min>a)
		min=a;
	}
	printf("min = %d",min);
	
	return 0;
}
