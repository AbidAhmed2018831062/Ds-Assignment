/*

                        Name:Abid Ahmed
                        Roll:2018831062
                        Program Topic:Infix to Postfix




*/
#include<stdio.h>
#include<stdlib.h>
struct Stack{

int top;
int size;
char *arr;

};
int isEmpty(struct Stack *s){
    if(s->top==-1)
        return 0;
    return 1;
}
int isFull(struct Stack *s){
    if(s->top==s->size-1){

        return 0;
        }
        return 1;
}
void push(struct Stack *s,char value){

    if(isFull(s)==1)
    {
        s->top++;
        s->arr[s->top]=value;
     //   return s;

    }
    else{
        printf("\nStack Overflow\n");
       // return s;
    }


}
int whichis(char k)
{
    if(k=='/'||k=='*')
        return 4;
    else if(k=='+'||k=='-')
        return 3;
        else
            return 0;
}
char pop(struct Stack *s){
if(isEmpty(s))
{
    char value=s->arr[s->top];
    s->top--;
    return value;
}
else{
  //      printf("\nStack Underflow\n");
        return '\0';

}
}
void infixtopostifx(char infix[10000])
{
 struct Stack *s=(struct Stack*) malloc(sizeof(struct Stack));
    s->size=100;
    s->top=-1;
    s->arr=(char*)malloc(s->size*sizeof(char));
    int i=0;
    int j=0;
    char postfix[10000];
    while(infix[i]!='\0')
    {
        if(infix[i]!='*'&&infix[i]!='+'&&infix[i]!='/'&&infix[i]!='-')
        {
            postfix[j]=infix[i];
            j++;
            i++;
        }
        else{
            if(whichis(infix[i])>whichis(s->arr[s->top]))
            {

            push(s,infix[i]);
                i++;
            }
            else{

                  char k=pop(s);
                postfix[j]=k;

                j++;
            }
        }

    }
    while(1)
    {
        char k=pop(s);
        if(k=='\0')
            break;
        postfix[j]=k;
        j++;
    }
    printf("So the postfix expression of String %s is: %s\n",infix,postfix);
}
int main()
{
    char infix[10000];
    printf("Enter The Postfix Expression You Want To Convert: ");
    gets(infix);
   infixtopostifx(infix);
    return 0;
}
