#ifndef _FUNCTIONS_H_
#define _FUNCTIONS_H_

#include<stdio.h>
#include<stdlib.h>

double discount(double *param) 
{ 
 if(*param<100)
    return 0;
 if(*param>=100 && *param<500)
    {
        *param=*param-((*param)*0.1);
        return 0.1;
    }
if(*param>=500 && *param<1000)
    {
        *param=*param-(*param)*0.2;
        return 0.2;
    }
if(*param>=1000 && *param<1500)
    {
        *param=*param-(*param)*0.32;
        return 0.32;
    }
*param=*param-(*param)*0.45;
return 0.45;
}

double claculate_gst(double *param)
{
    double sum=*param,gst=0;
    gst=sum+100>=(0.2*sum)+sum?(0.2*sum):100;
    sum=sum+100<=(0.2*sum)+sum?(100+sum):(sum*0.2)+sum;
    *param=sum;
    return gst;
}

int check(int param)
{
    if(param==1)
        return 1;
    if(param==2)
        return 2;
    if(param==3)
        return 3;
    if(param==4)
        return 4;
    return 0;

}


#endif