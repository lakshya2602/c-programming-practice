#include <stdio.h>
int sod(int n);
int sod(int n){
    if (n==0)
    return 0;
    int s;
    s=(n%10)+sod(n/10);
    return s;
}
int main(){
    int a;
    scanf("%d",&a);
    printf("The sum of digits is %d",sod(a));
    return 0;
}