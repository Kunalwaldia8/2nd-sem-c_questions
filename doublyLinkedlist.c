 #include <stdio.h>
#include <stdlib.h>

typedef struct node{
	struct node *prev;
	int data;
	struct node *next;
}node;

node * dinsert(node *r){
	int x;
	node *p=(node *)malloc(sizeof(node));
	printf("enter data");
	scanf("%d",&x);
	p->data=x;
	if(r==NULL){
		r=p;
		r->prev=NULL;
	}
	else{
		r->next=p;
		p->prev=r;
		r=p;
	}
	r->next=NULL;
	return r;
}

void ddel(node **f,node **r){
	int element;
	node *p=*f;
	
	if(*f==NULL)
		printf ("empty linkedList");
	printf("enter element to delete:");
	scanf("%d",&element);
	
	while(p!=NULL){
		if(p->data==element){
			break;
		}
			p=p->next;
	}
	
	if(p==NULL){
		printf("element not found\n");
		}
	else{
	
	if(p->next==NULL && p->prev==NULL){
		*f=NULL;
		*r=NULL;
		free(p);
	}
	
	else if(p->prev=NULL)
	{
		*f=p->next;
		(*f)->prev=NULL;
		free(p);
	}
	
	else if(p->next=NULL){
		*r=p->prev;
		(*r)->next=NULL;
		free(p);
	}
	
	else {
		node *q=p->prev;
		q->next=p->next;
		node *w=p->next;
		w->prev=p->prev;
		free(p);
	}
	}
}
		
		
	
	
	
	
	

void display(node *p){
	while(p!=NULL){
		printf("element is :%d\n",p->data);
		p=p->next;
	}
	

}



int main(){
	
	int ch;
	node *r=NULL,*f=NULL;
	
	while(1){
	
	printf("enter choice :");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			r=dinsert(r);
			if(f==NULL)
				f=r;
			break;
		case 2:
			ddel(&f,&r);
			break;
		case 3:
		display(f);
			break;
			return 0;
	}

}
}
