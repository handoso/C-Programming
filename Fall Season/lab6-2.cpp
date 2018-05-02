#include<stdio.h>
main(){
  int a[100],n;
  printf("Limit: "); scanf("%d",&n);
  for(int i=0; i<n; i++){
    printf("a[%d] = ",i); scanf("%d",&a[i]);
  }
  n--;
  printf("\n");
  for(; n>=0; n--){
    printf("a[%d] = %d\n",n,a[n]);
  }


  return 0;
}
