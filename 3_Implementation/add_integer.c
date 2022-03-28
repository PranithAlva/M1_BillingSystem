#include "add_integer.h"

function_status_t add_integers(int param1,int param2,int*result){
    long int sum=param1+param2;
    if(sum>__INT_MAX__)
    return OVERFLOW;
    if(sum<__INT_MAX__)
    return UNDERFLOW;
    return SUCCESS;
}