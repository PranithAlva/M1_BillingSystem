#ifndef _OPTIONS_H_
#define _OPTIONS_H_

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void update(double param)
{   
    FILE *ptr;
    double buffer=0;
    ptr = fopen("account","r+");
    if(ptr==NULL)
    {
        printf("Error");
        exit(0);
    }
    fscanf (ptr, "%lf", &buffer );
    param+=buffer;
    fclose(ptr);
    ptr = fopen("account","w");
    char buf[50];
    sprintf(buf,"%f",param);
    fputs(buf,ptr);
    fclose(ptr);
}
int verify(char *param_1)
{
    FILE *ptr;
    ptr = fopen("log.txt","r");
    if(ptr==NULL)
    {
        printf("Error");
        exit(0);
    }
    char buff[20];
    fgets(buff, 20, ptr);
    fclose(ptr);
    for(int i=0;i<strlen(buff);i++)
    {
       if(buff[i]!=param_1[i])
        return 1;
    }
    return 0;
}

void add_goods()
{
    while ( getchar() != '\n' );
    FILE *ptr;
    ptr=fopen("stocks.txt","a+");
    if(ptr==NULL)
    {
        printf("ERROR\n");
        exit(0);
    }
    char goods[20];
    printf("Enter the product name\n");
    fgets(goods,20,stdin);
    char buffer[20];
    while(fgets ( buffer, 20, ptr ) != NULL)
    {
            if(strstr(buffer,goods))
            {
                printf("Product already exists!!!\n");
                fclose(ptr);
                return ;
            }    
    }
    char cost[10];
    fprintf(ptr,"%s",goods);
    printf("Enter the price of %s:=\n",goods);
    fgets(cost,20,stdin);
    fprintf(ptr,"%s",cost);
    printf("Successfully entered!!\n");
    fclose(ptr);
}

void sales()
{
    FILE *ptr;
    ptr = fopen("account","r");
    if(ptr==NULL)
    {
        printf("Error");
        exit(0);
    }
    while ( getchar() != '\n' );
    char buff[20];
    fgets(buff, 20, ptr);
    printf("The total revenue collected is : %s\n",buff);
    fclose(ptr);
}

void password()
{
    while ( getchar() != '\n' );
    FILE *ptr;
    ptr = fopen("log.txt","w");
    if(ptr==NULL)
    {
        printf("Error\n");
        exit(1);
    }
    char new[20];
    printf("Enter new password\n");
    fgets(new,20,stdin);
    fprintf(ptr,"%s",new);
    fclose(ptr);
    printf("Password sucessfully updated!!!\n");
}

#endif