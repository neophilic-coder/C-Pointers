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

//inserting an element at after a random node
struct node* insertafternode(struct node* f, struct node* previousnode, int info){
  struct node* ptr=(struct node*)malloc(sizeof(struct node));
  ptr->info = info;
  ptr->next = previousnode->next;
  previousnode->next = ptr;
  return f;
}

//searching an element in linked list
struct node* searchnum(struct node* f,int num, int pos){
  struct node* ptr=null;
  ptr=f;
  while(ptr!=null){
    if(ptr->info==num){
      printf("Search successful \nElement found at position: %d",pos);
    }
    pos=pos+1;
    ptr=ptr->next;
  }
  return f;
}

//deleting the node at start of linked list
struct node* deletionatfirst(struct node* f){
  struct node* ptr=f;
  f=f->next;
  ptr->next=null;
  free(ptr);
  return f;
}

//deleting the node at the end of linked list
struct node* deletionatend(struct node* f){
  struct node* ptr=f;
  struct node* temp = f->next;
  while(ptr->next!=null){
    ptr=ptr->next;
    temp=temp->next;
  }
  ptr->next=null;
  free(temp);
  return f;
}

//deleting the node at an index of linked list
struct node* deletionatindex(struct node* f,int index){
   struct node *ptr=f;
   struct node *q = f->next;
   int i=0;
   while(i!=(index-1))
   {
       ptr=ptr->next;
       q=q->next;
       i++;
   }
   ptr->next=q->next;
   free(q);
   return f;
}

// Deleting an element with the given value (which is also duplicate of its next one)
struct node* deletionwithvalue(struct node* f,int value){
    struct node *ptr=f;
    struct node *q = f->next;
    while(q->info!=value && q->next!=NULL)
    {
        ptr=ptr->next;
        q=q->next;
    }
    if(q->info==value)
    {
        ptr->next=q->next;
        free (q);
    }
    return f;
}

//reversing the singly linked list
struct node* reverse(struct node *ptr){
    struct node* pre=NULL;
    struct node* after=NULL;
    while(ptr!=NULL){
        after=ptr->next;
        ptr->next=pre;
        pre=ptr;
        ptr=after;
    }
    ptr=pre;
    return;
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
