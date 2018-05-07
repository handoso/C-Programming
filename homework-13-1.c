#include<stdio.h>
void find(int a[], int n, int *min, int *max){
  int i;
  for(i=0; i<n; i++){
    if(i==0){
      *min = a[i]; *max = a[i];
    }
    if(a[i] >* max){
      *max = a[i];
    }else if(a[i] < *min){
        *min = a[i];
    }
  }
}
int main(){
  int i,n,d1,d2,a[100];
  printf("n too: "); scanf("%d",&n);
  for(i=0; i<n; i++){
    printf("a[%d] = ", i); scanf("%d",&a[i]);
  }
    find(a, n , &d1,&d2);
    printf("\nmin %d max %d \n",d1,d2);

  return 0;
}
