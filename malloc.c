#include<stdio.h>

int main()
{
	int n , i ;
	printf("Enter size");
	scanf("%d",&n);
	
	int *ptr  =  (int *)malloc(n * sizeof(int));
	
	int sum = 0;
	for(i = 0;i<n ;i++)
	{
		scanf("%d", (ptr+i));
		
	}
    	for(i = 0;i<n ;i++)
	{
		sum = sum + *(ptr+i);
		
	}
	
	printf("sum %d",sum);
	free(ptr);
	

}
