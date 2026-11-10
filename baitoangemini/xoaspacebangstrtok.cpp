#include <iostream>
#include <cstring>
using namespace std;

void xoaspace_strtok(char s[]) {
    char res[101];
    char *ptr=strtok (s," ");
    while (ptr!=NULL){
        strcat(res,ptr);
        ptr = strtok(NULL," ");
        // ví dụ HELLO   BRO thì sau khi dán xong HELLLO gọi strtok(NULL," "); thì ptr đangg trỏ tới Bro lúc này ptr khác NULL nên thêm space vào sau HELLO còn nếu dán xong BRO t hì ptr trỏ vào NULL vì hết từ rồi nên ko thực hiện thêm space sau BRO nữa
        //Bản chất thì thằng strtok nó skip luôn mấy khoảng trắng ở đầu rồi nó ví dụ"    today is " thì nó chỉ lấy today rồi đặt \0 thành today\0 luôn 
        if (ptr!=NULL){
            strcat(res," ");
        }
    }

    strcpy(s,res);
    cout<<s;
}

int main() {
    char s[101];
    cin.getline(s, 101, '\n');
    xoaspace_strtok(s);
    return 0;
}