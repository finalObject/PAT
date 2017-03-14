#include <iostream>
#include <cstdio>
using namespace std;
int main(){
  int arr[10001];
  int num ,head,tail;
  int maxSum = -1;
  cin >> num;

  for (int i=0;i<num;i++){
	cin >> arr[i];
  }

  for(int i=0;i<num;i++){
	int tmp = 0;
	for(int j=i;j<num;j++){

	  tmp += arr[j];
	  if (tmp > maxSum){
		maxSum = tmp;
		head = i;
		tail = j;
	  }
	}
  }

  if (maxSum<0){	
	printf("0 %d %d\n",arr[0],arr[num-1]);
  }else{
	printf("%d %d %d\n",maxSum,head,tail);
  }

  return 0;
}

