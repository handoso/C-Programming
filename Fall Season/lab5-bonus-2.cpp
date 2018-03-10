#include<stdio.h>
main(){
  int n,d;
  printf("n toogoo og: "); scanf("%d",&n);
  for(int x=0; x<n; x++){
    for(int y=0; y<n; y++){
      if(x*x-y*y>=n){ //x,y iin xariyg n ees ix vgvi shalgaj bna;
        d = x*x-y*y;
        if(d%n==0){
          printf("%d %d\n",x,y);
        }
      }

    }
  }

  return 0;
}
