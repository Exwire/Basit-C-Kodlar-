#include <stdio.h>

int main(){
	
	float sicaklik, deger;
	
	printf("Sicaklik degerini fahrenheit(F) olarak giriniz.\n");
	scanf("%f",&sicaklik);
	
	deger = (sicaklik - 32) / 1.8;
	
	printf("Girdiginiz degerin celcius karsiligi = %f", deger);
	
	return 0;
}
