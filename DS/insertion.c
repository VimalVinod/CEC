#include<stdio.h>
int display(int arr[],int limit)
{
int temp,j;
for(int i=0;i<limit;i++)
{
temp=arr[i];
	j=i-1;
	while(j>=0 && temp<arr[j])
	{
	arr[j+1]=arr[j];
	j=j-1;
	}
	arr[j+1]=temp;
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
