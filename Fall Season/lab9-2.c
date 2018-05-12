#include<stdio.h>
#define pr printf
#define sc scanf
void read(int a[], int n){
    int i;
    for (i = 0; i < n; i++)
      sc("%d", &a[i]);
  }

void print(int a[], int n){
  int i=0;
  for(i; i<n; i++){
    pr("%d ", a[i]);
  }
}
main(){
  int a[100],b[100],n,m;
  pr("a array: "); sc("%d",&n);
  pr("b array: "); sc("%d",&m);
  read(a ,n);
  pr("b array: \n");
  read( b, m);
  pr("\n");
  print(a,n);
  pr("\n");
  print(b,m);

  return 0;
}
