#include <iostream>
#include <cstring>
using namespace std;

int countWords(char s[]){
    int dem=0;
    if (strlen(s)==0) return 0;
    bool inWord=false;
    int length=strlen(s);
    for (int i=0;i<length;i++){
        if (s[i]!=' ' && inWord==false){
            dem++;
            inWord=true;
        }else if (s[i]==' '){
            inWord=false;
        }
    }



    return dem;
}

int main(){
    char s[101];
    cin.getline(s,101,'\n');
    cout<<countWords(s);


    return 0;
}