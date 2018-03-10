#include<stdio.h>
main(){
  int n;
  printf("n too og: "); scanf("%d",&n);
  for(int i=0; i<n; i++){
    for(int j=0; j<=i; j++){
      printf("X");
    }
    printf("\n");
  }
  return 0;
}
