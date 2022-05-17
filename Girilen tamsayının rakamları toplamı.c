#include <stdio.h>

int main(){
	
	int sayi,sum=0,x;
	
	printf("Bir tamsayi giriniz.\n");
	scanf("%d",&sayi);
	
	while (sayi!=0){
		
		x = sayi % 10;
		sum += x;
		sayi /= 10;
	}
	printf("Girilen sayinin rakamlari toplami = %d",sum);
	
	return 0;
}
