#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include "header.h"
#include "func.h"

void bill()
{
    while ( getchar() != '\n' );
    FILE *ptr;
    char str[50];
    ptr = fopen("stocks.txt","r");
    if(ptr==NULL)
    {
        printf("Error");
        exit(0);
    }
    double sum=0;
    int add=1;
    FILE *fptr;
    fptr=fopen("Bill.txt","a+");
    if(fptr==NULL)
    {
        printf("Error");
        exit(0);
    }
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    sprintf(str,"now: %d-%02d-%02d %02d:%02d:%02d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
    fputs(str,fptr);
    while(add){
        char goods[20];
        printf("Enter the product name\n");
        fgets(goods,20,stdin);
        char buffer[20];
        rewind(ptr);
        while(fgets (buffer, 20, ptr ) != NULL)
        {
            if(strstr(buffer,goods))
            {
                char cost[10];
                fgets(cost,10,ptr);
                char copy[20];
                strcpy(copy, buffer);
                copy[strcspn(buffer, "\n")] = 0;
                printf("%s   cost -->  %s",copy,cost);
                sprintf(str,"%s   cost -->  %s",copy,cost);
                fputs(str, fptr);
                sum+=atoi(cost);
            }    
        }
        char c;
        printf("Enter \n0: for bill\n1: add\n ");
        scanf("%d",&add);
        c=getchar();
    }
    double disc,gst;
    int p=sum;
    fclose(ptr);
    printf("%f\n",sum);
    disc=discount(&sum);
    gst=claculate_gst(&sum);
    disc*=p;
    sprintf(str,"Discount:= -%f\n",disc);
    fputs(str, fptr);
    sprintf(str,"GST Added:= +%f\n",gst);
    fputs(str, fptr);
    sprintf(str,"Grand total:=%f\n",sum);
    fputs(str, fptr);
    sprintf(str,"/*------------------------------------*/\n");
    fputs(str, fptr);
    update(sum);
    printf("GST=%f and Discount=%f\n",gst,disc);
    printf("Your grand total is = %f\n",sum);
    printf("Thank for Purchasing!!\n Visit Again\n");
    fclose(fptr);
}

int confirm(char param)
{
    if(param=='n' || param=='N')
        return 0;
    return 1;
}


int main()
{
    char admin_id[20];
    int test=1,count=5;
    
    while(test){
        printf("Enter the admin id\n");
        fgets(admin_id,20,stdin);
        test=verify(admin_id);
   
        if(test==1)
            printf("Wrong credentials try again!!!\n");
        count--;
        if(count==0)
        {
            printf("To many wrong attempts!!!\n");
            exit(0);
        }
    
    }
    int yes=1;
    while(yes){
    int result=0;
    while(!result)
    {
        printf("Enter your choice\n");
        printf("\t1:Add goods\n");
        printf("\t2:Change password\n");
        printf("\t3:Check revenue\n");
        printf("\t4:Pay bill\n");
        scanf("%d",&result);
        result=check(result);
    }

    switch(result)
    {
        case 1:add_goods();
                break;
        case 2:password();
                break;
        case 3:sales();
                break;
        case 4:bill();
                break;
    }
    
    char choice;
    printf("Do you want to continue???\n");
    printf("Enter y for yes / n for no [y/n]");
    scanf("%c",&choice);
    yes=confirm(choice);
    }

    return 0;
}