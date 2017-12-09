/*reading of real numbers*/
#include<stdio.h>
main()
{
    float x,y;
    double p,q;
    printf("values of x and y:");
    scanf("%f %e",&x,&y);
    printf("\n");
    printf("x=%f\ny=%f\n\n",x,y);
    printf("values of p and q:");
    scanf("%lf %lf",&p,&q);
    printf("\n\np=%.12lf\np=%.12e",p,q);

}
