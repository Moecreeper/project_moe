#include "hhh.h"
void watt(data *h,data *t)
{
    data *r;
    char (*tt)[20];
    tt=(char (*)[20])calloc(count,sizeof (char[20]));
    int flag=0,i,j,*ttt;
    ttt=(int *)calloc(count,sizeof(int));
    r=h->next;
    while(r!=NULL)
    {
        if(strcmp(r->name,t->name)==0)
        {
            j=0;
                for(i=0;i<flag;i++)
                    if(strcmp(tt[i],r->book)==0)
                    {
                        j++;
                        break;
                    }

            if(j==0)
            {
                strcpy(tt[flag],r->book);
                ttt[flag]=r->date;
                flag++;
            }

        }
        r=r->next;
    }
    if(flag==0)
        printf("δ�ҵ�%s�Ľ��ļ�¼��\n",t->name);
    else
    {
        printf("%s ��",t->name);
        for(i=0;i<flag;i++)
            printf("�� %d ���Ĺ���%s����",ttt[i],tt[i]);
        printf("����%d����\n",flag);
    }
}
