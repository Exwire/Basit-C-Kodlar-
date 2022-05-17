#include <stdio.h>

int main(){
	
	int birler, onlar, yuzler, i, total;

	total=0;

	for (i=1;i<1000;i++)
		{
			birler=i%10;
			onlar=(i/10)%10;
			yuzler=i/100;
		
			total=(birler*birler*birler)+(onlar*onlar*onlar)+(yuzler*yuzler*yuzler);
			
			if(i==total)
				{
					printf("%d \n\n",total);				
				}
		}

	return 0;
			
}
