#include<stdio.h>


void main()
{
int size,val,choice,i;
printf("Enter the size of Queue: ");
scanf("%d",&size);
int my_q[size];
int front=-1,rear=-1;
while(choice != 4)
{
printf("MAIN MENU\n 1.Enqueue\n 2.DISPLAY\n 3.Dequeue\n 4.EXIT\n");

printf("Enter the choice:  ");
scanf("%d",&choice);
	
	switch(choice)
	{
	case 1 : if(rear+1==size)
		{
		printf("Queue overflow!!!!");
		}
		else
		{
		
		printf("Enter the element:");
		scanf("%d",&val);
		
		  if(front == -1 && rear == -1)  
		    {  
			front = 0;  
			rear = 0;  
		    }  
		    else   
		    {  
			rear = rear+1;  
		    }  
		    my_q[rear] = val;  
				
		printf(" The element %d is add!!\n",val);

		}
		
		break;
	case 2 :  
		    if(rear == -1)  
		    {  
			printf("\nEmpty queue\n");  
		    }  
		    else  
		    {   printf("\nQueue elements .....\n");  
			for(i=front;i<=rear;i++)  
			{  
			    printf("\n%d\n",my_q[i]);  
			}     

	
		}
		break;
	case 3 :	if(front<0)
		{
		printf("Queue underflow!!!!");
		}
		else {
		printf(" The element %d is Dequed!!",my_q[front]);
		front++;
		}
		
		break;
	case 4 :  printf("Exiting!!!!");
		break;
		
	
	default : printf("Invalid Choice!!");
		break;
	
}
}
}
