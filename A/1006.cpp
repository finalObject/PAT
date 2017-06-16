#include <iostream>
#include <string.h>
#include <string>
using namespace std;
int getSeconds(string a){
  int s = (a[7]-'0')+(a[6]-'0')*10;
  int m = (a[4]-'0')+(a[3]-'0')*10;
  int h = (a[1]-'0')+(a[0]-'0')*10;
  return s+60*m+h*3600;
}
int main(){
  int number;
  string lock;
  string unlock;
  string early="23:59:59";
  string late="00:00:00";
  cin >> number;
  for (int i=0;i<number;i++){
	string a,b,c;
	cin >> a >> b >> c;
    
	if (getSeconds(b)<
		getSeconds(early)){
	  unlock.assign(a);
	  early.assign(b);
			}
	if (getSeconds(c)>
		getSeconds(late)){
	  lock.assign(a);
	  late.assign(c);
	}
  }
  cout << unlock << " " << lock;
}

