#include <stdio.h>
int pod(int a);
int pod(int a){
    int i=1;
    i=i*(a%10)*pod(a/10);
    return i;
}
int main(){int a;
    scanf("%d ",&a);
    printf("product of digits is %d",pod(a));
    return 0;
}