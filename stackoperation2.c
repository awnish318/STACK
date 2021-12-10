
#include <stdio.h>
#include <stdlib.h>

struct stack{
    int size;
    int top;
    int *s;
};
typedef struct stack st;

void create(st *p){
    printf("enter size");
    scanf("%d",&((*p).size));
    (*p).top=-1;
    (*p).s=(int*)malloc(sizeof(int)*((*p).size));
}
void push(st *p,int x){
    if((*p).top==((*p).size-1)){
        printf("overflow\n");
    }
    else{
    (*p).top++;
    (*p).s[(*p).top]=x;
}
}
void pop(st*p){
    if((*p).top==-1){
        printf("underflow\n");
    }
    else{
    printf("%d\n",(*p).top);
    (*p).top--;
    }
}
void display(st p){
    for(int i=(p).top;i>=0;i--){
        printf("%d",p.s[i]);
    }
    printf("\n");
}
int isempty(st p){
    if(p.top==-1){
        return 1;
    }
    return 0;
}
int isfull(st p){
    
        return  p.top==(p.size-1);
}

    


int main()
{
st p;
create(&p);
push(&p,10);
push(&p,40);
push(&p,50);
push(&p,70);
push(&p,80);
display(p);

    return 0;
}

