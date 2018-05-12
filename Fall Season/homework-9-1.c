#include<stdio.h>

int max(int a,int b,int c){
  return (a<b)?(a<c)?a:c:(b<c)?b:c;
}
int main(){
  int z,x,y;
  scanf ("%d %d %d" , &z,&x,&y);
  printf("%d\n", max(z,x,y));



  return 0;
}
