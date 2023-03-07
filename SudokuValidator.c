#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main(){
    int tab[9][9];
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){

            scanf("%d", &tab[i][j]);
        }
    }

    for(int i=0; i<9; i++){
        int ile[9] = {0,0,0,0,0,0,0,0,0};
        for(int j=0; j<9; j++){
            ile[tab[i][j]-1]++;
        }
        for(int j=0; j<9; j++){
            if(ile[j]==0){
                printf("false");
                return 0;
            } 
        } 

    } 

    for(int i=0; i<9; i++){
        int ile[9] = {0,0,0,0,0,0,0,0,0};
        for(int j=0; j<9; j++){
            ile[tab[j][i]-1]++;
        }
        for(int j=0; j<9; j++){
            if(ile[j]==0){
                printf("false");
                 return 0;
            } 
        } 
    }
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            int ile[9] = {0,0,0,0,0,0,0,0,0};
            ile[tab[0+(i*3)][0+(j*3)]-1]++; 
            ile[tab[0+(i*3)][1+(j*3)]-1]++; 
            ile[tab[0+(i*3)][2+(j*3)]-1]++; 
            ile[tab[1+(i*3)][0+(j*3)]-1]++; 
            ile[tab[1+(i*3)][1+(j*3)]-1]++; 
            ile[tab[1+(i*3)][2+(j*3)]-1]++; 
            ile[tab[2+(i*3)][0+(j*3)]-1]++; 
            ile[tab[2+(i*3)][1+(j*3)]-1]++; 
            ile[tab[2+(i*3)][2+(j*3)]-1]++; 
            for(int h=0; h<9; h++){
                if(ile[h]==0){
                    printf("false");
                    return 0;
                }
            }
        }
    }
    
    printf("true");
    return 0;    
}
