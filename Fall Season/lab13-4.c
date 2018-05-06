#include<stdio.h>
void swap(int *a, int *b){
  int i;
  i = *a;
  *a = *b;
  *b = i;
}

int main(){
  int x=1, y=3;
  swap(&x, &y);
  printf("%d %d \n",x,y);
  return 0;


  return 0;
}
