#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char s[101]="        Hello     bro   nha";
    int read=0;
    int write=0;
    while (s[read]==' ' && s[read]!='\0'){
        read++;
    }
    while (s[read]!='\0'){
        if (s[read]!=' '){
            s[write++]=s[read++];
        }else if (s[read]==' '){
            s[write++]=s[read++];
            while (s[read]==' ' && s[read]!='\0'){
                read++;
            }
        }
    }
    if (write >0 && s[write-1]==' '){
        write--;
    }
    s[write]='\0';
    cout<<s;


    return 0;
}