#include <stdio.h>

int main(){
	
	float feet, deger;
	
	printf("Uzunluk degerini feet olarak giriniz.\n");
	scanf("%f",&feet);
	
	deger = feet * 30.48;
	
	printf("Girdiginiz degerin santimetre karsiligi = %f", deger);
	
	return 0;
}
