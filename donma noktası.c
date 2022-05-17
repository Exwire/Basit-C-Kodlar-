#include <stdio.h>

int main(){
	
	int sicaklik, donmaNoktasi;
	
	
	printf("Sicakligi giriniz.\n");
	scanf("%d",&sicaklik);
	
	printf("Maddenin donma noktasýný giriniz.\n");
	scanf("%d",&donmaNoktasi);
	
	if(sicaklik<donmaNoktasi){
		
		printf("Madde donma noktasinin altindadir.");
	}
	
	else {
		
		printf("Madde donma noktasinin ustundedir.");	
	}
	
}
