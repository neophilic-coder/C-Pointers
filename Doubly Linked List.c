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

//searching an element in a doubly linked list
struct node* search(struct node* f,,int num,int pos){
  struct node* ptr=null;
  ptr=f;
  if(f==NULL){
    printf("\nOverflow\n");
  }
  else{
  while(ptr->next!=null){
    if(ptr->info == num){
      printf("Search successful \n Element found at position: %d",pos);
    }
    pos=pos+1;
    ptr=ptr->next;
  }
  }
}

//reversing the doubly linked list
struct node* reverse(struct node* f){
    struct node* ptr=f;
    struct node* ptr1=ptr->next;
   
    ptr->next=NULL;
    ptr->prev=ptr1;
    
    while(ptr1!=NULL){
        ptr1->prev=ptr1->next;
        ptr1->next=ptr;
        ptr=ptr1;
        ptr1=ptr1->prev;
    }
    f=ptr;
    return f;
}

//deleting an element at the beginning of doubly linked list
struct node* deletionatfirst(struct node* f){
  struct node* ptr=f;
  f=f->next;
  if(f==NULL){
    printf("\nOverflow\n");
  }
  else{
    ptr->next=NULL;
  }
  free(ptr);
  return f;
}

//deleting an element at the mid of doubly linked list
struct node* deletionatmid(struct node* f,int index){
    struct node* ptr=f;
    struct node* p=f;
    int i=0;
    while(i!=index){
        ptr=ptr->next;
        i++;
    }
    p=ptr->prev;
    p->next=ptr->next;
    ptr->next->prev=p;
    free(ptr);
    ptr=NULL;
    return f;
}

//deleting an element at the end of doubly linked list
struct node* deletionatend(struct node* f){
    struct node* ptr=f;
    struct node* p;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    p=ptr->prev;
    ptr->prev=NULL;
    p->next=NULL;
    free(ptr);
    return f;
}
