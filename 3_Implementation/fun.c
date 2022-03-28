#include<stdio.h>
#include<unity.h>

int add_integer(int param_1,int param_2)
{
    int sum=param_1+param_2;
    return sum;

}

void test_add_integer()
{
    /*
    if(0==add_integer(0,0))
    printf("Add function works!!!");
    else
    printf("Add function doesnt works");
    */
   TEST_ASSERT_EQUAL(0,add_integer(0,0));

}
/*
int main()
{
    test_add_integer();
    return 0;
}*/