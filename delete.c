#include "hhh.h"
int del(data *p,data *w,int j)
{
    data *f,*g,*h;
    int num=0;
    f=p->next;
    g=p;
    if(j==1)
    {
        while(f!=NULL&&f->num!=w->num)
        {
            printf("\n");
            g=f;
            f=f->next;
        }
        if(f!=NULL)
        {
            g->next=f->next;
            free(f);
            count--;
            return -1;
        }
        else
            return 0;
    }
    if(j==2)
    {
        while(f!=NULL)
        {
            if(strcmp(f->name,w->name)==0)
            {
                g->next=f->next;
                h=f;
                f=f->next;
                count--;
                num++;
            }
            else
            {
                g=f;
                f=f->next;
            }
        }
        return num;
    }
    if(j==3)
    {
        while(f!=NULL)
        {
            if(strcmp(f->book,w->book)==0)
            {
                g->next=f->next;
                h=f;
                f=f->next;
                count--;
                num++;
            }
            else
            {
                g=f;
                f=f->next;
            }
        }
        return num;
    }
    return 0;
}
