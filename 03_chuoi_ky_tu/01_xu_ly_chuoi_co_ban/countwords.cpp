#include <iostream>
#include <cstring>
using namespace std;

int countWords(char s[]){
    int dem=0;
    bool inWord=false;
    for (int i=0;s[i]!='\0';i++){
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