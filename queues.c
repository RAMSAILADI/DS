#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

//struct node **base;
void enque(struct node **,struct node **,int);
void display(struct node **);
void deque(struct node **);
 int main()
{
    int ch,data;
struct node *front=NULL;
struct node *rear=NULL;
  //  base=&start;
  jump:  printf("1.Enque 2.Deque 3.display 4.exit\n");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1:
        printf("enter the data\n");
        scanf("%d",&data);
        enque(&front,&rear,data);
        goto jump;
        case 2:
        deque(&front);
        goto jump; 
	case 3:
	display(&front);
	goto jump;
        case 4:
        exit(0);
       default:printf("enter the number between 1-4");
        goto jump;
        
    }

    return 0;
}
void enque(struct node **f,struct node **r,int data)
{
	struct node *temp,*temp1;
		temp= (struct node *)malloc(sizeof(struct node));
		temp->data=data;
			if(*f==NULL)
			{
				*f=temp;
				*r=temp;	
			}
			else
			{
				temp1=*r;
				temp1->next=temp;
				*r=temp;
			}	
	
}

void deque(struct node **f)
{
	struct node *temp;
	temp=*f;
	if(temp==NULL)
	{
		printf("No elements ro delete");	
	}
	else
	{
		*f=temp->next;
		 free(temp);
		 temp=*f;		
	}
}

void display(struct node **f)
{
	struct node *temp;
	temp=*f;
	if(temp==NULL)
	printf("no elements to display");
	else
	{ 
		while (temp->next!=NULL)
		{
			printf("%d\t",temp->data);
			temp=temp->next;
		}
		printf("%d\n",temp->data);		
	}

}


