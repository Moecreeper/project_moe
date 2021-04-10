#include "hhh.h"
void fio(data *h)
{
    FILE *fp;
    data *p,*q,*h1;
    data t;
     h1=(data*)malloc(sizeof(data));
    h1->next=NULL;
    fp=fopen("d:\\tushuguan.csv","w");
    if(fp==NULL)
    {
        printf("can not open the file!");
        exit(1);
    }
     p=h->next;
    while(p!=NULL)
    {
       fprintf(fp,"%d,%s,%s,%d\n",p->num,p->name,p->book,p->date);
       p=p->next;
    }
      fclose(fp);
    fp=fopen("d:\\tushuguan.csv","r");
    if(fp==NULL)
    {
        printf("cannot open the file!");
        exit(1);
    }
    q=p=h1;
      fscanf(fp,"%d,%s,%s,%d",&t.num,&t.name,&t.book,&p->date);
    while(!feof(fp))
 {
     p=(data*)malloc(sizeof(data));
     p->next=NULL;
     p->num=t.num;strcpy(p->name,t.name);
     q->next=p;
     q=p;
     fscanf(fp,"%d,%s,%s,%d",&t.num,&t.name,&t.book,&t.date);
 }
    printf("│已完成导出！                                                    │\n");
    printf("│已导出至d:tushuguan.csv                                         │\n");
    printf("│导出数据如下：                                                  │\n");
    output(h1);
    printf("└────────────────────────────────────────────────────────────────┘\n");
    fclose(fp);
}
