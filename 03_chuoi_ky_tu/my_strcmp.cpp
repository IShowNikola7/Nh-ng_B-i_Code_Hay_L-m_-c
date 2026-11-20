#include <iostream>

using namespace std;

int myStrcmp(const char s1[], const char s2[]) {
    int i=0;
    int check=0;
    while (s1[i]==s2[i]){
        if (s1[i]=='\0'){
            break;
        }
        i++;
    }
    if (s1[i]>s2[i]) check=1;
    else if (s1[i]<s2[i]) check=-1;
    return check;
}

int main() {
    char s1[100];
    char s2[100];

    cout << "Nhap chuoi thu nhat (s1): ";
    cin.getline(s1, 100);

    cout << "Nhap chuoi thu hai (s2): ";
    cin.getline(s2, 100);

    int res = myStrcmp(s1, s2);

    cout << "\n--- KET QUA SO SANH ---" << endl;
    if (res < 0) {
        cout << "\"" << s1 << "\" nho hon \"" << s2 << "\" (s1 < s2)" << endl;
    } else if (res > 0) {
        cout << "\"" << s1 << "\" lon hon \"" << s2 << "\" (s1 > s2)" << endl;
    } else {
        cout << "\"" << s1 << "\" bang \"" << s2 << "\" (s1 == s2)" << endl;
    }

    return 0;
}
