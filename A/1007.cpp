#include <iostream>
#include <cstdio>
using namespace std;
int arr[10001];

int main(){
  int n, sum = -1, tmp, start, end;
  scanf("%d", &n);  
  for (int i = 0; i < n; i++)  
	scanf("%d", &arr[i]);  

  for(int i=0;i<n;i++){
	tmp = 0;
	for(int j=i;j<n;j++){

	  tmp += arr[j];
	  if (tmp > sum){
		sum = tmp;
		start =arr[i];
		end = arr[j];
	  }
	}
  }

  if (sum<0){	
	printf("0 %d %d\n",arr[0],arr[n-1]);
  }else{
	printf("%d %d %d\n",sum,start,end);
  }

  return 0;
}

