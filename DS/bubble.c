#include<stdio.h>
int display(int arr[],int limit)
{
int temp;
for(int i=0;i<limit;i++)
{
	for(int j=i+1;j<limit-1;j++)
	{
	if(arr[i]>arr[j])
	{
	temp=arr[j];
	arr[j]=arr[i];
	arr[i]=temp;
	}
	}
	
}
printf("\nsorted Array elements:  ");
for(int i=0;i<limit;i++)
{
printf("%d",arr[i]);
}
}
	void main()
	{
	int limit,key;
	printf("Enter the limit of array: ");
	scanf("%d",&limit);
	int arr[limit];
	printf("Enter the %d array elements: ",limit);
		for(int i=0;i<limit;i++)
		{
		scanf("%d",&arr[i]);
		}
		printf(" Array elements: ");
	for(int i=0;i<limit;i++)
	{
	printf("%d",arr[i]);
	}
	display(arr,limit);
	}
