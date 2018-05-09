#include<stdio.h>
void read(int *begin, int *end);
void print(int *begin, int *end);

int main(){
  int n;
  printf("n too: "); scanf("%d",&n);
  int a[n];
  read(a,a+n);
  print(a,a+n);
  return 0;
}
void read(int *begin, int *end){
  int i=0;
  for(; begin < end; begin++){
    printf("a[%d] = ", i); i++;
    scanf("%d", begin);
  }
}
void print(int *begin, int *end){
  for(; begin<end; begin++){
    printf("%d ", *begin);
  }
}
