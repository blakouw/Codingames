#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <limits.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int compare(const void* a, const void* b){
    int a_ = *(int*)a;
    int b_ = *(int*)b;
    if(a_ < b_){
         return -1;
    }
    else if(a_ == b_){
        return 0;
    } 
    else{
        return 1;
    } 
}

int main()
{
    int N;
    scanf("%d", &N);
    int* arr = malloc(N * sizeof(int));


    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    qsort(arr, N, sizeof(int), compare);
    int smallestdiff = INT_MAX;
    int actualdiff = 0;
    for(int i = 0; i < N - 1; ++i){
        actualdiff = arr[i + 1] - arr[i];
        if(actualdiff < smallestdiff) smallestdiff = actualdiff;
    }

    printf("%d", smallestdiff);

    free(arr);
    return 0;
}
