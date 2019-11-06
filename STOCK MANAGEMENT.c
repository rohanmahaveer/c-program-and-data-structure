#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stock {
	int good_number;
	struct stock * link;
};
void append ( struct stock **, int ) ;
void display ( struct stock * ) ;
void deleteatbegining (struct stock **);

int main() {
	struct stock *p ;
	p=NULL;
	int n;
int choice=1;
	
	while(choice!=4)
	{
	printf("1.Add goods to be delivered\n2.List the goods\n3.Delivered a good\n4.Exit\nEnter your choice\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter the stock id\n");
				scanf("%d",&n);
				append(&p,n);
				break;
			case 2:
				display(p);
				break;
			case 3:
				deleteatbegining(&p);
				display(p);
				break;
			case 4:
				printf("Exit\n");
				break;
			default:
				printf("Enter a valid choice");
				break;
			}
		}
	return 0;
}

void append ( struct stock **q, int num ) {
       struct stock *pp=(struct stock *)malloc(sizeof(struct stock));
       pp->good_number=num;
       pp->link=NULL;
       if(*q==NULL)
       {
           *q=pp;
       }
       else
       {
           struct stock *temp=*q;
           while(temp->link!=NULL)
           {
               temp=temp->link;
           }
           temp->link=pp;
       }
}

void display ( struct stock *q ) {
	   if(q==NULL)
	   {
	       printf("Stock list is empty");
	   }
	   else
	   {
	       printf("Stock list:\n");
	   
          while(q!=NULL)
           {
               
               printf("%d ",q->good_number);
               q=q->link;
               
           }
	   }
	   printf("\n");
}

void deleteatbegining (struct stock **q) {
          struct  stock *temp=*q;
          struct stock *prev;
          if(*q!=NULL)
          {
          prev=temp;
          temp=temp->link;
          prev->link=NULL;
          free(prev);
         *q=temp;
          printf("Successfully delivered\n");
          }
}