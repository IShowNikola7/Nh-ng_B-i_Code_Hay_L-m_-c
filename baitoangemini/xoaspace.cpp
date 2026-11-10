#include <iostream>
#include <cstring>
using namespace std;

void xoaspace(char s[]) {
    int read = 0, write = 0;

    // 1. SỬA LỖI: Bỏ qua toàn bộ khoảng trắng ở đầu chuỗi (Trim Left)
    while (s[read] != '\0' && s[read] == ' ') {
        read++;
    }

    // 2. Duyệt dồn chuỗi và thu gọn khoảng trắng ở giữa
    while (s[read] != '\0') {
        if (s[read] != ' ') {
            s[write++] = s[read++];
        } else {
            s[write++] = s[read++]; // Giữ lại đúng 1 khoảng trắng
            // Bỏ qua các khoảng trắng trùng lặp kế tiếp
            while (s[read] != '\0' && s[read] == ' ') {
                read++;
            }
        }
    }

    // 3. Xóa khoảng trắng dư ở cuối chuỗi (Trim Right)
    if (write > 0 && s[write - 1] == ' ') {
        write--;
    }

    s[write] = '\0'; // Đặt ký tự kết thúc chuỗi
    cout << s;
}

int main() {
    char s[101];
    cin.getline(s, 101, '\n');
    xoaspace(s);

    return 0;
}