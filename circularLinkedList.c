#include<stdio.h>
#include<stdlib.h>

 typedef struct node {
 	int data;
 	struct node * next;
 }node;
 
 node * insert(node *r,node *f){
 	node *p=(node *)malloc(sizeof(node));
 	int x;
 	printf("enter data:");
 	scanf("%d",&x);
 	p->data=x;
 	if(r==NULL){
 		p->next=p;
 		
 	}
 	else
 	{
 		r->next=p;
 		p->next=f;
 	}
 	r=p;
 	return r;
 }
 
 void display(node *f){
 	node *ptr=f;
 	
 	while(f->next!=ptr){
 		printf("element is :%d",f->data);
 		f=f->next;
 	}
 	printf("element is :%d",f->data);
 }	
 	
 	
 
 int main(){
 
 node *r=NULL,*f=NULL;
 int ch ;
 while(1){
	
	printf("enter choice :");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			r=insert(r,f);
			if(f==NULL)
				f=r;
			break;
		case 2:
			display(f);
			break;
		case 3:
		
			break;
		case 4:
			return 0;
	}

}
 
 return 0;
 }
