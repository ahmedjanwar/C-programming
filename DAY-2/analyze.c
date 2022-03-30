#include "header.h"
#include <stdio.h>
void sort_score(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        // Last i elements are already in place
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        
    }

}

void print_sorted(int arr[], int n) {
    for (int k = 0; k < n; k++) {
        printf("%6d", arr[k]);
        if ((k + 1) % 3 == 0)
            printf("\n");
    }
    printf("\n\n");
}

void unsort_score(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d- %d\n", i + 1, arr[i]);
    }

}

double avg_score(int arr[], int n) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        return sum / n;
    }
}

