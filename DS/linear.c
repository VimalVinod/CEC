#include<stdio.h>

int search(int arr[],int limit,int key)
{
int flag=0;
	for(int i=0;i<limit;i++)
	{
	if(arr[i]==key)
	{
	flag++;
	printf("%d is found in this array at position %d.\n", key,  i+ 1);

	}
	
}
if (flag==0)
{
	printf("%d is not found in this array",key);
	}
}

void main()
{
int i,limit,key;
printf("Enter the limit of array:");
scanf("%d",&limit);
int arr[limit];
printf("Enter the %d array elements:",limit);
	for(i=0;i<limit;i++)
	{
	scanf("%d",&arr[i]);
	}
printf("Enter the Search elements:");
scanf("%d",&key);

int result=search(arr,limit,key);
	
}



