#include "sinhvien.h"
#include <iostream>
using namespace std;

int main(){
    int n=0;
    Student a[100];
    readFile(a,n);
    std::cout<<"DANH SACH SAU KHI DA XUAT LA "<<endl;
    VietHoaTenList(a,n);
    writeFile(a,n);
    std::cout<<"Danh SANH SAU KHI DUOC SAP XEP LA "<<endl;



    return 0;
}