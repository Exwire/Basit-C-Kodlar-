#include<stdio.h>

int main(){
	
	int a=1,b;

	printf("Sayiyi giriniz.\n");
	scanf("&d\n",&b);
	
	int yaz=0;
	
	while(a<b-1){
		a++;
		if(b%a == 0){
			yaz=1;
			break;
		}
	}
	if(yaz==0){
		printf("sayi asal\n");
	}
	else{
		printf("sayi asal degil");
	}
	
	return 0;
}
