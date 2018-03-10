#include<stdio.h>
int main(){
  int n;
  printf("n too og: "); scanf("%d",&n);
  for(int i=0; i<n; i++){
    for(int j=0; j<=i; j++){
      printf("X");
    }
    printf("\n");
  }
  n = n-1;
  for(n; n>0;n--){
    for(int k=0; k<n; k++){
      printf("X");
    }
    printf("\n");
  }


  return 0;
}
