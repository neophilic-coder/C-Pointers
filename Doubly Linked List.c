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

//linked list traversing
void linkedlisttraversal(struct node *ptr){
    int count=0;
    printf("Elements are:\n");
    while(ptr!=NULL)
    {
    printf("%d\n",ptr->info);
    ptr=ptr->next;
    count++;
    }
    printf("\nNumber of elements in the list are: %d\n",count);
}
int main(){
    struct node *f,*s,*t,*g,*h;
    f=(struct node*)malloc(sizeof(struct node));
    s=(struct node*)malloc(sizeof(struct node));
    t=(struct node*)malloc(sizeof(struct node));
    g=(struct node*)malloc(sizeof(struct node));
    h=(struct node*)malloc(sizeof(struct node));
    
    f->prev=NULL;
    scanf("%d",&f->info);
    f->next=s;
    
    s->prev=f;
    scanf("%d",&s->info);
    s->next=t;
    
    t->prev=s;
    scanf("%d",&t->info);
    t->next=g;
    
    g->prev=t;
    scanf("%d",&g->info);
    g->next=h;
    
    h->prev=g;
    scanf("%d",&h->info);
    h->next=NULL;
    linkedlisttraversal(f);
  /*  
    f=insertionatstart(f,50);
    printf("Doubly LL after insertion at beginning is\n");
    linkedlisttraversal(f);
    
    f=insertionatmid(f,27,2);
    printf("Doubly LL after insertion at index is\n");
    linkedlisttraversal(f);
   
    f=insertionatend(f,45);
    printf("Doubly LL after insertion at end is\n");
    linkedlisttraversal(f);
    
    f=search(f,5,1);
    f=reverse(f);
    printf("After reversing the list:\n");
    linkedlisttraversal(f);  */
    
    f=deletionatfirst(f);
    printf("After deletion in the beginning, ll is:\n");
    linkedlisttraversal(f);
    
    f=deletionatmid(f,2);
    printf("After deletion at middle linked list is:\n");
    linkedlisttraversal(f);
    
    f=deletionatend(f);
    printf("After deletion at end linked list is:\n");
    linkedlisttraversal(f);
}
