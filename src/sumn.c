#include "sumn.h"
#include "assert.h"
#include<stdio.h>

int sumn (int n)
{

    if (n>1)
        return (n*2-1) + sumn(n-1);
    else
        return 1;
    
}