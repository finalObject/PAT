#include <iostream>
#include <string.h>
#include <string>
using namespace std;
int getSeconds(const char* a){
    int s = (a[7]-'0')+(a[6]-'0')*10;
    int m = (a[4]-'0')+(a[3]-'0')*10;
    int h = (a[1]-'0')+(a[0]-'0')*10;
    return s+60*m+h*3600;
}
int main(){
    int number;
    char lock[16];
    char unlock[16];
    char early[]="23:59:59";
    char late[]="00:00:00";
    cin >> number;
    for (int i=0;i<number;i++){
        string a,b,c;
        cin >> a >> b >> c;
    
        if (getSeconds(b.data())<
            getSeconds(early)){
            strcpy(unlock,a.data());
            strcpy(early,b.data());
        }
        if (getSeconds(c.data())>
            getSeconds(late)){
            strcpy(lock,a.data());
            strcpy(late,c.data());
        }
    }
    printf("%s %s",unlock,lock);
}

