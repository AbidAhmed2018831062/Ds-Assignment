
/*

                        Name:Abid Ahmed
                        Reg No:2018831062
                        Sub:Data Structure
                        Course Name:SWE127,SWE128
                        Program Topic:Insert a new element in a sorted Array so that Array remains sorted




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
   printf("Enter the Value You Want to Insert: ");
    int value;
    scanf("%d",&value);
    int p=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]<=value&&a[i+1]>value)
        {
                p=i;
             //    printf("%d ",a[i]);

                int j=n+1;
                for( ;j>i;j--)
                {

                    a[j+1]=a[j];

                }
                  break;
        }


    }
    if(p==-1)
    {
        if(value>=a[n-1])
            a[n]=value;
            else if(value<=a[0])
            {

                  for(int j=n-1;j>=0;j--)
                {

                    a[j+1]=a[j];

                }
                a[0]=value;
            }
    }
    else
    a[p+1]=value;
    printf("Array After Inserting The value\n");
    for(int i=0;i<n+1;i++)
        printf("%d ",a[i]);

}
