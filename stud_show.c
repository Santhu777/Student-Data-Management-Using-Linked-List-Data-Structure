#include<stdio.h>
#include"stud.h"
void stud_show(sll *ptr)
{
    if(ptr==0)
    {
        printf("no records found\n");
        return;
    }
     while(ptr)
    {
        printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
        ptr=ptr->next;
    }
}
