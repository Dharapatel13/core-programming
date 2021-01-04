/* Write a program that will take input from users and find the largest number from the user inputs and
print it. */

#include<stdio.h>
#include<conio.h>

int main()
{
	int a[50],n ,t;
	
	printf("enter the num of element in array");
	scanf("%d",&n);
	printf("enetr the elements\n");
	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{ 
				t=a[j];
				a[j]=a[i];
				a[i]=t;
			}
		}
		
		
	}
	printf("larger element in array is %d",a[n-1]);
				
}
