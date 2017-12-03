#include <stdio.h>
#include <math.h>
int main() {
    double h,area,a,b,c,d,s,t,x, triangleArea;
    int test,cs=1;
   scanf("%d",&test);
    while(test--) {
        scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
        x = fabs(a - c);
        s = 0.5*(x+b+d);
        triangleArea = sqrt(s*(s-x)*(s-b)*(s-d));
        h = (triangleArea*2)/x;
        t=(0.5*(a+c)*h);
        printf("Case %d: %.10lf\n",cs++,t);
    }

    return 0;
}
