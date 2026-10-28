#include "array_2d_utils.h"
#include <iostream>
#include <cmath>

using namespace std;

void input_2d(int arr[][MAX_COLS], int rows, int cols){
    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }
}
void print_2d(int arr[][MAX_COLS], int rows, int cols){
    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void sort_ascending_2d(int arr[][MAX_COLS], int rows, int cols, bool row_based ){
    if (row_based==true){
        for (int i=0;i<rows;i++){
            for (int u=0;u<cols-1;u++){
                for (int k=u+1;k<cols;k++){
                if (arr[i][k]<arr[i][u]) swap(arr[i][k],arr[i][u]);
                }
            } 
        }
    }else {
        for (int i=0;i<cols;i++){
            for (int u=0;u<rows-1;u++){
                for (int k=u+1;k<rows;k++){
                    if (arr[u][i]>arr[k][i]) swap(arr[u][i],arr[k][i]);
                }
            }
        }
    }
}

void sort_descending_2d(int arr[][MAX_COLS], int rows, int cols, bool row_based){
    if (row_based==true){
        for (int i=0;i<rows;i++){
            for (int u=0;u<cols-1;u++){
                for (int k=u+1;k<cols;k++){
                if (arr[i][k]>arr[i][u]) swap(arr[i][k],arr[i][u]);
                }
            } 
        }
    }else {
        for (int i=0;i<cols;i++){
            for (int u=0;u<rows-1;u++){
                for (int k=u+1;k<rows;k++){
                    if (arr[u][i]<arr[k][i]) swap(arr[u][i],arr[k][i]);
                }
            }
        }
    }
}

void swap_2d(int arr[][MAX_COLS], int rows, int cols,
             int first_index, int second_index, bool row_based){
    if (row_based==true){
        // hoan vi hang
        for (int i=0;i<cols;i++){
            swap(arr[first_index][i],arr[second_index][i]);
        }
    }else{
        // hoan vi cot
        for (int i=0;i<rows;i++){
            swap(arr[i][first_index],arr[i][second_index]);
        }
    }
}

void transpose_2d(int arr[][MAX_COLS], int rows, int cols){
    int j=0;
    for (int i=0;i<rows;i++){
        for (;j<cols;j++){
            swap(arr[i][j],arr[j][i]);
        }j=i+1;
    }
}
void rotate_2d(int arr[][MAX_COLS], int rows, int cols, int n){
    n=n%4;
    for (int i=1;i<=n;i++){
        transpose_2d(arr,rows,cols);
        reverse_2d(arr,rows,cols,false);
    }

}

void reverse_2d(int arr[][MAX_COLS], int rows, int cols, bool row_based){
    if (row_based==true){
        //dao thu tu cac hang
        for (int i=0;i<rows/2;i++){
            for (int j=0;j<cols;j++){
                swap(arr[i][j],arr[rows-i-1][j]);
            }
        }
    }else{
        // dao thu tu cac cot
        for (int j=0;j<cols/2;j++){
            for (int i=0;i<rows;i++){
                swap(arr[i][j],arr[i][cols-j-1]);
            }
        }
    }
}