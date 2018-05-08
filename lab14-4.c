#include<stdio.h>
int find(int *begin, int *end, int x){
    int y;
    printf("\ny too: "); scanf("%d",&y);
    for(begin ; begin<end; begin++){
        if(*begin==x){
            *begin = y;
        }
    }
    return NULL;
}
int main(){
    int a[10];
    int *p,x,n,i;
    printf("n too: "); scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("xaix too: ");
    scanf("%d",&x);
    for(i=0; i<n; i++){
        printf("%d ",a[i]);
    }
    p = find(a,a+5,x);
    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    return 0;

}
