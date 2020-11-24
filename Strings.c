/*

                     Name:Abid Ahmed
                    Reg No:2018831062
                    Sub:Data Structure
                    Course Name:SWE127,SWE128
                    Program Topic:String Processing
                      • Substring
                      • Indexing
                      • Length
                      • Insert
                      • Replace
                      • Delete
                      • Concatenate



*/




#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void pattern(char s[],char r[],char r1[])
{
    int k=-1;
    char temp1[1000];
      for(int i=0;i<strlen(s);i++)
    {
        int j=0;

          char temp[1000];
           k=i;
        for(int p=i;p<i+strlen(r);p++){
            temp[j]=s[p];

            j++;
        }
        temp[j]='\0';

        if(strcmp(r,temp)==0)
        {

            break;
        }
          temp1[i]=s[i];
    }
    if(k!=-1)
    {
        int j=0;
        int h=k;
        printf("The new string is: ");
      while(1)
      {
          if(j==strlen(r1))
            break;
          temp1[k]=r1[j];
          j++;k++;
        }
        for(int i=h+strlen(r);i<strlen(s);i++){
            temp1[k]=s[i];
            k++;
        }
              temp1[k]='\0';
              printf("%s\n\n",temp1);
    }
    else
    {
        printf("There is no such pattern in the string\n\n");
    }

    return ;
}
void addSubstring(char s[],char sub[],int c)
{
    char temp[1000];
    for(int i=0;i<c;i++){
        temp[i]=s[i];
    }
    for(int i=0;i<strlen(sub);i++)
        temp[i+c]=sub[i];
        int i;
    for( i=c+strlen(sub);i<strlen(sub)+strlen(s);i++){
        temp[i]=s[i-strlen(sub)];
    }
    temp[i]='\0';
        printf("The new string after inserting the substring is: %s\n\n",temp);
        return ;

}
void deleteSubstring(char s[],char sub[],int c,int size)
{
    char temp[strlen(s)-size];
    for(int i=0;i<c;i++){
        temp[i]=s[i];
    }
int i;
   for( i=c;i<strlen(s)-size;i++){
    temp[i]=s[i+size];
}
temp[i]='\0';
printf("The new string after deleting the substring %s is %s\n\n",sub,temp);
return ;

}

void substring(char s[],int p,int size)
{
  char subString[size];
  int j=0;
  for(int i=p;i<=size;i++){
    subString[j]=s[i];
    j++;
  }
  printf("The Substring is: %s\n\n",subString);
  return ;
}
void findingIndex(char s[],char sub[])
{


    for(int i=0;i<strlen(s);i++)
    {
        int j=0;
          char temp[strlen(sub)];
          int k=i;
        for(int p=i;p<i+strlen(sub);p++){
            temp[j]=s[p];

            j++;
        }
        temp[j]='\0';

        if(strcmp(sub,temp)==0)
        {
            printf("The first index of your substring is: %d\n\n",k);
            break;
        }
    }
    return ;

}
 void findingLength(char s[])
{
    printf("The length of the string you entered is: %d\n",strlen(s));
    return ;
}
void  addingStrings(char s[],char sub[])
{
    printf("The new string after adding %s and %s strings are: %s\n\n",s,sub,strcat(s,sub));
    return ;
}

int main()
{

     while(1){
             printf("\n\n1.Finding a substring\n2.Finding the Index of a Substring\n3.Adding a substring\n4.Deleting A Substring\n5.Replacing a pattern with another pattern\n6.Finding The Length Of The String\n7.Adding Two Substring\n8.Quit\nWhat would you like to do?\n\n ");

    int input;
   scanf("%d",&input);
   if(input==0||input>8)
   {
       printf("Invalid Input.Try Again\n");
         printf("\n\n1.Finding a substring\n2.Finding the Index of a Substring\n3.Adding a substring\n4.Deleting A Substring\n5.Replacing a pattern with another pattern\n6.Finding The Length Of The String\n7.Adding Two Substring\nWhat would you like to do?\n\n ");

       for(int i=0;;i++){

     scanf("%d",&input);
     if(input<0&&input<=7)
        break;
        printf("\n\n1.Finding a substring\n2.Finding the Index of a Substring\n3.Adding a substring\n4.Deleting A Substring\n5.Replacing a pattern with another pattern\n6.Finding The Length Of The String\n7.Adding Two Substring\nWhat would you like to do?\n\n ");


   }
   }
   if(input==8){
    printf("Thank You!!!See You Again");

    break;
   }
   char s[1000];
    printf("Enter Your String: ");
      getchar();
   gets(s);

   if(input==1){

    printf("Enter the starting position and size of substring: ");
    int p,size;
    scanf("%d %d",&p,&size);
    substring(s,p,size);
   }
   else if(input==2)
   {
       printf("Enter The String You Want To Find: ");

       char sub[1000];
       gets(sub);
       findingIndex(s,sub);
   }
   else if(input==3)
   {
       printf("Enter the substring you want to add: ");
       char sub[1000];
       gets(sub);
       int choice;
       printf("Enter the position: ");
       scanf("%d",&choice);
       addSubstring(s,sub,choice);
   }
   else if(input==4)
   {
                printf("Enter the substring you want to delete: ");
       char sub[1000];
       gets(sub);
       int choice;
       printf("Enter the position: ");
       scanf("%d",&choice);
       deleteSubstring(s,sub,choice,strlen(sub));
   }
   else if(input==5)
   {
       printf("Enter The Pattern You Want To Replace: ");
       char re[1000];
       gets(re);
         printf("Enter The Pattern You Want To Add: ");
       char replace[1000];
       gets(replace);
       pattern(s,re,replace);

   }

   else if(input==6)
   {
       findingLength(s);
   }
   else if(input==7)
   {

        printf("Enter the string you want to add: ");
       char sub[1000];
       gets(sub);
       addingStrings(s,sub);
   }
}

   return 0;
}




