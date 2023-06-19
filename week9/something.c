#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,sum=0,sum1,sum2=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        sum1=sum2+arr[i];
        if(sum1>sum){
            sum=sum1;
            sum2=sum1;
        }
        
        else{
            sum2=0;
        }
    }
    printf("%d",sum);
    return 0;
}