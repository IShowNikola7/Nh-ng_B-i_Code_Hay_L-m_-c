#ifndef SINHVIEN
#define SINHVIEN

struct Birthday{
    int day;
    int month;
    int year;
};

struct Student{
    char name[101];
    int id;
    Birthday ngaysinh;
};

void inputStudent(Student &a);
void inputBirthday(Student &a);
void printStudent(Student a);
void printBirthday(Student a);
void inputList(Student a[],int &n);
void printList(Student a[],int n);
void writeFile(Student a[],int n);
void writeStudent(Student a);
void readFile(Student a[],int &n);
void VietHoaTen(Student a);





#endif