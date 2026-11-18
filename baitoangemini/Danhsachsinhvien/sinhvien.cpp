#include "sinhvien.h"
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

void inputBirthday(Student &a){
    cout<<"Hay nhap lan luot ngay / thang / namsinh"<<endl;
    cin>>a.ngaysinh.day>>a.ngaysinh.month>>a.ngaysinh.year;
}

void inputStudent(Student &a){
    cout<<"Hay nhap ten :"<<endl;
    cin.getline(a.name,101,'\n');
    cout<<"Hay nhap id:"<<endl;
    cin>>a.id;
    cout<<"Hay nhap ngay sinh"<<endl;
    inputBirthday(a);
    cin.ignore();
}

void printStudent(Student a){
    cout<<"Ho va ten : "<<a.name<<endl;
    cout<<"Ma so sinh vien : "<<a.id<<endl;
    cout<<"Ngay sinh cua sinh vien : ";
    printBirthday(a);
}

void printBirthday(Student a){
    cout<<a.ngaysinh.day<<" "<<a.ngaysinh.month<<" "<<a.ngaysinh.year;
}

void inputList(Student a[],int &n){
    cout<<"Hay nhap so luong sinh vien :"<<endl;
    cin>>n;
    cin.ignore();
    for (int i=0;i<n;i++){
        inputStudent(a[i]);
    }
}
void printList(Student a[],int n){
    for (int i=0;i<n;i++){
        printStudent(a[i]);
        cout<<endl;
    }
}
void readFile(Student a[],int &n){
    ifstream fin("input.txt");
    if (!fin.is_open()){
        cout<<"Khong doc duoc file"<<endl;
        return;
    } 
    fin>>n;
    fin.ignore();
    for (int i=0;i<n;i++){
        fin.getline(a[i].name,101,'\n');
        fin>>a[i].id>>a[i].ngaysinh.day>>a[i].ngaysinh.month>>a[i].ngaysinh.year;
        fin.ignore();
    }
    fin.close();
    cout<<"Da đọc xong dữ liệu từ file";
}
void writeFile(Student a[],int n){
    ofstream fout("Danhsachsinhvien.txt");
    if (!fout.is_open()){
        cout<<"Khong tạo được file "<<endl;
        return;
    }
    for (int i=0;i<n;i++){
        fout<<a[i].name<<endl;
        fout<<a[i].id<<endl;
        fout<<a[i].ngaysinh.day<<" "<<a[i].ngaysinh.month<<" "<<a[i].ngaysinh.year<<endl;
    }
    fout.close();
    cout<<"Da ghi danh sach vao Danhsachsinhvien.txt"<<endl;
}

void VietHoaTen(Student a){
    char *ptr=strtok(a.name," ");
    while (ptr!=NULL){
        cout<<ptr<<endl;
    }
}
void VietHoaTenList(Student a[],int n){
    for (int i=0;i<n;i++){
        VietHoaTen(a[i]);
    }
}

