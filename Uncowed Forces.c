#include<stdio.h>
int main()
{
    int  m1, m2, m3, m4, m5;
    int w1, w2, w3, w4, w5;
    int hs,hu,m,w,score;
    scanf("%d %d %d %d %d",&m1, &m2, &m3, &m4, &m5);
    scanf("%d %d %d %d %d",&w1, &w2, &w3, &w4, &w5);
    scanf("%d %d",&hs,&hu);
    if(0<m1, m2, m3, m4, m5<=119){
              m=m5;
    }
    if(0<=w1, w2, w3, w4, w5<=10){
        w=w1+w2+w3+w4+w5;
    }
    if(0<=hs,hu<=20){
        score=((250-m)*30)-50*w+hs*100-hu*50;
        printf("%d\n",score);
    }


}
