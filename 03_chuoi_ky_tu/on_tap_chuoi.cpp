#include <iostream>

using namespace std;

int countWords(const char s[]) {
    int dem=0;
    bool inWord=false;
    for (int i=0;s[i]!='\0';i++){
        if (s[i]!=' ' && inWord==false){
            dem++;
            inWord=true;
        }
        else if (s[i]==' '){
            inWord=false;
        }
    }
    return dem;
}

void normalizeString(char s[]) {
    bool inWord=false;
    for (int i=0;s[i]!='\0';i++){
        if (s[i]!=' ' && !inWord){
            if(s[i]>='a' && s[i]<='z'){
                s[i]-=32;
            }
            inWord=true;
        }else if (s[i]!=' ' && inWord){
            if (s[i]>='A' && s[i]<='Z'){
                s[i]+=32;
            }
        }else if (s[i]==' '){
            inWord=false;
        }
    }
    int read=0;
    int write=0;
    while (s[read]==' ' && s[read]!='\0'){
        read++;
    }
    while (s[read]!='\0'){
        if (s[read]!=' '){
            s[write++]=s[read++];
        }
        else if (s[read]==' '){
            s[write++]=s[read++];
            while (s[read]==' '){
                read++;
            }
        }
    }
    while (write>0 && s[write-1]==' '){
        write--;
    }
    s[write]='\0';
}

int main() {
    char s[1000];

    cout << "Nhap chuoi can on tap: ";
    cin.getline(s, 1000);

    cout << "\n--- KET QUA ON TAP ---" << endl;
    cout << "So tu trong chuoi: " << countWords(s) << endl;

    normalizeString(s);
    cout << "Chuoi sau chuan hoa: \"" << s << "\"" << endl;

    return 0;
}
