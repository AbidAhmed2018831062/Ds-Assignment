/*

                        Name:Abid Ahmed
                        Reg No:2018831062
                        Sub:Data Structure
                        Course Name:SWE127,SWE128
                        Program Topic:Stack Implentation(pop ,push)




*/







#include<stdio.h>
#include<stdlib.h>

struct Stack{
    int top;
    int Size;
    int *arr;

};
int isEmpty(struct Stack *s){
    if(s->top==-1)
        return 0;
    return 1;
}
int isFull(struct Stack *s){
    if(s->top==s->Size-1){

        return 0;
        }
        return 1;
}
void push(struct Stack *s,int value){

    if(isFull(s)==1)
    {
        s->top++;
        s->arr[s->top]=value;

    }
    else{
        printf("\nStack Overflow\n");
    }


}
int pop(struct Stack *s){
if(isEmpty(s))
{
    int value=s->arr[s->top];
    s->top--;
    return value;
}
else{
      //  printf("\nStack Underflow\n");
        return -1;

}
}
int main()
{

struct     Stack *s=(struct Stack*) malloc(sizeof(struct Stack));
    s->Size=100;
    s->top=-1;
    s->arr=(int*)malloc(s->Size*sizeof(int));
    int a[s->Size];
    a[0]=1;
    a[1]=10;
    a[2]=100;
    a[3]=1000;
    a[4]=10000;
    a[5]=100000;
    for(int i=0;i<6;i++){
    push(s,a[i]);
    }
    printf("So The stack is: ");
       for(int i=0;i<s->Size;i++){
        int k=pop(s);
       if(k==-1){
            printf("\nStack Underflow(Stack is Empty)\n");
       break;
       }
     printf("%d ",k);

     }
//push(s);
    return 0;
}
