#include<stdio.h>
#include<curses.h>
#include<stdlib.h>
int main()
{
    

float a = 3.0;
float b = 2.5;
float c = 1.0;
float d = -7.0;
float l = 5.0;
float m = 4.0;
float n = -8.0;
float k = 9.0;
float p = -3.0;
float q = -2.3;
float r = 1.7;
float s = 6.0;


float D, x, y, z;
printf("PROGRAM TO SOLVE LINEAR EQUATIONS\n");
printf("The equations are of the form: \n ax+by+cz+d=0 \n lx+my+nz+k=0 \n px+qy+rz+s=0\n");
printf("The equations are: \n");
printf("  %.2f*x + %.2f*y + %.2f*z + %.2f = 0 \n",a,b,c,d);
printf("  %.2f*x + %.2f*y + %.2f*z + %.2f = 0 \n",l,m,n,k);
printf("  %.2f*x + %.2f*y + %.2f*z + %.2f = 0 \n",p,q,r,s);

 D = (a*m*r+b*p*n+c*l*q)-(a*n*q+b*l*r+c*m*p);
 x = ((b*r*k+c*m*s+d*n*q)-(b*n*s+c*q*k+d*m*r))/D;
 y = ((a*n*s+c*p*k+d*l*r)-(a*r*k+c*l*s+d*n*p))/D;
 z = ((a*q*k+b*l*s+d*m*p)-(a*m*s+b*p*k+d*l*q))/D;

printf("The solutions to the above three equations are : \n");
printf(" x = %5.2f \n y = %5.2f \n z = %5.2f \n",x,y,z);

return 0;
}