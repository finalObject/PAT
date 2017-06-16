#include <iostream>
using namespace std;
int main(){
  int number =0;
  cin >> number;
  int recent=0,tar=0,tim=0;
  for (int i =0;i<number;i++){
	cin>>tar;
	if(tar>recent){
	  tim += (tar-recent)*6+5;
	}else{
	  tim += (recent-tar)*4+5;
	}
	recent = tar;
  }
  cout << tim;
  return 0;
}
