#include <cstdio>  
int a[10001];  
int main(){  
    int n, sum = -1, tmp, start, end;  
    scanf("%d", &n);  
    for (int i = 0; i < n; i++)  
        scanf("%d", &a[i]);  
    for (int i = 0; i < n; i++){  
        tmp = 0;  
        for (int j = i; j < n; j++){  
            tmp += a[j];  
            if (tmp > sum){  
                sum = tmp;  
                start = a[i];  
                end = a[j];  
            }  
        }  
    }  
    if (sum < 0){  
        printf("0 %d %d\n", a[0], a[n-1]);  
        return 0;  
    }  
    printf("%d %d %d\n", sum, start, end);  
    return 0;  
}  
