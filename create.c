#include "hhh.h"
void creat(data *H)
{
    int w,flag;
    data *pre,*p,*q;

    char nn[10],mm[20];
while(scanf("%d",&w)!=EOF&&w!=0)
    {
        flag=1;
        scanf("%s%s",nn,mm);
        count++;
        pre=H;
        p=pre->next;
     while(p!=NULL)
    {
        if(p->num>=w)
        {
            q=(data*)malloc(sizeof(data));
            q->num=w;
            strcpy(q->name,nn);
            strcpy(q->book,mm);
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
        if(flag==1)
        {
            q=(data*)malloc(sizeof(data));
            q->num=w;
            strcpy(q->name,nn);
            strcpy(q->book,mm);
            q->next=p;
            pre->next=q;
        }
    }
}
}
