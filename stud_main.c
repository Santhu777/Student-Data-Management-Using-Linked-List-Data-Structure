#include<stdio.h>
#include"stud.h"
sll *headptr=0;
 int main()
 {
     char ch;
     FILE *fp=fopen("student_dat","r");
     if(fp==0)
        printf("no file present\n");
     else
     ch=fgetc(fp);
     if(ch==-1)
         printf("no data found\n");
         else
         {
             sll *new,*last;
             FILE *fp;
             fp=fopen("student_dat","r");
             while(1)
             {
                 new=malloc(sizeof(sll));
                  if(fscanf(fp,"%d %s %f",&new->rollno,new->name,&new->percentage)!=3)
                 {
                      free(new);
                      break;
                  }
                      new->next=0;
                      if(headptr==0)
                          headptr=new;
                          else
                          {
                              last=headptr;
                             while(last->next)
                                 last=last->next;
                                  last->next=new;
                          }
              }
         }
 
 
     char op;
     while(1)
     {
      printf("******** STUDENT RECORD MENU *********\n");
       printf("a:add new record \nd:delete a record\ns:show the list\nm:modify a records\nv:save records\ne:exit\nt:sort the list\nl:delete all the records\nr:reverse the list\    n");
        printf("enter your choice:");
 
        scanf(" %c",&op);
        switch(op)
        {
            case 'a':stud_add(&headptr);break;
            case 's':stud_show(headptr);break;
            case 'd':stud_del(&headptr);break;
            case 'v':stud_save(headptr);break;
            case 'l':delete_all(&headptr);break;
            case 'r':stud_rev(&headptr);break;
            case 'm':stud_mod(headptr);break;
            case 'e':printf("s:save and exit\np:exit without saving\n");printf("enter the choice\n");scanf(" %c",&ch);
            if(ch=='s')
            {
                stud_save(headptr);
                return 1;
            }
            else if(ch=='p')
            exit(0);
            default:printf("unknown choice\n");
        }
     }
 }

