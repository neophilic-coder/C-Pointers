#include <stdio.h>
#include <stdlib.h>
struct node{
  int info;
  struct node* next;
}

//inserting an element at the beginning of linked list
struct node* insertionatfirst(struct node* f,int info){
  struct node* ptr=(struct node*)malloc(sizeof(struct node));
  ptr->info = info;
  ptr->next = f;
  f=ptr;
  return f;
}

//inserting an element at the end of list
struct node* insertatend(struct node* f,int info){
  struct node* ptr=(struct node*)malloc(sizeof(struct node));
  struct node* temp=f;
  while(temp->next!=null){
    temp=temp->next;
  }
  temp->next=ptr;
  ptr->info = info;
  ptr->next=null;
  return f;
}

//inserting an element at the middle of linked list
struct node* insertionatmid(struct node*f,int info,int index){
  struct node* ptr=(struct node*)malloc(sizeof(struct node));
  struct node* temp=f;
  int i=0;
  while(i!=(index-1)){
    temp=temp->next;
    i++;
  }
  ptr->next = temp->next;
  temp->next = ptr;
  ptr->info=info;
  return f;
}

//traversing the linked list and finding out its all elements
void linkedlisttraversal(struct node* ptr){
  while(ptr!=null){
    printf("Elements are: %d\n",ptr->info);
    ptr=ptr->next;
  }
}
int main(){
  struct node *f,*s,*t,*g;
  int count;
  f = (struct node*)malloc(sizeof(struct node));
  s = (struct node*)malloc(sizeof(struct node));
  t = (struct node*)malloc(sizeof(struct node));
  g = (struct node*)malloc(sizeof(struct node));
  scanf("%d",&f->info);
  s = f->next;
  scanf("%d",&s->info);
  s->next = t;
  scanf("%d",&t->info);
  t->next = g;
  scanf("%d",&g->info);
  g->next=NULL;
  
  linkedlisttraveral(f);
