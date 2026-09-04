 #include<stdio.h>
#include"stud.h"
#include<string.h>
void stud_mod(sll *ptr)
{
    printf("enter which record to search for modification\n");
    printf("r:search by rollno\nn:search by name\np:search by percentage\n");
    char op;
    scanf(" %c",&op);
    if(op=='r')
    {
        int n;
       l: printf("enter rollno\n");
        scanf("%d",&n);
        while(ptr)
        {
        if(n==ptr->rollno)
        {
            printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
            printf("update name and percentage\n");
            scanf("%s %f",ptr->name,&ptr->percentage);
            return;
        }
        ptr=ptr->next;
        }
    }
    else if(op=='n')
     {
        char s[20];
        printf("enter the name\n");
        scanf("%s",s);
        sll *temp=ptr;
        int c=0;
        while(temp)
        {
            if(strcmp(temp->name,s)==0)
                c++;
                temp=temp->next;
}
        if(c>1)
        {
            sll *temp1=ptr;
        while(temp1)
 {
            if(strcmp(s,temp1->name)==0)
            {
                printf("%d %s %f\n",temp1->rollno,temp1->name,temp1->percentage);
            }
            temp1=temp1->next;
        }
         goto l;
       }
        else
         {
            while(ptr)
            {
            if(strcmp(s,ptr->name)==0)
            {
printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
                printf("enter the name and percentage\n");
                scanf("%s %f",ptr->name,&ptr->percentage);
                return;
            }
ptr=ptr->next;
            }
        }
    }
else if(op=='p')
    {
        float f;
        printf("enter the percentage\n");
        scanf("%f",&f);
        int c=0;
        sll *temp;
        temp=ptr;
        int c1=0;
        while(temp)
        {
            if(f==temp->percentage)
            {
                c1++;
                printf("%d %s %f\n",temp->rollno,temp->name,temp->percentage);
            }
            temp=temp->next;
        }
 if(c1>1)
            goto l;
            else
            {
                while(ptr)
                {
                    if(f==ptr->percentage)
                    {
                        printf("enter the name and percentage\n");
                        scanf("%s %f",ptr->name,&ptr->percentage);
                        return;
                    }
                    ptr=ptr->next;
                }
}
}
 }
