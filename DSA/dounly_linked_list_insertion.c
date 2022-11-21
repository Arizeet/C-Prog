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
    struct node *newnode;
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
    int ch;
    printf("\n1. From Head\t2. From Tail\n");
    scanf("%d",&ch);
    if(ch==1){
        temp=head;
        while(temp!=0){
            printf("%d\t",temp->data);
            temp=temp->next;
        }
    }
    else if(ch==2){
        temp=tail;
        while(temp!=0){
            printf("%d\t",temp->data);
            temp=temp->prev;
        }
    }
    else{
        printf("\nInvalid choice...");
    }
}
void insertB(){
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter data to insert at beginning: ");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
    count++;
}
void insertE(){
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter data to insert at end: ");
    scanf("%d",&newnode->data);
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
    count++;
}
void insertSP(){
    struct node *newnode, *temp;
    int pos, i=1;
    printf("Enter position: ");
    scanf("%d",&pos);
    if(pos<1||pos>count+2){
        printf("Invalid position...");
    }
    else if(pos==1){
        insertB();
    }
    else if(pos==count+1){
        insertE();
    }
    else{
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("Enter data to insert: ");
        scanf("%d",&newnode->data);
        temp=head;
        while(i<pos-1){
            temp=temp->next;
            i++;
        }
        newnode->next=temp->next;
        temp->next->prev=newnode;
        newnode->prev=temp;
        temp->next=newnode;
        count++;
    }
}
int main(){
    int ch=1,choice;
    create();
    printf("LL created: %d nodes in the list",count);
    while(ch){
        printf("\n1. InsertB\t2. InsertE\t3. InsertSP\t4. Display\t5. No. of nodes\t6. EXIT\n");
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