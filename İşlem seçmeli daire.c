#include<stdio.h>

int main(){
	
int r,islem ,sonuc, PI = 3;

printf("Dairenin yaricapini giriniz \n");
scanf("%d",&r); 	
printf("Ýslem turunu giriniz \n");
scanf("%d",&islem); 

if(islem == 1){
	sonuc = 2 * PI * r;
	printf("Dairenin cevresi = %d", sonuc);
	
}
	else if(islem == 2){
		sonuc = PI * r *r;
		printf("Dairenin alani %d dir",sonuc);
		
	}
	else {
		printf("Yanlýs giris");
	}
	return 0 ;
}
