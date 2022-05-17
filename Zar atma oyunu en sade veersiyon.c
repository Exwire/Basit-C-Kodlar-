#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	srand(time(NULL));
	
	int zar1=0,zar2,sayac=1,sum,flag=0,yedek;
	
	zar1= rand() % 6+1;
	zar2= rand() % 6+1;
	sum= zar2+zar1;
	yedek=sum;
		if(sum==2|| sum==3|| sum==12)
		{
		printf("Kaybettiniz.Ilk sonucunuz=%d",sum);
		flag=1;
		}
		if(sum==7|| sum==11)
		{
		printf("Kazandiniz.Ilk sonucunuz=%d",sum);
		flag=1;
		}
		while(flag!=1 && sum!=7)
		{
		sayac++;
		zar1= rand() % 6+1;
		zar2= rand() % 6+1;
		sum= zar2+zar1;
	
			if(sum==yedek)
			{
			printf("Kazandiniz.Son sayiniz=%d\nDeneme sayiniz=%d",sum,sayac);
			flag=1;
			}
		}
	if(sum==7 && flag!=1)
	{
	printf("Kaybettiniz.Son sayiniz=%d\nDeneme sayiniz=%d",sum,sayac);
	}
	
	return 0;
}
