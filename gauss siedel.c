#include<stdio.h>
#include<math.h>
#define F(x1,x2,x3) ((1-3*x2+5*x3)/12)
#define G(x1,x2,x3) ((28-x1-3*x3)/5)
#define H(x1,x2,x3) ((76-3*x1-7*x2)/13)

void main()
{
    float x0,y0,z0,x1,y1,z1,ex,ey,ez;
    int n,i=1;
    printf("enter the value of iteration: ");
    scanf("%d",&n);
    printf("\nenter the initial guess for x: ");
    scanf("%f",&x0);
    printf("\nenter the initial guess for y: ");
    scanf("%f",&y0);
    printf("\nenter the initial guess for z: ");
    scanf("%f",&z0);
    printf("\nITERATION\t X1\t\t  X2\t\t  X3\t\t ERROR X\t ERROR Y\t ERROR Z");
    do
    {
        x1=F(x0,y0,z0);

        y1=G(x1,y0,z0);

        z1=H(x1,y1,z0);

        ex=fabs(((x1-x0)/x1)*100);
        //printf("%f",ex);
        ey=fabs(((y1-y0)/y1)*100);
       // printf("\t%f",ey);
        ez=fabs(((z1-z0)/z1)*100);
        //printf("\t%f",ez);

        printf("\n%d\t\t %f\t %f\t %f\t %f\t %f\t %f",i,x1,y1,z1,ex,ey,ez);


        i++;

        x0=x1;
        y0=y1;
        z0=z1;


    }while(i<6);


    //printf("\n\nAPPROXIMATE ROOT:x1:%f\t  y1:%f\t  z1:%f",x1,y1,z1);
}

