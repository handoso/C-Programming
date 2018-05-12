#include<stdio.h>
#define pr printf
#define sc scanf
int A[100],j=0;
int main(){
  int a,b,i=0,n;
  sc("%d%d",&a,&b);
  for(a ; a<=b; a++){
    prime(a);
  }
  prime_range(a,j);
  return 0;
}
int prime_range(int a,int b){
  int i=0;
  for(i; i<b; i++){
    printf("%d ", A[i]);
  }
}
int prime(int n){
  int i;
  for (i = 2; i < n; i++) {
      if (n % i == 0){
        break;
      }else if(i==n-1){
        A[j] = n; j++;
      }
  }
}
