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
        if(head==0){
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        temp->next=head;
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
}
void deleteB(){
    struct node *temp;
    if(head==0){
        printf("\nLL is empty");
    }
    else{
        temp=head;
        head=head->next;
        free(temp);
        count--;
    }
}
void deleteE(){
    struct node *currnode, *prevnode;
    if(head==0){
        printf("\nLL is empty");
    }
    else{
        currnode=prevnode=head;
        while(currnode->next!=0){
            prevnode=currnode;
            currnode=currnode->next;
        }
        prevnode->next=0;
        free(currnode);
        count--;
    }
}
void deleteSP(){
    struct node *currnode, *prevnode;
    int pos,i=1;
    printf("Enter the pos to delete: ");
    scanf("%d",&pos);
    if(pos>count || pos<1){
        printf("Invalid position...");
    }
    else if(pos==1){
        deleteB();
    }
    else if(pos==count){
        deleteE();
    }
    else{
        currnode=prevnode=head;
        while(i<pos){
            prevnode=currnode;
            currnode=currnode->next;
            i++;
        }
        prevnode->next=currnode->next;
        free(currnode);
        count--;
    }
}
int main(){
    int ch=1,choice;
    create();
    printf("CLL created: %d nodes in the list",count);
    while(ch){
        printf("\n1. DeleteB\t2. DeleteE\t3. DeleteSP\t4. Display\t5. No. of nodes\t6. EXIT\n");
        scanf("%d",&choice);
        switch(choice){
            case 1: deleteB();  break;
            case 2: deleteE();  break;
            case 3: deleteSP(); break;
            case 4: display();  break;
            case 5: printf("%d nodes in LL",count); break;
            case 6: exit(1);
            default:    printf("Invalid i/p...\n");
        }
    }
    return 0;
}