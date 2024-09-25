#include<stdio.h>
int display(int arr[],int limit)
{
int temp,min_index;
for(int i=0;i<limit;i++)
{
	
	min_index=i;
	for(int j=i+1;j<limit;j++)
	{
	if(arr[j]<arr[min_index])
	{
	temp=arr[j];
	arr[j]=arr[min_index];
	arr[min_index]=temp;
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
