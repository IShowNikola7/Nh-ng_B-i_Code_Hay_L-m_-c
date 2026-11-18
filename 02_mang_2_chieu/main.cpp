#include <iostream>

#include "1d_array/array_1d_utils.h"
#include "2d_array/array_2d_utils.h"

using namespace std;


int main(){
    // TODO
    int rows,cols;
    cin>>rows>>cols;
    int arr[MAX_ROWS][MAX_COLS];
    input_2d(arr,rows,cols);
    cout<<"Nhap 1 neu sap theo tung hang tang dan 0 neu muon tung cot rieng biet tang dan";
    int row_based; cin>>row_based;
    sort_ascending_2d(arr,rows,cols,row_based);
    print_2d(arr,rows,cols);
    cout<<"Nhap 1 neu sap theo tung hang giam dan 0 neu muon tung cot giam dan rieng biet";
    cin>>row_based;
    sort_descending_2d(arr,rows,cols,row_based);
    print_2d(arr,rows,cols);
    cout<<"Nhap 1 neu muon doi hang , 0 neu muon doi cot:";
    cin>>row_based;
    int first_index,second_index;
    cout<<"Nhap lan luot 2 index hang/cot muon doi lai cho nhau:";
    cin>>first_index>>second_index;
    swap_2d(arr,rows,cols,first_index,second_index,row_based);
    print_2d(arr,rows,cols);

    cout<<"Ma tran sau khi chuyen vi la:"<<endl;
    transpose_2d(arr,rows,cols);
    print_2d(arr,rows,cols);
    cout<<"Dao thu tu cac hang va cot hang thi nhap 1 cot thi nhap 0:";
    cin>>row_based;
    reverse_2d(arr,rows,cols,row_based);
    print_2d(arr,rows,cols);

    cout<<"Ma tran xoay 90 180 270 do la,nhnap n:";
    int n; cin>>n;
    rotate_2d(arr,rows,cols,n);
    print_2d(arr,rows,cols);
    // END TODO
    return 0;
}