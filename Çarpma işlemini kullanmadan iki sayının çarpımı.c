#include <stdio.h>

int main(){
	
	int sayi1,sayi2,sonuc=0,i;
	
	printf("Birinci sayiyi giriniz.\n");
	scanf("%d",&sayi1);
	printf("Ýkinci sayiyi giriniz.\n");
	scanf("%d",&sayi2);
	
	for(i=0;i<sayi1;i++){
		
		sonuc+=sayi2;
		
	}
	
	
	printf("Sayilarin carpimi=%d",sonuc);
	return 0;
	
}
