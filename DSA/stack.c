#include<stdio.h>
#include<stdlib.h>
#define N 5
int stack[N];
int top=-1;
void push(int n){
    if (top == N-1)
        printf("Overflow Condition");
    else{
        top++;
        stack[top]=n;}
}
void pop(){
    int item;
    if (top==-1)
        printf("Underflow Condition");
    else{
        item=stack[top];
        top--;
        printf("Popped item: %d",item);}
}
// void peek(){
//     if(top==-1)
//         printf("The stack is empty");
//     else
//         printf("The topmost element is: %d",stack[top]);
// }
void display(){
    if(top==-1)
        printf("The stack is empty");
    else{
        for (int i = 0; i <= top; i++){
            printf("%d ",stack[i]);} }
}
int main()
{
    int n,num;
    system("cls");
    do
    {
        printf("\nEnter your choice:\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        scanf("%d",&n);
        switch (n)
        {
            case 1:
                printf("Enter data: ");scanf("%d",&num); push(num); break;
            case 2:
                pop(); break;
            // case 3:
            //     peek(); break;
            case 3:
                display(); break;
            case 4:
                goto lable;
            default:
                printf("Invalid choice...");    break;
        }
    } while (n!=4);
    lable:
    printf("Exit...");
    return 0;
}