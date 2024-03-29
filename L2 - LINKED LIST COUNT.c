#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
	int data;
	struct node * link;
};
void append ( struct node **, int ) ;
void display ( struct node * ) ;
int count ( struct node * ) ;

int main() {
	struct node *p ;
	p=NULL;
	int n;
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
	printf("The number of elements in the linked list is %d\n",count(p));
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

int count ( struct node * q ) {
	int co=0;
	while(q!=NULL)
	{
	    co +=1;
	    q=q->link;
	}
	return co;
}