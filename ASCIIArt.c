#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/*
A B C D E F G H I J K L M N O P R S T U W Z [\]^_'abcdefghijklmnoprstuwz
65                                       122      97                   122
*/
int main()
{
    int L;
    scanf("%d", &L); fgetc(stdin);
    int H;
    scanf("%d", &H); fgetc(stdin);
    char T[257]; 
    fgets(T,257,stdin);//scanf("%[^\n]", T); fgetc(stdin);
    int dlugosc=strlen(T);
    char litera[dlugosc];
    
    for (int i=0; i<dlugosc ; i++){
        if (T[i] < 65 || T[i] >122)//A=65....z=122
            litera[i] = 26;//caps
        else if (T[i] < 91)
            litera[i] = (T[i]-65); 
        else
            litera[i] = (T[i]-97);//97=a 

        }
    for (int i = 0; i < H; i++) {
        char ROW[1025];
        scanf("%[^\n]", ROW); fgetc(stdin);
        
        for (int j=0 ; j < dlugosc-1; j++ ){
            for (int k = 0; k < L; k++) {
               printf("%c",ROW[litera[j]*L+k]);
            }
        }
        printf("\n");
    }
    
    
    return 0;
}
