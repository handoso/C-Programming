#include<stdio.h>
void read(int *p){
  scanf("%d",p+2);
}
int main(){
  int a[100],i;
  int j=2;
  for(i=0; i<5; i++){
    read(a-j); j--;
  }
  for(i=0; i<5; i++){
    printf("%d ",*(a+i));
  }
  return 0;
}
