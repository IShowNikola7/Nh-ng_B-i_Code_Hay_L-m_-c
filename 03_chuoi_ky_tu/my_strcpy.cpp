#include <iostream>

using namespace std;

void myStrcpy(char dest[], const char src[]) {
    int i=0;
    for (i;src[i]!='\0';i++){
        dest[i]=src[i];
    }
    dest[i]='\0';
}

int main() {
    char src[100];
    char dest[100];

    cout << "Nhap chuoi nguon (src): ";
    cin.getline(src, 100);

    myStrcpy(dest, src);

    cout << "Chuoi goc (src): " << src << endl;
    cout << "Chuoi sao chep (dest): " << dest << endl;

    return 0;
}
