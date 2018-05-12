#include<stdio.h>
void reverse(int *begin, int *end){
  int i=0,n,temp;
  n = end-begin;
  end--;
  for( ; i<n/2; i++){
    temp = *begin;
    *begin = *end;
    *end = temp;
    begin++; end--;
  }
  printf("\n");
}
int main(){
    int a[5] = {3,7,1,2,4},n;
    scanf("%d",&n);
    reverse(a,a+n);
    int i;
    for(i=0; i<5; i++){
        printf("%d ", a[i]);
    } printf("\n");
    for(i=0; i<5; i++){
        printf("%d ", &a[i]);
    }
return 0;}
