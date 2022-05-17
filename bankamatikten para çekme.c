#include<stdio.h>

int main(){
	
	int para,ikiyuz,yuz,elli,yirmi,on,bes;
	
	printf("Cekiceginiz para miktarını giriniz(10 un katları)");
	scanf("%d",&para);
	
	ikiyuz = para/200;
	para = para %200;
	yuz = para /100;
	para = para %100;
	elli = para/50;
	para = para %50;
	yirmi = para /20;
	para = para %20;
	on = para/10;
	para = para %10;
	bes = para /5;
	para = para %5;
	
	printf("ikiyuzluk adet =%d \nyuzluk adet =%d \nellilik adet =%d \nyirmilik adet =%d \nonluk adet =%d \nbeslik adet =%d \n",ikiyuz,yuz,elli,yirmi,on,bes);
	printf("Kalan paraniz = %d", para);
	
	return 0; 
	
}
