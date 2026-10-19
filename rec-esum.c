#include <stdio.h>
int es(int n);
int es(int n){int s=0;
    if (n<0)
    return 0;
    for (int i=1;i<=n;i++){
        if (i%2==0)
        s+=i;} 
    return s;
}
int main(){printf("%d",es(7));
return 0;}