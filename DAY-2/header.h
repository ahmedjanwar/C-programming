#pragma once
#define MAX 50
// this project has now 3 user defined functions
enum COLORS {RED = 31, GREEN, YELLOW, BLUE, MAGENTA, CYAN};

void sort_score(int arr[], int n);
void unsort_score(int arr[], int n);
void print_sorted(int arr[], int n);
double avg_score(int arr[], int n);

void resetColors(void);
void setForeground(int color);
void setBackground(int color);
void clearScreen(void);
void gotoXY(int row, int col);
