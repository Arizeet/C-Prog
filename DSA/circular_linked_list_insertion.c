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
    int choice;
    printf("Want to create newnode..? ");
    scanf("%d",&choice);
    while(choice){
        newnode = (struct node *)malloc(sizeof(struct node));
        count++;
        printf("Enter data: ");
        scanf("%d",&newnode->data);
        if(head==0){
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        temp->next=head;
        printf("Want to create newnode..? ");
        scanf("%d",&choice);
    }
}
void display(){
    struct node *temp;
    if(head==0){
        printf("List is empty.!");
    }
    else{
        temp=head;
        while(temp->next!=head){
            printf("%d\t",temp->data);
            temp=temp->next;
        }
        printf("%d\t",temp->data);
    }
}
void insertB(){
    struct node *newnode, *temp;
    if(head==0){
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data to insert at beginning: ");
        scanf("%d",&newnode->data);
        head=newnode;
    }
    else{
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data to insert at beginning: ");
        scanf("%d",&newnode->data);
        newnode->next=head;
        temp=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=newnode;
        head=newnode;
    }
    count++;
}
void insertE(){
    struct node *newnode, *temp;
    if(head==0){
        printf("Enter data to insert: ");
        scanf("%d",&head->data);
    }
    else{
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data to insert at end: ");
        scanf("%d",&newnode->data);
        temp=head;
        while (temp->next!=head)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=head;
    }
    count++;
}
void insertSP(){
    struct node *newnode, *temp;
    int pos,i=1;
    printf("Enter the pos: ");
    scanf("%d",&pos);
    if (pos<1||pos>count+2){
        printf("Invalid position...");
    }
    else if (pos==1){
        insertB();
    }
    else if(pos==count+1){
        insertE();
    }
    else{
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data to insert: ");
        scanf("%d",&newnode->data);
        temp=head;
    }
}
int main(){
    int ch=1,c;
    create();
    printf("LL created: %d nodes in the list",count);
    while(ch){
        printf("\n1. InsertB\t2. InsertE\t3. InsertSP\t4. Display\t5. No. of nodes\t6. EXIT\n");
        scanf("%d",&c);
        switch(c){
            case 1: insertB();  break;
            case 2: insertE();  break;
            case 3: insertSP(); break;
            case 4: display();  break;
            case 5: printf("%d nodes in CLL",count); break;
            case 6: exit(1);
            default:    printf("Invalid i/p...\n");
        }
    }
    return 0;
}





