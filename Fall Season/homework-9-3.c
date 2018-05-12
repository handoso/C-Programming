#include<stdio.h>
void rea(int A[], int n){
  int i;
  for(i=0; i<n; i++){
    printf("A[%d] = ",i); scanf("%d",&A[i]);
  }
}
void pri(int A[], int n){
  int i;
  printf("\n");
  for(i=0; i<n; i++){
    printf("%d ", A[i]);
  }
}
int join(int A[], int B[], int n, int m){
  int j;
  m += n;
  for(n,j=0; n<m; n++,j++){
    A[n] = B[j];
  }
}
int main(){
  int a[100],b[100],i,j,n,m,k;
  printf("A limit: "); scanf("%d",&n);
  rea(a,n);
  pri(a,n); printf("\n");
  printf("\nB limit: "); scanf("%d",&m);
  rea(b,m);
  pri(b,m); printf("\n");
  k = join(a,b,n,m);
  pri(a,k); printf("\n");
  return 0;
}
