#include<stdio.h>
main(){
  int n,s,count=0;
  printf("n toogoo: "); scanf("%d", &n);
  for(int i=2; i<=n; i++){
    s=0;
    for(int j=2; j<i; j++){
      if(i%j==0){
        s++;
      }
    }
    if(s==0){
      count++;
      printf("%d\n",i);
    }
}
  printf("\nTotal: %d\n", count);













  return 0;
}
