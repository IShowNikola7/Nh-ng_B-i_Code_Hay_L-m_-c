#include <iostream>
#include <cstring>

using namespace std;

void capitalizeWords(char s[]){
    int n=strlen(s);
    bool inWord=false;
    for (int i=0;i<n;i++){
        if (s[i]!=' ' && !inWord){
            if (s[i]>='a' && s[i]<='z') s[i]-=32;
            inWord=true;
        }
        else if (s[i]!=' ' && inWord==true){
            if (s[i]>='A' && s[i]<='Z') s[i]+=32;
        }
        else if (s[i]==' '){
            inWord=false;
        }
    }
}

void findLongestWord(const char s[], char res[]){
     int maxLength=0;
     bool inWord=false;
     int curStart=0;
     int dem=0;
     int length=strlen(s);
     int indexMax=0;
     for (int i=0;i<length;i++){
        if (s[i]!=' '){
            if (!inWord){
                curStart=i;
                dem++;
                inWord=true;
            }else{
                dem++;
            }
            if (dem>maxLength){
                indexMax=curStart;
                maxLength=dem;
            }
        }else {
            inWord=false;
            dem=0;
        }
    }
    for (int i=0;i<maxLength;i++){
        res[i]=s[i+indexMax];
    }
    res[maxLength]='\0';
}

int main(){
    char s[101];
    char res[101];
    cin.getline(s,101,'\n');
    findLongestWord(s,res);
    cout<<res;
    
    


    cout<<'\n'; 
    cout<<"Chuong trinh dang chay";


    return 0;
}