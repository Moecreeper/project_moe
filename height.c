#include "hhh.h"
void hei(data *h)
{
    char (*t)[20],s[20];
    data *p;
    p=h;
    int i,j,flag,*tt,in=0;
    t=(char (*)[20])calloc(count,sizeof (char[20]));
    tt=(int *)calloc(count,sizeof(int));
    for(i=0; i<count; i++)
    {
        p=p->next;
        flag=1;
        for(j=0; j<count; j++)
        {
            if(strcmp(t[j],p->book)==0)
            {
                tt[j]++;
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            strcpy(t[in],p->book);
            tt[in]++;
            in++;
        }
    }
    for(i=0; i<in; i++)
        for(j=i; j<in; j++)
        {
            if(tt[j]>tt[i])
            {
                flag=tt[i];
                tt[i]=tt[j];
                tt[j]=flag;
                strcpy(s,t[i]);
                strcpy(t[i],t[j]);
                strcpy(t[j],s);
            }
        }
    if(in>3)
    {
        for(i=0; i<3; i++)
        {
            if(tt[i]!=0)
                printf("�鼮��%s����%3d�˴ν���,�ǽ��İ��%d����\n",t[i],tt[i],i+1);
        }
        for(; i<=in; i++)
        {
            if(tt[i]!=0)
                printf("�鼮��%s����%3d�˴ν��ġ�\n",t[i],tt[i]);
        }
    }
    else
    for(i=0; i<=in; i++)
        {
            if(tt[i]!=0)
                printf("�鼮��%s����%3d�˴ν��ġ�\n",t[i],tt[i]);
        }
        free(t);
        free(tt);
}
