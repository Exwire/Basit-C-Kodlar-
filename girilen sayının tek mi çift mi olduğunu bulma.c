#include <stdio.h>

int main(){
	
	int n,deger;
	
	printf("Bir N degeri giriniz.\n");
	scanf("%d",&n);
	
	deger = n % 2;
	
	if(deger == 0){
		
		printf("%d sayisi bir cift sayidir.",n);
		
	}
	else {
		
		printf("%d sayisi bir tek sayidir.",n);
		
	}
	
	return 0;
}
