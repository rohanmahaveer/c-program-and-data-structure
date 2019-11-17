#include<stdio.h> 
 #include<stdlib.h>
 struct queue
 {
        int Data;
        struct queue* next;
 }*rear, *front;

int delQueue(struct queue *q);
void enQueue(struct queue *q,int value);
void display(struct queue q);

int main()
{
  struct queue c;
     int ch,del;
     front=NULL;
   do
   {
     printf("Choice 1 : Enter element into Queue\n");
     printf("Choice 2 : Delete element from Queue\n");
     printf("Choice 3 : Display\n");
     printf("Any other choice : Exit\n");
     printf("Enter your choice\n");
          scanf("%d",&ch);
          switch(ch)
          {
                case 1:
                {
                     int value;
                     printf("Enter the element to be inserted/entered\n");
                     scanf("%d",&value);
                     enQueue(&c,value);                    
                     break;
                }
                case 2:
                {
                     del = delQueue(&c);
                     if(del!=-1000)
                     {
                    printf("The deleted element is %d\n",del);
                     }
                     break;
                }
                case 3:
                {
                  printf("The contents of the queue are");
                     display(c);
                  printf("\n");
                     break;
                }
                default:
                    return 0;
        }
   }while(1);
  return 0;
}


int delQueue(struct queue *q)
{
//fill in the code here
if(front==NULL)
{
    printf("Queue is empty\n");
    return -1000;
}
else
{
    struct queue *p=front;
    front=front->next;
    return p->Data;
}
  return 0;
}

void enQueue(struct queue *q,int value)
{
    //fill in the code here
    struct queue *pp=(struct queue *)malloc(sizeof(struct queue));
    pp->Data=value;
    pp->next=NULL;
    if(front==NULL)
    {
        front=rear=pp;
    }
    else
    {
        rear->next=pp;
        rear=pp;
    }
}

void display(struct queue q)
{
    if(front==NULL)
    {
        printf(" {}");
    }
    else
    {
 struct queue *t=front;
 while(t!=NULL)
 {
     printf(" %d",t->Data);
     t=t->next;
 }
    }
}