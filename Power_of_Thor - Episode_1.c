#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/

int main()
{
    // the X position of the light of power
    int light_x;
    // the Y position of the light of power
    int light_y;
    // Thor's starting X position
    int initial_tx;
    // Thor's starting Y position
    int initial_ty;
    //int odlegloscx,odlegloscy;//odleglosc thora od swiatla
    scanf("%d%d%d%d", &light_x, &light_y, &initial_tx, &initial_ty);
    /*
    odlegloscx=sqrt(abs(pow(light_x,2)-pow(initial_tx,2)));
    odlegloscy=sqrt(abs(pow(light_y,2)-pow(initial_ty,2)));
    int tempx=0;
    int tempy=0;
    */
    int rozx = light_x - initial_tx;
    int rozy = initial_ty - light_y ;
    // game loop
    while (1) {
        //tempx=1600;//max odleglosc
        //tempy=324;
        int remaining_turns;
        scanf("%d", &remaining_turns);
        char kierunek='0';
/*        if(tempx>odlegloscx&&tempy>odlegloscy){
            tempx=odlegloscx;
            tempy=odlegloscy;
            printf("S\n");
            if(tempx==odlegloscx&&tempy<odlegloscy){
                printf("E\n");
            }
            else if(tempx==odlegloscx&&tempy>odlegloscy){
                printf("W\n");
            }
            else if(tempx<odlegloscx&&tempy==odlegloscy){
                printf("N\n");
            }            
            else if(tempx>odlegloscx&&tempy==odlegloscy){
                printf("S\n");
            }//
            else if(tempx>odlegloscx&&tempy>odlegloscy){
                printf("E\n");
            }
            else if(tempx<odlegloscx&&tempy<odlegloscy){
                printf("E\n");
            }
            else if(tempx<odlegloscx&&tempy>odlegloscy){
                printf("N\n");
            }            
            else if(tempx>odlegloscx&&tempy<odlegloscy){
                printf("S");
            }
*/

        if(rozx ==0 || rozy ==0)
        {
            if(rozx>0){
                while(rozx>0)
                {
                    printf("E\n");
                    rozx--;
                }
            }
            else{ 
                while(rozx<0)
                {
                    printf("W\n");
                    rozx++;
                }
            }
            
            if(rozy<0){
                while(rozy<0)
                {
                    printf("S\n");
                    rozy++;
                }
            }
            else{ 
                while(rozy>0)
                {
                    printf("N\n");
                    rozy--;
                }
            }
        }
        else{ 
            if(rozx>0 && rozy>0) 
            {
                while(rozx!=0 && rozy!=0)
                {
                    printf("NE\n");
                    rozx--;
                    rozy--;
                }
                while(rozx>0)
                {
                    printf("E\n");
                    rozx--;
                }
                while(rozy>0)
                {
                    printf("N\n");
                    rozy--;
                }
            }
            if(rozx>0 && rozy<0)
            {
                while(rozx!=0 && rozy!=0)
                {
                    printf("SE\n");
                    rozx--;
                    rozy++;
                }
                while(rozx>0)
                {
                    printf("E\n");
                    rozx--;
                }
                while(rozy<0)
                {
                    printf("S\n");
                    rozy++;
                }
            }
            if(rozx<0 && rozy<0) 
            {
                while(rozx!=0 && rozy!=0)
                {
                    printf("SW\n");
                    rozx++;
                    rozy++;
                }
                while(rozx<0)
                {
                    printf("W\n");
                    rozx++;
                }
                while(rozy<0)
                {
                    printf("S\n");
                    rozy++;
                }
            }
            if(rozx<0 && rozy>0) 
            {
                while(rozx!=0 && rozy!=0)
                {
                    printf("NW\n");
                    rozx++;
                    rozy--;
                }
                while(rozx<0)
                {
                    printf("W\n");
                    rozx++;
                }
                while(rozy>0)
                {
                    printf("N\n");
                    rozy--;
                }
            }
            
            
        }
 }
    return 0; 
}
   
