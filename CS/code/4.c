#include "stdio.h"

int main(int argc, char const *argv[])
{
    int k=2;
    while(k<7) 
    {
        if(k%2)
        {
            k=k+3;
            printf("k=%d \n",k);
            continue;
        }
        k=k+1;
        printf ("k=%d\n",k);   
    }
    return 0;
}
