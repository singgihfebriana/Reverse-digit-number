//Name		: Singgih Febriana
//Date		: October 18, 2020
//Program	: reverse digit numbers

#include<stdio.h>
#include<time.h>
main(){
	long int x,n=0,i,count=0;
	printf("Enter a numer = \n");
	scanf("%d",&x);
	printf("\n");
	while(x>0){
		n=x;
		i=n%10;
		count=count+i;
		x=n/10;
		printf("%d",i);
			
	}
		
}
