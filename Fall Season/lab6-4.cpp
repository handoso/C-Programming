#include<stdio.h>
main(){
  int n,x,a[100];
  printf("n too: "); scanf("%d",&n);
  for(int i=0; i<n; i++){
    printf("a[%d] = ",i); scanf("%d",&a[i]);
  }
  printf("\nx too: "); scanf("%d",&x);
  for(int i=0; i<n; i++){
    if(x==a[i]){
      printf("bairlal: %d\n",i);
      continue;
    }else if(i == n-1){
      printf("\n-1\n");
    }
  }
  return 0;
}
