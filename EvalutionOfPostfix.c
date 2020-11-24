
/*

                        Name:Abid Ahmed
                        Roll:2018831062
                        Program Topic:Postfix Evaluate




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
       // printf("%d\n",value);

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
   // printf("%dabid\n",value);
    return value;
}
else{
        printf("\nStack Underflow\n");
        return 0;

}
}
void evaluatepostfix(char postfix[10000])
{
       struct Stack *s=(struct Stack*) malloc(sizeof(struct Stack));
    s->Size=100;
    s->top=-1;
    s->arr=(int*)malloc(s->Size*sizeof(int));
    int i=0,j=0;
    while(postfix[i]!='\0')
    {
       if(postfix[i]!='/'&&postfix[i]!='*'&&postfix[i]!='+'&&postfix[i]!='-')
       {
           int t=postfix[i]-'0';
      //     printf("%d",t);
           push(s,t);
           i++;
     }
     else
     {
         int t1=pop(s);
         int t2=pop(s);
      //   printf("%d %d",t1,t2);
         if(postfix[i]=='+')
         {
             push(s,t1+t2);
         }
           else if(postfix[i]=='-')
         {
             push(s,t1-t2);
         }
          else if(postfix[i]=='*')
         {
             push(s,t1*t2);
         }
         else
         {
             push(s,t1/t2);
         }
         i++;
     }
    }
    printf("The result of %s postfix expression is: %d",postfix,pop(s));
}
int main()
{

   char postfix[10000];
   gets(postfix);
   evaluatepostfix(postfix);
    return 0;
}
