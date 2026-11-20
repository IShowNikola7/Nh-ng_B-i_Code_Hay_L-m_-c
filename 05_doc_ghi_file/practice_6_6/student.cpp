#include <student.h>
#include <iostream>
using namespace std;
#include <fstream>

double getGPA(double diem[]){
    double tong=0;
    int n=0;
    return tong;
}

void readFileSingle(Student a){
    ifstream fin("name");
    if (!fin.is_open()){
        cout<<"Loi khong the doc file "; return;
    }
    fin.getline(a.name,101,'|');
    fin>>a.id;


    fin.close();
}