#include<stdio.h>

int main(){
	
	int sayi1 , sayi2 , x;
	
	printf("A sayisini giriniz. \n");
	scanf("%d",&sayi1);
	
	printf("B sayisini giriniz. \n");
	scanf("%d",&sayi2);
	
	x = sayi1 , sayi1 = sayi2 , sayi2 = x;
	
	printf("A nin yeni degeri = %d \nB nin yeni degeri = %d",sayi1, sayi2);
	return 0;
	
}
