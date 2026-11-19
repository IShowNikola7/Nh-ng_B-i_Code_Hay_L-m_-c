#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char s[101]="        Hello     bro   nha      ";
    int read=0,write=0;
    while (s[read]==' '){
        read++;
    }
    while (s[read]!='\0'){
        if (s[read]!=' '){
            s[write++]=s[read++];
        }else {
            while (s[read]==' '){
                read++;
            }
            if (s[read]!='\0'){
                s[write++]=' ';
            }
        }
    }
    s[write]='\0';

    cout<<s;
    cout<<'\n'<<write;


    return 0;
}