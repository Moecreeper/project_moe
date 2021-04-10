#include "hhh.h"
void inc(data *H,data *x)
{
    int flag=1;
    data *pre,*p,*q;
    pre=H;
    p=pre->next;
    while(p!=NULL)
    {
        if(p->num>=x->num)
        {
            q=(data*)malloc(sizeof(data));
            q->num=x->num;
            strcpy(q->name,x->name);
            strcpy(q->book,x->book);
            q->date=x->date;
            q->next=p;
            pre->next=q;
            flag=0;
            break;
        }
        else
        {
           pre=p;
            p=p->next;
        }
    }
    if(flag==1)
        {
            q=(data*)malloc(sizeof(data));
            q->num=x->num;
            strcpy(q->name,x->name);
            strcpy(q->book,x->book);
            q->date=x->date;
            q->next=p;
            pre->next=q;
        }
}
