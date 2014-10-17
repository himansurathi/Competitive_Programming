#include<stdio.h>
int main()
    {
    int T,x1,x2,y1,y2,xm,ym,p,q,r;
    scanf("%d",&T);
    while(T--)
        {
          scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&xm,&ym);
          p=(x1*y2-y1*x2)*(ym*x1-y1*xm);
          q=(x2*y1-y2*x1)*(ym*x2-y2*xm);
          r=(y2*x1-x2*y1)*((y1-y2)*xm+(x2-x1)*ym+(y2*x1-x2*y1));
          if(p>0 && q>0 && r<0)
                     printf("NO\n");
          else if(ym*x1==y1*xm || ym*x2==y2*xm ||(x1*y2==y1*x2 && (xm>=x1 && ym>=y1)||(xm>=x2 && ym>=y2)))
                     printf("NO\n");
          else
                     printf("YES\n");
        }
                     return 0;
}
