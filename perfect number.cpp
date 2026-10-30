//write a c program to check whether a number is perfect or not//
#include<stdio.h>
int main()
{
	int n,i=1,sum=0;
	printf("enter a number:");
	scanf("%d",&n);
	while(i<n){
	if(n%i==0){
		sum=sum+i;
	}
	i++;
	}
 	if(sum==n){
	printf("Perfect number\n");
	}
	else{
	printf("not a perfect number:\n");
	}
	return 0;
	
}
