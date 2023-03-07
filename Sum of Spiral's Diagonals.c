#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
          1+13\           /4+14...
           s    1       4..  (s + (n-1)) 
                  13 14
                  16 15
                10      7
(s (s .. 10+16/         \7+15  (s + (n-1)*2)
n=dim-1
s + (s + (n-1)) + (s + (n-1)*2) + (s + (n-1)*3) = 4*s + (n - 1)*6

 **/

int main()
{
    int n;
    scanf("%d",&n);

    int a=1;//LG==1
    long int b=0;
    while(n-1>0){
        b +=4*a+(n-1) * 6;
        a +=4*(n-1);//1+4(n-1) 1+12=13
        n-=2;
    }
    if(n-1==0){//srodek
        b=b+a;
    }

    printf("%ld\n",b);

    return 0;
}
