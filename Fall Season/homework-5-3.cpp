#include<stdio.h>
main(){
  int n,l=1,n1;
  printf("n toogoo og: "); scanf("%d", &n);
  n1 = n;
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n1; j++){
      printf(" ");
    }
    for(int k=1; k<=l; k++){
      printf("X");
    }
    printf("\n");
    l=l+2;
    n1 = n1 - 1;
  }
  return 0;
}
