#include <stdio.h>
#include "header.h"

int main()
{
    FILE* filePointer;
    int score[MAX],count = 0,ts,num;

    
    int sum_score[5]={ 0,0,0,0,0};
    char colors[5] = { RED,YELLOW,BLUE,CYAN,GREEN };

    filePointer = fopen("scores.txt", "r+");

    if (filePointer == NULL)
    {
        printf("scores.txt file failed to open.");
    }
    else
    {

        printf("The file is now opened.\n");
        while (fscanf(filePointer,"%d",&ts) == 1)
        {
            score[count] = ts;
            count++;
            
           // for (int a = 0; a < 5; a++) {
                if (ts > 0 && ts <= 20) {
                    //printf("0-20\n");
                    sum_score[0]++;
                    
                }
                else if (ts > 20 && ts <= 40) {
                    //printf("20-40\n");
                    sum_score[1]++;
                }
                else if (ts > 40 && ts <= 60) {
                    //printf("40-60\n");
                    sum_score[2] ++;
                }
                else if (ts > 60 && ts <= 80) {
                    // printf("60-80\n");
                    sum_score[3] ++;
                }
                else if (ts > 80 && ts <= 100) {
                    //printf("80-100\n");
                    sum_score[4] ++;

                }
            //}
            
        }
       
        printf("%d scores\n", count);
        fclose(filePointer);

        
            //-------------------------------------------------------
            // score sorting start
            sort_score(score,count);
            printf("scores sorted successfully!\n");

            printf("---------------sorted scores list---------------\n");
            print_sorted(score, count);
            printf("---------------End of unsorted scores---------------\n");
            //medium number 
            printf("Medium number is %d\n", score[count / 2]);
            // avrage number
            float x = avg_score(score, count);
            printf("The avrage number is %f\n\n", x);
            printf("------------------------------\n");
            // score sorting end
            //printf("%d", count);

            clearScreen();
            gotoXY(1, 16);
            printf("-------------Histogram of Scores--------------\n");
            
            for (int i = 0; i < 5;i++) {
                gotoXY(i * 2 + 2, 30);
                printf("%4d - %4d  ",i*20,(i+1)*20);
                setBackground(colors[i]);
                for (int j = 1; j <= sum_score[i]; j++) {
                    printf(" ");
                }
                resetColors();
                printf("\n");
            }
/*
            printf("0 - 20\t");
            setBackground(RED);
            //printf("%d \n",les20);
            for (int i = 1; i <= les60; i++) {
                printf(" ");
            }
            resetColors();
            printf("\n");

            printf("20 - 40\t");
            setBackground(YELLOW);
            //printf("%d\n", les40);
            for (int i = 1; i <= les40; i++) {
                printf(" ");
            }
            resetColors();
            printf("\n");

            printf("40 - 60\t");
            setBackground(BLUE);
            //printf("%d  \n", les60);
            for (int i=1; i <= les60; i++) {
                printf(" ");
            }
            resetColors();
            printf("\n");

            printf("60 - 80\t");
            setBackground(CYAN);
            //printf("%d  \n", les80);
            for (int i = 1; i <= les80; i++) {
                printf(" ");
            }
            resetColors();
            printf("\n");

            printf("80 -100 ");
            setBackground(GREEN);
            //printf("%d    \n", les100);
            for (int i = 1; i <= les100; i++) {
                printf(" ");
            }
            resetColors();
            printf("\n");
            */

    }
    return 0;
}

