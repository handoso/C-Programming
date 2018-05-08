#include<stdio.h>
int *find(int *begin, int *end, int x){
    for( ; begin<end; begin++){
        if(*begin==x){
            return begin;
        }
    }
    return NULL;
}
int main(){
    int a[5] = {3,7,1,2,4};
    int *p,x;
    printf("xaix too: ");
    scanf("%d",&x);
    p = find(a,a+5,x);
    if(p==NULL)
        printf("\n%d too oldsongvi \n",x);
    else
        printf("\n%d too %d bairlald oldloo\n",x,p-a);
    printf("%d %d", p, a);
    return 0;

}
