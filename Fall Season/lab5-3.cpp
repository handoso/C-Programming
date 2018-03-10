#include<stdio.h>
main(){
  int s;
  for(int i=1; i<=10; i++){
    for(int j=1; j<=10; j++){
      s = i * j;
      printf("%d*%d=%d\t",i,j,s);
    }
    printf("\n");
  }
  return 0;
}
