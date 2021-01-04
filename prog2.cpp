/*Update the program in a way that entire array is consumed by a single Input in COMMA SEPARATED
FORMAT and from those values find the largest number.*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>


int main ()
{
    char a[50];
	int b[50],t=0;
    char *pt;
    gets(a);
    pt = strtok (a,",");
    
    while (pt != NULL) {
    	
        int a = atoi(pt);
        b[t++]=a;
        pt = strtok (NULL, ",");
    }
    
    for(int i=0;i<t;i++)
    {
    	for(int j=i+1;j<t;j++)
		{
			if(b[i]>b[j])
			{ 
			int	temp=b[j];
				b[j]=b[i];
				b[i]=temp;
			}
		}
    
	}
	printf("larger element in array is %d",b[t-1]);
	
    return 0;
}
