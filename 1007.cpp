#include <iostream>
using namespace std;
int getSum(int* arr,int start,int end){
    int result =0;
    for (int i=start;i<=end;i++){
        result+=arr[i];
       // cout <<"in fun,arr[i]:"<<arr[i]<<endl;
    }

    return result;
}
int main(){
    //int num;
    //cin >> num;
    //int arr[num];
    //memset(arr,0,sizeof(arr));
    //for(int i = 0;i<num;i++){
    //    cin >> arr[i];
    //}
    int num ;
    cin >> num;
    int arr[num];
    for (int i=0;i<num;i++){
        cin >> arr[i];
    }
    int head=0;
    int tail = num-1;
    int maxSum=0;
    for(int i=0;i<num;i++){
        for(int j=i;j<num;j++){
            int tmp = getSum(arr,i,j);
            //cout << "i:"<<i<<",j:"<<j<<",sum="<<tmp<<endl;
            if (tmp > maxSum){
                maxSum = tmp;
                head = i;
                tail = j;
            }
        }
    }
    cout << maxSum << " " << head << " " << tail <<endl;
    return 0;
}

