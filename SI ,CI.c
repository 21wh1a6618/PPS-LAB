#include<stdio.h>
#include<math.h> 
void main ()
{ float p,t,r,SI,CI;
 printf("enter 3 numbers");
 scanf("%f %f %f",&p,&t,&r);
 SI = p*t*r/100;
 CI = (p* pow(1+r/100,t)-p);
 
 printf("simple interest is %f",SI);
 printf("compound interest is %f",CI);
}
 
