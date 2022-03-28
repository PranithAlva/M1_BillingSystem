#ifndef _ADD_INTEGER_H_

#define _ADD_INTEGER_H 
typedef enum function_status_t
{
    SUCCESS,
    UNDERFLOW,
    OVERFLOW

}function_status_t;

function_status_t add_integer(int param1,int param2,int *result);

#endif