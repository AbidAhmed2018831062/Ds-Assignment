#include<stdio.h>
#include<stdlib.h>
void BinarySearch(int bin[10],int value,int size)
{
    int lower=0,upper=size-1;
    int step=1;
    while(lower<=upper)
    {
        int m=(lower+upper)/2;
        printf("Step No: %d\n",step);
        step++;
        printf("Lower Value: %d and lower index: %d\n",bin[lower],lower);
        printf("Mid Value: %d and mid index: %d\n",bin[m],m);
        printf("Upper Value: %d and upper index: %d\n\n",bin[upper],upper);
        if(bin[m]==value)
        {
            printf("\nThe value %d is founded at step no: %d\nAnd at index no: %d",value,step-1,m);
            return ;
        }
        else if(value<bin[m])
        {
            upper=m-1;
        }
        else
            lower=m+1;
    }
    printf("The value is not founded.Please insert a valid value!!!!");
}
int main()
{
   printf("How many numbers you want to take: ");
   int n;
   scanf("%d",&n);
   printf("Please Enter Your Array: ");
   int bin[10000];
   for(int i=0;i<n;i++)
    scanf("%d",&bin[i]);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {

            if(bin[i]>bin[j])
            {
                int temp=bin[i];
                bin[i]=bin[j];
                bin[j]=temp;

            }

        }
    }
   printf("Please Enter The Value You Want To Search: ");
   int value;
   scanf("%d",&value);
   printf("\n");
    BinarySearch(bin,value,n);
    return 0;
}
