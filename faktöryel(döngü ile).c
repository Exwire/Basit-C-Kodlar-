#include <stdio.h>

int main(){
	
	int i,sum=1, sayi;
	
	printf("Faktoryelini istediðiniz sayiyi giriniz,\n");
	scanf("%d",&sayi);
	
	for(i=1; i<=sayi; i++){
		sum*=i;
	}	
	printf("%d",sum);
	
	return 0;
}
