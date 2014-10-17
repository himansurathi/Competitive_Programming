#include<stdio.h>
int main()
{
    int T,r,p1,p2,p3,q2,q1,q3,x1,x2,x3,y1,y2,y3;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&r);
        scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
        p1=x2-x1;
        p2=x3-x2;
        p3=x3-x1;
        q1=y2-y1;
        q2=y3-y2;
        q3=y3-y1;
        if(((p1*p1+q1*q1<=r*r)&&(p2*p2+q2*q2<=r*r))||((p1*p1+q1*q1<=r*r)&&(p3*p3+q3*q3<=r*r))||((p2*p2+q2*q2<=r*r)&&(p3*p3+q3*q3<=r*r)))
           printf("yes\n");
        else
            printf("no\n");
    }
    return 0;

}
