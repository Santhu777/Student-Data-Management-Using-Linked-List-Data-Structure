#include<stdio.h>
#include"stud.h"
void stud_save(sll *ptr)
{
    if(ptr==0)
    {
        printf("no records found\n");
        return;
    }
    FILE *fp;
    fp=fopen("student_dat","w");
    while(ptr)
    {
        fprintf(fp,"%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
        ptr=ptr->next;
    }
    printf("data saved in file\n");
fclose(fp);
}
