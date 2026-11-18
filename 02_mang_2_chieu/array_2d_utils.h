#ifndef ARRAY_2D_UTILS_H
#define ARRAY_2D_UTILS_H

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

// TODO
void input_2d(int arr[][MAX_COLS],int rows,int cols);
void print_2d(int arr[][MAX_COLS],int rows,int cols);

void swap(int &a,int &b);
void sort_ascending_2d(int arr[][MAX_COLS], int rows, int cols, bool row_based = true);
void sort_descending_2d(int arr[][MAX_COLS], int rows, int cols, bool row_based = true);
void swap_2d(int arr[][MAX_COLS], int rows, int cols,
             int first_index, int second_index, bool row_based = true);
void transpose_2d(int arr[][MAX_COLS], int rows, int cols);
void rotate_2d(int arr[][MAX_COLS], int rows, int cols, int n);
void reverse_2d(int arr[][MAX_COLS], int rows, int cols, bool row_based = true);


// END TODO

#endif