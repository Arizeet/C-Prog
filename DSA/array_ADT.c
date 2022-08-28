#include<stdio.h>
#include<stdlib.h>

struct myArray{
    int t_size;
    int u_size;
    int *ptr;
};

void createArray(struct myArray* a, int tSize, int uSize){
    // (*a).t_size=tSize;
    // (*a).u_size=uSize;
    // (*a).ptr=(int*)malloc(tSize*sizeof(int));
    a->t_size=tSize;
    a->u_size=uSize;
    a->ptr=(int*)malloc(tSize*sizeof(int));
}

void setVal(struct myArray* a){
    int n;
    printf("Enter the elements: ");
    for (int i = 0; i < a->u_size; i++){
        scanf("%d",&n);
        (a->ptr)[i]=n;
    }
}

void show(struct myArray* a){
    for (int i = 0; i < a->u_size; i++){
        printf("%d ",(a->ptr)[i]);
    }
}
int main(){
    struct myArray marks;
    createArray(&marks,10,2);
    printf("\nRunning setVal...\n");
    setVal(&marks);
    printf("Running show...\n");
    show(&marks);
    return 0;
}