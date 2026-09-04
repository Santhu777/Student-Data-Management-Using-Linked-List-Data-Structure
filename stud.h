#include<stdlib.h>
typedef struct student
{
    int rollno;
    char name[20];
    float percentage;
    struct student *next;
}sll;
void stud_add(sll **);
void stud_show(sll *);
void stud_del(sll **);
void stud_save(sll *);
void delete_all(sll **);
void stud_rev(sll **);
void stud_mod(sll *);
