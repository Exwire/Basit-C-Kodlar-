#include <stdio.h>
#define PI 3.14

int main(){
	
	int yariCap; 
	float alan, cevre;
	
	printf("Dairenin yaricapini giriniz.\n");
	scanf("%d",&yariCap);
	
	alan = PI * yariCap * yariCap;
	cevre = 2 * PI * yariCap;
	
	printf("Dairenin yaricapi = %.2f \nDairenin alani = %.2f",alan,cevre);
	
	return 0;
	
}
