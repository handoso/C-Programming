#include<stdio.h>
#include<string.h>
int count(int a){
  int i=2,k=0;
  for(i; i<a; i++){
    if(a%i==0){
      k++;
    }
  }
  return k;
}

int main(){
  int n,j;
  printf("n too: "); scanf("%d",&n);
  j = count(n);
  printf("%d",j);


  return 0;
}
