#include<stdio.h>
int main(){
  int n,m;
  printf("n toogoo: "); scanf("%d",&n);
  for(int i=1; i<=n; i++){
    if(i%2==0){
      for(int j=1; j<=n; j++){
        if(j%2!=0){printf("X");}
        else{printf("O");}
      }
    }else{
      for(int j=1; j<=n; j++){
        if(j%2==0){printf("X");}
        else{printf("O");}
      }
    }
    printf("\n");
  }


  return 0;
}
