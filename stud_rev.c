#include<stdio.h>
#include"stud.h"
void stud_rev(sll **ptr)
{
    if(*ptr==0)
    {
        printf("no records found\n");
        return;
    }
    int c=0;
    sll *temp=*ptr;
    while(temp)
    {
        c++;
        temp=temp->next;
    }
    sll **p,*t=*ptr;
    int i;
    if(c>1)
        p=malloc(sizeof(sll*)*c);
        for(i=0;i<c;i++)
        {
            p[i]=t;
            t=t->next;
        }
       for(i=c-1;i>0;i--)
            p[i]->next=p[i-1];
            p[0]->next=0;
            *ptr=p[c-1];
   }
