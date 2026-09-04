 #include<stdio.h>
 #include"stud.h"
 void stud_add(sll **ptr)
 {
     int i=1;
     sll *new,*last;
     new=malloc(sizeof(sll));
printf("enter student name and percentage\n");
     scanf("%s %f",new->name,&new->percentage);
     last=*ptr;
     while(last)
     {
         if(last->rollno==i)
             i++;
             else
                 break;
                 last=last->next;
     }
     new->rollno=i;
     if((*ptr==0)||(new->rollno<(*ptr)->rollno))
     {
         new->next=*ptr;
         *ptr=new;
     }
     else
     {
         last=*ptr;
         while((last->next!=0)&&(new->rollno>last->next->rollno))
             last=last->next;
             new->next=last->next;
             last->next=new;
     }
 }
