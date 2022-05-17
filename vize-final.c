#include<stdio.h>

int main(){

float vize, final, sonuc;
int ogrenciNo;

printf("Ogrenci numaranizi giriniz.");
scanf("%d", &ogrenciNo);
printf("Vize notunuzu giriniz.");
scanf("%f", &vize);
printf("Final notunuzu giriniz.");
scanf("%f", &final);

vize = vize * 4 / 10;
final = final * 4 / 10;
sonuc = vize + final;

printf("%d numarali ogrencinin notu = %f",ogrenciNo, sonuc);
return 0;


}
