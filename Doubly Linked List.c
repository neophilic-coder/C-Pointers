#include <stdio.h>
#include <stdlib.h>
struct node{
  int info;
  struct node* prev;
  struct node* next;
}

//inserting at the start of doubly linked list
struct node* insertionatstart(struct node* f,int info){
  struct node* ptr = (struct node*)malloc(sizeof(struct node));
  ptr->info = info;
  ptr->next=f;
  f->prev = ptr;
  ptr->prev=null;
  f=ptr;
  return f;
}

//inserting at the end of doubly linked list
struct node* insertionatend(struct node* f,int info){
  struct node* ptr = (struct node*)malloc(sizeof(struct node));
  ptr->info=info;
    ptr->next=NULL;
    struct node* q=f;
    if(f==NULL){
        printf("\nOverflow\n");
    }
    else{
        while(q->next!=NULL){
            q=q->next;
        }
        q->next=ptr;
        ptr->prev=q;
    }
    return f;
}

//inserting at the mid of doubly linked list
struct node* insertionatend(struct node* f,int info){
  struct node* ptr = (struct node*)malloc(sizeof(struct node));
  ptr->info=info;
  struct node* q=f;
    struct node* h=f;
    int i=0;
    while(i!=index)
    {
        q=q->next;
        i++;
    }
    h=q->next;
    q->next=ptr;
    ptr->prev=q;
    ptr->next=h;
    h->prev=ptr;
    return f;
}

  
