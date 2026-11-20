#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

struct Student {
    char name[50];
    char id[15];
};

// Yeu cau: Tach chuoi line "name|id" va luu vao st.name, st.id
// line: "nguyen van a|24127001"
// Sau khi chay xong:
// st.name = "nguyen van a"
// st.id   = "24127001"
bool parseInfoLine(char line[], Student &st) {
    int len=strlen(line);
    int pos=-1;
    for (int i=0;i<len;i++){
        if (line[i]== '|'){
            pos=i;
        }
    }
    if (pos==-1 ) return false;
    for (int i=0;i<pos;i++){
        st.name[i]=line[i];
    }st.name[pos]='\0';
    int i=0;
    int len2=len-strlen(st.name)-1;
    for (;i<len2;i++){
        st.id[i]=line[i+pos+1];
    }st.id[i]='\0';


    return true;
}
bool parseInfoLine2(char line[], Student &st) {
    int len=strlen(line);
    int pos=-1;
    for (int i=0;i<len;i++){
        if (line[i]== '|'){
            pos=i;
            line[i]='\0';
            break;
        }
    }
    if (pos==-1 ) return false;
    strcpy(st.name,line);
    strcpy(st.id,line+pos+1);

    return true;
}

int main() {
    char line[100] = "nguyen van a|24127001";
    Student s;

    if (parseInfoLine2(line, s)) {
        cout << "Ten: \"" << s.name << "\"" << endl;
        cout << "MSSV: \"" << s.id << "\"" << endl;
    } else {
        cout << "Loi dinh dang dong!" << endl;
    }

    return 0;
}
