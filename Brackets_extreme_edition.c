#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    char expression[2049];
    scanf("%s", expression);
    int okraglak = 0;
    int kwadracik = 0;
    int wasiki = 0;
    
    for (int i = 0; i < strlen(expression); i++){
        char currChar = expression[i];
        if (currChar == '('){
            okraglak++;
        }
        if (currChar == '['){
            kwadracik++;
        }
        if (currChar == '{'){
            wasiki++;
        }        
        if (currChar == ')'){
            okraglak--;
        }
        if (currChar == ']'){
            kwadracik--;
        }
        if (currChar == '}'){
            wasiki--;
        }
        
        if (okraglak < 0 || kwadracik < 0 || wasiki < 0){
            break;
        }
    }
    // Write an action using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    
    if (okraglak==0 && kwadracik==0 && wasiki==0){
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
