#include <iostream>
#include <cstring>
using namespace std;

void trimSpace(char s[]){
    int read=0;
    int write=0;
    while (s[read]!='\0' && s[read]==' '){
        read++;
    }
    while (s[read]!='\0'){
        if (s[read]!=' '){
            s[write++]=s[read++];
        }else if (s[read]==' '){
            s[write++]=s[read++];
            while (s[read]==' '){
                read++;
            }
        }
    }
    if (write > 0 && s[write-1]==' '){
        write--;
    }
    s[write]='\0';
}

void VietHoaTen(char s[]){
    bool inWord=false;
    for (int i=0;s[i]!='\0';i++){
        if (s[i]!=' ' && inWord==false) {
            if (s[i]>='a' && s[i]<= 'z'){
                s[i]-=32;
            }
        inWord=true;
        }else if (s[i]!=' ' && inWord==true){
            if (s[i]>='A' && s[i]<= 'Z'){
                s[i]+=32;
            }
        }
        else if (s[i]==' '){
            inWord=false;
        }
    }
}

int main(){
    char s[101];
    cin.getline(s,101,'\n');
    trimSpace(s);
    VietHoaTen(s);
    
    cout<<s;

    return 0;
}