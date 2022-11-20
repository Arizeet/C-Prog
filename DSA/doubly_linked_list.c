#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};
int count=0;
struct node *head, *tail;
void create(){
    struct node *newnode, *tail;
    int choice=1;
    while(choice){
        newnode = (struct node *)malloc(sizeof(struct node));
        count++;
        printf("Enter data: ");
        scanf("%d",&newnode->data);
        if(head==0){
            head=tail=newnode;
        }
        else{
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }
        printf("Continue..? ");
        scanf("%d",&choice);
    }
}
void display(){
    struct node *temp;
    // int ch;
    // printf("\n1. From Head\t2. From Tail\n");
    // scanf("%d",&ch);
    // if(ch==1){
        temp=head;
        while(temp!=0){
            printf("%d\t",temp->data);
            temp=temp->next;
        }
    // }
    // else if(ch==2){
        // temp=tail;
        // while(temp!=0){
        //     printf("%d\t",temp->data);
        //     temp=temp->prev;
        // }
    // }
    // else{
    //     printf("\nInvalid choice...");
    // }
}
int main(){
    create();
    printf("LL created: %d nodes in the list\n",count);
    display();
    return 0;
}