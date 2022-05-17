#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	srand(time(NULL));
	
	float a1=0.0,a2=0.0,a3=0.0,a4=0.0,a5=0.0,a6=0.0;
	int i,n;
	
	printf("Dice will be rolled 100 times\n");
	printf("----------------------------------------------------------\n");
	for(i=0;i<100;i++)
	{
		n=rand() % 6 + 1;
		
		switch(n)
		{
			case 1 :
				a1++;
				printf("1\n");
				break;
			case 2 :
				a2++;
				printf("2\n");
				break;
			case 3 :
				a3++;
				printf("3\n");
				break;
			case 4 :
				a4++;
				printf("4\n");
				break;
			case 5 :
				a5++;
				printf("5\n");
				break;
			case 6 :
				a6++;
				printf("6\n");
				break;
		}
	}	
	printf("----------------------------------------------------------\n");
	printf("The number 1 came %.2f times.\nThe number 2 came %.2f times.\nThe number 3 came %.2f times.\nThe number 4 came %.2f times.\nThe number 5 came %.2f times.\nThe number 6 came %.2f times.\n",a1,a2,a3,a4,a5,a6);
	printf("----------------------------------------------------------\n");
	printf("1 come rate : %.2f\n2 come rate : %.2f\n3 come rate : %.2f\n4 come rate : %.2f\n5 come rate : %.2f\n6 come rate : %.2f\n",a1/100,a2/100,a3/100,a4/100,a5/100,a6/100);
	
	return 0;
}
