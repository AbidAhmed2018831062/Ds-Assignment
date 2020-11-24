/*


                        Name:Abid Ahmed
                        Reg No:2018831062
                        Sub:Data Structure
                        Course Name:SWE127,SWE128
                        Program Topic:Sort an Array and Count Each and Every Comparisons and Swaps








#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter The Number You Want In Your Array: ");
    scanf("%d",&n);
    printf("Enter Your Array: ");
    int a[n+1];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int swap=0,comp=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            comp++;
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                swap++;
            }

        }
    }
    printf("\nSorted Array is: ");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n\n");
printf("Total Numbers of Comparisons Needed: %d\n\n",comp);
printf("Total Numbers of Swaps Needed: %d\n\n",swap);
}
