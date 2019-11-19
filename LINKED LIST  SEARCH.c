#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
	int data;
	struct node * link;
};
void append ( struct node **, int ) ;
void display ( struct node * ) ;
int search (struct node *, int);


int main() {
	struct node *p ;
	p=NULL;
	int n,ele;
	char ch[10];
	do {
		printf("Enter the value\n");
		scanf("%d",&n);
		append(&p,n);
		printf("Do you want to add another node? Type Yes/No\n");
		scanf("%s",ch);
	}while(!strcmp(ch,"Yes"));
	printf("The elements in the linked list are");
	display(p);
	printf("\n");
	printf("Enter the element to be searched\n");
	scanf("%d",&ele);
	if(search(p,ele))
		printf("%d is present in the linked list\n",ele);
	else
		printf("%d is not present in the linked list\n",ele);
	return 0;
}


void append ( struct node **q, int num ) {
	struct node *pp=(struct node *)malloc(sizeof(struct node));
	pp->data=num;
	pp->link=NULL;
	if(*q==NULL)
	{
	    *q=pp;
	}
	else
	{
	    struct node *temp=*q;
	    while(temp->link!=NULL)
	    {
	        temp=temp->link;
	    }
	  temp->link=pp;
	}
}

void display ( struct node *q ) {
	    while(q!=NULL)
	    {
	        printf(" %d",q->data);
	        q=q->link;
	    }
}
int search ( struct node *q, int e ) {
	while(q->data!=e)
	{
	    if(q->link==NULL)
	    {
	        return 0;
	    }
	    else
	    q=q->link;
	}
	return 1;
}