#include <iostream>
using namespace std;

// Ham sao chep toan bo ky tu tu src sang dest
// Rang buoc: Khong dung <cstring>, chi phi bo nho phu O(1)
void myStrcpy(char dest[], const char src[]) {
    // TODO: Ban hay tu viet phan logic sao chep tai day
    // Luu y: Nho sao chep ca ky tu ket thuc chuoi '\0'
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
