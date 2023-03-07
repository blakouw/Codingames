#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int N;
/**
        f..
        .f.
        ..f
        .f.
        f.f
        fff
        ...

        0000->1111->2222 ...
 **/
int sumacja(int * start, int * end)

{

    int total = 0;     

    while (start < end)     

    {        

        total += *start;    

        start++;            

    }      

    return total;

}
int ileWiader(char *line[256]){
    int wiadra[N];
    for(int i=0;i<N;i++){
        wiadra[i]=0;
    }
    for (int i = 0; i < N; i++){
        for(int j=0;j<strlen(*line);j++){//przejscie po otrzymanym "stringu"
            if(*line[j]!='.'){
                wiadra[i]++;
                j+=2;//iteracja zwiekszona do 3 bo wiadro starcza na 3 pola
            }
        }
    }
    return *wiadra;
}
int main()
{

//    int hCount;
    scanf("%d", &N); fgetc(stdin);
    char line[256];
    for (int i = 0; i < N; i++) {

        scanf("%[^\n]", line); fgetc(stdin);

    }
    for (int i = 0; i < N; i++) {
        printf("%d\n",ileWiader(line));
    }
    return 0;
}
