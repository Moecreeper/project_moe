#include "hhh.h"
int ser(data *p,data *n)
{
    data *f;
    f=p->next;
    while(f->next!=NULL&&f->num!=n->num)
    {
        f=f->next;
    }
    if(f->num==n->num)
    {
        printf("%d  %s  %s  %d\n",f->num,f->name,f->book,f->date);
        return 1;
    }
    else return 0;
}
