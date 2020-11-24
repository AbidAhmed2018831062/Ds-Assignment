/*

                         Name:Abid Ahmed
                        Reg No:2018831062
                        Sub:Data Structure
                        Course Name:SWE127,SWE128
                        Program Topic:Finding Maximum and Minimum Value of A Given Array




*/





#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
     printf("Enter How Many Numbers You Want: ");
    scanf("%d",&n);
    int a[n+100];
     int min=1000000001,max=-1000000001;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(max<a[i])
            max=a[i];
        if(min>a[i])
            min=a[i];
    }
    printf("The maximum value of the given array is: %d\nABid",max);
    printf("The minimum value of the given array is: %d\n",min);

}
