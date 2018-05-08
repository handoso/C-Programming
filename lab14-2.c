#include<stdio.h>
int size(int *begin, int *end){
    int *d,*d1;
    d = end;
    d1 = begin;
    printf("%d %d",d1,d);
    return (end-begin);
}

int main(){
    int i,n;
    scanf("%d", &n);
    int a[n];
    printf("\n%d\n", size(a,a+n));

    return 0;
}
