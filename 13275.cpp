#include<stdio.h>

int main()
{
    int T,d,m,y,qy,i,j;
    scanf("%d",&T);

    for(i=1;i<=T;i++)
    {
        scanf("%d %d %d %d",&d,&m,&y,&qy);
        int count=0;

        if(m==2 && d==29)
        {

           for(j=y+1;j<=qy;j++)
        {

             if(j%4==0 && j%100!=0)
                count++;
             if(j%400==0)
                count++;


        }
                printf("Case %d: %d\n",i,count);
        }

        else
                printf("Case %d: %d\n",i,(qy-y));

    }
    return 0;
}
