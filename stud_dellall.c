#include<stdio.h>
#include"stud.h"
void delete_all(sll **ptr)
{
    sll *del;
    if(*ptr==0)
    {
        printf("no records found\n");
        return;
     }
     del=*ptr;
     while(del)
     {
        *ptr=del->next;
        free(del);
        del=*ptr;
    }
    printf("all nodes are deleted\n");
}
