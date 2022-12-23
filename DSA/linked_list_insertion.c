#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int count=0;
struct node *head;
void create(){
    struct node *newnode, *temp;
    int choice=1;
    while(choice){
        newnode = (struct node *)malloc(sizeof(struct node));
        count++;
        printf("Enter data: ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0){
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        printf("Continue..? ");
        scanf("%d",&choice);
    }
}
void display(){
    struct node *temp;
    temp=head;
    while(temp!=0){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void insertB(){
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data to insert at beginning: ");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
    count++;
}
void insertE(){
    struct node *newnode, *temp;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data to insert at end: ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    temp=head;
    while(temp->next!=0){
        temp=temp->next;
    }
    temp->next=newnode;
    count++;
}
void insertSP(){
    int pos,i=1;
    struct node *newnode, *temp;
    printf("Enter the pos to enter: ");
    scanf("%d",&pos);
    if(pos>count+1||pos<1){
        printf("Invalid position...");
    }
    else if(pos==1){
        insertB();
    }
    else if(pos==count+1){
        insertE();
    }
    else{
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data: ");
        scanf("%d",&newnode->data);
        temp=head;
        while(i<pos-1){
            temp=temp->next;
            i++;
        }
        newnode->next=temp->next;
        temp->next=newnode;
        count++;
    }
}
int main(){
    int ch=1,choice;
    create();
    printf("LL created: %d nodes in the list\n",count);
    while(ch){
        printf("1. InsertB\t2. InsertE\t3. InsertSP\t4. Display\t5. No. of nodes\t6. EXIT\n");
        scanf("%d",&choice);
        switch(choice){
            case 1: insertB();  break;
            case 2: insertE();  break;
            case 3: insertSP(); break;
            case 4: display();  break;
            case 5: printf("%d nodes in LL",count); break;
            case 6: exit(1);
            default:    printf("Invalid i/p...\n");
        }
    }
    return 0;
}