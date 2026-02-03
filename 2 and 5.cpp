#include<stdio.h>
int main()
{
	int number;
	printf("enter a number:");
	scanf("%d",& number);
	
    if(number%2==0 && number%5==0){
		printf("number is divisble by both 3 and 5");
		}
		else if(number%5==0)
	{
		printf("number is divisble by 5");
		}
		else if(number%2==0)
		{
		printf("number is divisible by 3");
		}
		else 
		{
		printf("number is nither divisible by 3 , nor by 5");
		}
		return 0;
}
