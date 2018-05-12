#include<stdio.h>
#define pr printf
#define sc scanf
int max(int a[],int n){
  int j=0, max=0;
  for(j; j<n; j++){
    if(a[j]>max){
      max=a[j];
    }
  }
  return max;
}
main(){
  int a[100],b[100],n,m,i=0,j,s1,s2;
  printf("a array: ");  scanf("%d",&n);
  printf("b array: ");  sc("%d",&m);
  for(i; i<n; i++){
      pr("a[%d] = ", i); sc("%d",&a[i]);
  }
  for(j=0; j<m; j++){
    pr("b[%d] = ",j);  sc("%d",&b[i]);
  }
  s1 = max(a,n);
  s2 = max(b,n);
  if(s1>s2){
    pr("a array d ix bna");
  }else{
    pr("b array d ix bna");
  }
  return 0;
}
