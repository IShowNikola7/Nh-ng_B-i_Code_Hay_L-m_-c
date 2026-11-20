#include <iostream>
using namespace std;

struct Student {
    char name[50];
    float gpa;
};

// TODO 1: Viet ham printStudent nhan tham so kieu "const Student &st"
// In ra: "Ten: <name>, GPA: <gpa>"
void printStudent(const Student &st){
    cout<<"Ten: "<<st.name<<","<<" GPA: "<<st.gpa<<'\n';
}
// TODO 2: Viet ham nangGPA nhan tham so kieu "Student &st" va float bonus
// Cong them bonus vao st.gpa
void nangGPA(Student &st, float bonus){
    st.gpa+=bonus;
}

int main() {
    Student s;

    // Nhap thu cong
    s.gpa = 7.5;
    int len = 0;
    char tmp[] = "nguyen van a";
    while (tmp[len] != '\0') { s.name[len] = tmp[len]; len++; }
    s.name[len] = '\0';

    printStudent(s);   // In truoc khi nang
    nangGPA(s, 1.0);
    printStudent(s);   // In sau khi nang

    return 0;
}
