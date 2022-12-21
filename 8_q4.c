/* Write a menu driven program to implement Deques (both Input- restricted and Output-restricted) operations 
such as Enqueue, Dequeue, Peek, Display of elements, IsEmpty, IsFull using static array. */
#include<conio.h>
#include <stdio.h>
# include<stdio.h>
# define MAX_SIZE 5
int deque_arr[MAX_SIZE];
int Left = -1;
int Right = -1;


void InsertRight_8_4()
{
	int added_item;
	if((Left == 0 && Right == MAX_SIZE-1) || (Left == Right+1))
	{	
		printf("Queue Overflow\n");
		return;
	}
	if (Left == -1)
	{
		Left = 0;
		Right = 0;}
	else
	if(Right == MAX_SIZE-1)  
		Right = 0;
	else
		Right = Right+1;
	printf("Input the element for adding in queue : ");
	scanf("%d", &added_item);
	deque_arr[Right] = added_item ;
}


void InsertLeft_8_4()
{	int added_item;
	if((Left == 0 && Right == MAX_SIZE-1) || (Left == Right+1))
	{	
		printf("Queue Overflow \n");
		return;	 
	}
	if (Left == -1)
	{	
		Left = 0;
		Right = 0;	 
	}
	else
	if(Left== 0)
		Left=MAX_SIZE-1;
	else
		Left=Left-1;
	printf("Input the element for adding in queue : ");
	scanf("%d", &added_item);
	deque_arr[Left] = added_item ;	 
}




void DeleteLeft_8_4()
{	if (Left == -1)
	{	printf("Queue Under-flow\n");
		return ;	}
	printf("Element has been deleted from queue is : %d\n",deque_arr[Left]);
	if(Left == Right) 
	{	Left = -1;
		Right=-1;	 }
	else
		if(Left == MAX_SIZE-1)
			Left = 0;
		else
			Left = Left+1;
}


void DeleteRight_8_4()
{
	if (Left == -1)
	{
		printf("Queue Under flow\n");
		return ;	 
	}
	printf("Element has been deleted from queue is : %d\n",deque_arr[Right]);
	if(Left == Right) 
	{	
		Left = -1;
		Right=-1;	 }
	else
		if(Right == 0)
			Right=MAX_SIZE-1;
		else
			Right=Right-1;	
}


void Display_8_4()
{	int fpos = Left,rpos = Right;
	if(Left == -1)
	{	
		printf("Queue is empty\n");
		return;	 
	}
	printf("Queue elements :\n");
	if( fpos <= rpos )
	{	
		while(fpos <= rpos)
		{
			printf("%d ",deque_arr[fpos]);
			fpos++;	}	
		}
	else
	{	
		while(fpos <= MAX_SIZE-1)
		{	
			printf("%d ",deque_arr[fpos]);
			fpos++;	
		}
		fpos = 0;
		while(fpos <= rpos)
		{	
			printf("%d ",deque_arr[fpos]);
			fpos++;
		}
	}
	printf("\n");
}


void Input_8_4()
{	
	int Option=0;
	do
	{	
		printf("1.Insert at Right\n");
		printf("2.Delete from Left\n");
		printf("3.Delete from Right\n");
		printf("4.Display\n");
		printf("5.Quit\n");
		printf("Enter your choice : ");
		scanf("%d",&Option);


		switch(Option)
		{	
			case 1:		InsertRight_8_4();			break;
		 	case 2:		DeleteLeft_8_4();			break;
		 	case 3:		DeleteRight_8_4();			break;
		 	case 4:		Display_8_4();				break;
			case 5:					            break;
		 	default:	printf("Wrong Option\n");
		}
	}while(Option!=5);
}


void Output_8_4()
{	int Option=0;
	do
	{	printf("1.Insert at Right\n");
		printf("2.Insert at Left\n");
		printf("3.Delete from Left\n");
		printf("4.Display\n");
		printf("5.Quit\n");
		printf("Enter your choice : ");
		scanf("%d",&Option);
		switch(Option)
		{
		 case 1:	InsertRight_8_4();	break;
		 case 2:	InsertLeft_8_4();	break;
		 case 3:	DeleteLeft_8_4();	break;
		 case 4:	Display_8_4();		break;
		 case 5:	break;
		 default:	printf("Wrong Option\n");
		}
	}while(Option!=5);
}

int main_8_4()
{	int Option=0;
	printf("1.Input restricted dequeue\n");
	printf("2.Output restricted dequeue\n");
	printf("Enter your choice : ");
	scanf("%d",&Option);
	switch(Option)
	{
	 case 1 :	Input_8_4();	break;
	 case 2:	Output_8_4();	break;
	 default:	printf("Wrong Option\n");
	}
}