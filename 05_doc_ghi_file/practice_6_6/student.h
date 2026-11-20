#pragma once

struct Student{
    char name[101];
    int id;
    double GPA;
};

double getGPA(double diem[]);

void readFile(char name[101]);