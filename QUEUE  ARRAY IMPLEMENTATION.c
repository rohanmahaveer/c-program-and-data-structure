#include<stdio.h>
#include<math.h>
#include<string.h>
struct queue {
  int contents[5];
  int front;
  int rear;
} ;

void initQueue(struct queue * q);
void enQueue(struct queue * q, int element);
int deQueue(struct queue * q);
void display( struct queue q);
void printMenu();

int main()
{
	struct queue p;
	int data,ch, data1;
	initQueue(&p);
	do {
	printMenu();
	printf("Enter your choice\n");
	scanf("%d",&ch);
	switch(ch) {
	  case 1:
		printf("Enter the element to be inserted/entered\n");
		scanf("%d",&data);
		enQueue(&p, data);
		break;
	  case 2:
		data1 = deQueue(&p);
		if(data1 != -1000)
		printf("The deleted element is %d\n",data1);
		break;
	  case 3:
		printf("The contents of the queue are");
		display(p);
		printf("\n");
		break;
	  default:
		return 0;
	}
	} while(1);
	return 0;
}


void printMenu()
{
	printf("Choice 1 : Enter element into Queue\n");
	printf("Choice 2 : Delete element from Queue\n");
	printf("Choice 3 : Display\n");
	printf("Any other choice : Exit\n");
}

void initQueue(struct queue * q) {
//fill the code
q->rear=-1;
q->front=-1;
}

void enQueue(struct queue * q, int element)
{
//fill the code
if(q->front==(q->rear+1)%5)
{
   printf("Queue is full\n");
}
else
{
    if(q->front==-1)
    q->front=0;
    q->rear=(q->rear+1)%5;
    q->contents[q->rear]=element;
}
}

int deQueue(struct queue * q)
{
//fill the code
int r=-1000;
if(q->front==-1)
    {
        printf("Queue is empty\n");
    }
else
    {
        r=q->contents[q->front];
        if(q->front==q->rear)
        initQueue(q);
        else
        q->front=(q->front+1)%5;
    }
        return r;
}
void display( struct queue q)
{
int i;
if(q.front==-1)
    {
        printf(" {}");
    }
else
    {
        for(i=q.front;i!=q.rear;i=(i+1)%5)
        {
            printf(" %d",q.contents[i]);
        }
            printf(" %d",q.contents[i]);
    }
}