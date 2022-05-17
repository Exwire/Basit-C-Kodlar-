#include <stdio.h>

int main(){
	
	int sayi1, sayi2, sayi3;

	printf("Birinci sayiyi giriniz.\n");
	scanf("%d",&sayi1);	
	printf("İkinci sayiyi giriniz.\n");
	scanf("%d",&sayi2);
	printf("Ucuncu sayiyi giriniz.\n");
	scanf("%d",&sayi3);
	
	if(sayi1>sayi2 && sayi1>sayi3){
		
		printf("En buyuk sayi %d ir",sayi1);
		
	}
	else if (sayi2>sayi3){
		
		printf("En buyuk sayi %d ir",sayi2);
	}
	else{
		
		printf("En buyuk sayi %d ir",sayi3);	
	}
	
	return 0;
}
