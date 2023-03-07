#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

bool tab[26][26];
char co[26][26];
int main(){
    for (int i=0;i<26;i++){
        for(int j=0;j<26;j++){
            tab[i][j]=false;
        }
    }
    int n;
    scanf("%d",&n);
    int l;
    scanf("%d",&l);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%s",&co[i][j]);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(co[i][j]=='C'){
                for(int h=i-l+1; h<i+l; h++){
                    for(int g=j-l+1; g<j+l; g++){
                        tab[h][g] = true;
                    }
                }
            }
        }
    }
    int wynik = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(tab[i][j]==0) wynik++;
        }
    }
    printf("%d",wynik);
    return 0;
}
