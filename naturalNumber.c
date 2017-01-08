#include<stdio.h>
#include<conio.h>
	int main()
	{
		int a,i=1;
		
		printf("Enter the number : ");
		scanf("%d",&a);
		
		while(i<=a)
		{
			printf("%d\t",i);
			i++;
		}
		
		return 0;
		
	}