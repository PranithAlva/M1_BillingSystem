#include <stdio.h>
#include "unity.h"
#include "header.h"

void setUp(void)
{

}
 
void tearDown(void)
{

}

void automated_1()
{
    double sum=0;
    TEST_ASSERT_EQUAL(0,discount(&sum));
    sum=100.01;
    TEST_ASSERT_EQUAL(0.1,discount(&sum));
    
}

void automated_2()
{
    double sum=500.89;
    TEST_ASSERT_EQUAL(0.2,discount(&sum));
    sum=1000.25;
    TEST_ASSERT_EQUAL(0.32,discount(&sum));
    sum=2000000.99;
    TEST_ASSERT_EQUAL(0.45,discount(&sum));
}

void automated_3()
{
    double gst=1000;
    TEST_ASSERT_EQUAL(100,claculate_gst(&gst));
    gst=50000.90;
    TEST_ASSERT_EQUAL(100,claculate_gst(&gst));
    gst=67900.999;
    TEST_ASSERT_EQUAL(100,claculate_gst(&gst));
}

void automated_4()
{
    double gst=100;
    TEST_ASSERT_EQUAL(20,claculate_gst(&gst));
    gst=200;
    TEST_ASSERT_EQUAL(40,claculate_gst(&gst));
    gst=124;
    TEST_ASSERT_EQUAL(24.8,claculate_gst(&gst));
    
}

void automated_5()
{
    TEST_ASSERT_EQUAL(1,check(1));
    TEST_ASSERT_EQUAL(2,check(2));
    TEST_ASSERT_EQUAL(3,check(3));
    TEST_ASSERT_EQUAL(4,check(4));
}

void automated_6()
{
    TEST_ASSERT_EQUAL(0,check(0));
    TEST_ASSERT_EQUAL(0,check(227));
    TEST_ASSERT_EQUAL(0,check(29));
    TEST_ASSERT_EQUAL(0,check(1000));
}
void automated_7()
{
    TEST_ASSERT_EQUAL(0,check(-10));
    TEST_ASSERT_EQUAL(0,check(-1));
}

int main()
{
   UnityBegin(NULL);
   RUN_TEST(automated_1);
   RUN_TEST(automated_2);
   RUN_TEST(automated_3);
   RUN_TEST(automated_4);
   RUN_TEST(automated_5);
   RUN_TEST(automated_6);
   RUN_TEST(automated_7);
   return(UnityEnd()); 
   
}


