#include <stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node* next;
};
struct node* start=NULL;
void main(){
  int choice=0;
  while(choice!=7){
      printf("*************************************");
      printf("\n1.Insert in begining\n2.Insert at last\n3.Delete from Beginning\n4.Delete from last\n5.Search for an element\n6.Show\n7.Exit\n");
      printf("\nEnter your choice:");
      scanf("%d",&choice);
      switch(choice){
          case 1:
          insertatfirst();
          break;
          case 2:
          insertatend();
          break;
          case 3:
          deleteatfirst();
          break;
          case 4:
          deleteatend();
          break;
          case 5:
          searchnum();
          break; 
          case 6:
          display();
          break;
          case 7:
          exit(0);
          break;
          default:
          printf("Please enter valid choice.\n");
      }
  }
}


void insertatfirst(){
  struct node* temp,*ptr;
  temp=(struct node*)malloc(sizeof(struct node));
    
  if(temp==NULL){   //Heap is not empty
      printf("\nOverflow\n");
  }
  else{
      printf("Enter the data of node:");
      scanf("%d",&temp->info);
      if (start==NULL){   //if no list is there then inserted node becomes first node
          start=temp;
          temp->next=start;     //CLL Created
      }
      else{
          ptr=start;
          while(ptr->next!=start)
              ptr=ptr->next;
          temp->next=start;
          ptr->next=temp;
          start=temp;
      }
      printf("Node Inserted\n");
  }
}


void insertatend(){
    struct node* temp,*ptr;
    temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL){
        printf("\nOverflow\n");
    }
    else{
        printf("Enter the data:");
        scanf("%d",&temp->info);
        if(start==NULL){
            start=temp;
            temp->next=start;
        }
        else{
            ptr=start;
            while(ptr->next!=start){
                ptr=ptr->next;
            }
            ptr->next=temp;
            temp->next=start;
        }
    }
    printf("Node inserted\n");
    display();
}
