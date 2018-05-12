#include<stdio.h>

int is_even(int s){
  int i=1;
  for(i; i<=s; i++){
    if(i%2!=0){
      printf("%d\n", i);
    }
  }
}
main(){
  int n;
  printf("too: \n"); scanf("%d",&n);
  is_even(n);

  return 0;
}
