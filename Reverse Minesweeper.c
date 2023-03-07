#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>


int main()
{
    int h;
    int w;
    scanf("%d", &w);
    scanf("%d", &h);
    int tab[30][30];
    char line[30][30];
    
    for(int i=0; i<30; i++){
        for(int j=0; j<30; j++){
            tab[i][j] = 0;
        }
    }
    
    for(int i=0; i<h; i++){
        scanf("%s", line[i]); 
    }


    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            if(line[i][j]=='x'){
                tab[i-1][j]++;
                tab[i][j-1]++;
                tab[i+1][j]++;
                tab[i][j+1]++;
                tab[i-1][j-1]++;
                tab[i+1][j-1]++;
                tab[i+1][j+1]++;
                tab[i-1][j+1]++;
            }
        }
    }
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            if(tab[i][j]==0 || line[i][j]=='x'){
                printf(".");
            }    
            else{
                printf("%d",tab[i][j]);
            }    
        }
        printf("\n");
    }
    
    return 0;    
}
