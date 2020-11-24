

/*

                        Name:Abid Ahmed
                        Roll:2018831062
                        Program Topic:Inserting Value To A Sorted Array




*/





#include<stdio.h>
#include<stdlib.h>
int main(){


 int n;
 printf("Enter How Many Numbers You Want: ");
    scanf("%d",&n);
    int a[n+100];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int temp;
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
   printf("Enter the Value You Want to Delete: ");
    int value;
    scanf("%d",&value);
    int p=0;
    for(int i=0;i<n;i++)
    {
        if(value==a[i])
            p=i;
    }
    for(int i=p;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    for(int i=0;i<n-1;i++)
        printf("%d ",a[i]);


}
