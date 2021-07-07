#include <stdio.h>

int main(){
    int count=0;
    scanf("%d",&count);
    
    int a,b,sum=0;
    
    for(int i = 0 ;i <count ; i++){
        scanf("%d",&a);
        scanf("%d",&b);
        sum = a+b;
        printf("%d\n",sum);
    }
    
    
    return 0;
}