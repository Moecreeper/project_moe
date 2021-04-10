#include "hhh.h"
void output(data *p)
{
    data *f;
    f=p->next;
    while(f!=NULL)
    {
        printf("%d  %s  %s %d\n",f->num,f->name,f->book,f->date);
        f=f->next;
    }
}
