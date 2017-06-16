//
//  main.cpp
//  PATest
//
//  Created by 胡小波 on 2017/3/10.
//  Copyright © 2017年 Yullion. All rights reserved.
//
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
using namespace std;
int main(){
    int sum = 0 ;
    char a = getchar();
    while(a>='0'&&a<='9'){
        sum+=(a-'0');
        a=getchar();
    }
    string dic[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    char str[100]={};
    sprintf(str,"%d",sum);
    int len = strlen(str);
    for (int i = 0;i<len;i++){
        if(i==0){
            cout << dic[str[i]-'0'];
        }else{
            cout << " " << dic[str[i]-'0'];
        }
    }
    
}
