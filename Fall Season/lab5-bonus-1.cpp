#include<stdio.h>
int main(){
  int n,s=0;
  printf("n too: "); scanf("%d",&n);
  //n = 1,2 gej ogson ved loop not work
  for(int i=2; i<=n-1; i++){
    if(n%i==0){
      s = s + i;
    }
  }
  if(s!=0){
    printf("\nanxnii too bish\n");
  }else{
    printf("\nanxnii too mon\n");
  }
  return 0;
}
