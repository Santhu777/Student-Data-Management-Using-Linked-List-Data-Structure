 #include<stdio.h>
 #include"stud.h"
 #include<string.h>
 void stud_del(sll **ptr)
 {
     if(*ptr==0)
     {
         printf("no records found\n");
             return;
     }
     char ch,s[20];
     int n;
     printf("r:enter rollno to delete\nn:enter name to delete\n");
     scanf(" %c",&ch);
     if(ch=='r')
     {
      l:   printf("enter rollno\n");
             scanf("%d",&n);
         sll *del=*ptr,*prev;
         while(del)
         {
             if(del->rollno==n)
             {
                 if(del==*ptr)
                     *ptr=del->next;
                 else
                     prev->next=del;
                 free(del);
                 printf("record deleted sucessfully\n");
                 return;
             }
             prev=del;
             del=del->next;
 
 
         }
         printf("rollno not found\n");
     }
     else if(ch=='n')
     {
         printf("enter the name\n");
         scanf("%s",s);
         sll *del=*ptr,*prev;
          int c=0;
        while(del)
        {
             if(strcmp(del->name,s)==0)
                 c++;
                 del=del->next;
         }
 
         if(c==0)
         printf("name not found\n");
         if(c==1)
         {
             del=*ptr;
         while(del)
         {
             if(strcmp(del->name,s)==0)
             {
                 if(del==*ptr)
                     *ptr=del->next;
                 else
                     prev->next=del;
                 free(del);
                 printf("record deleted sucessfully\n");
                 return;
             }
             prev=del;
             del=del->next;
  
          }
          }
         else if(c>1)
        {
              del=*ptr;
              while(del)
             {
                  if(strcmp(del->name,s)==0)
                  {
                     printf("%d %s %f\n",del->rollno,del->name,del->percentage);
                 }
                 del=del->next;
             }
             goto l;
 
         }
 
 
     }
  }
