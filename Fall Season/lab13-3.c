#include<stdio.h>
void read(int a[],int n){
  int i;
  for(i=0; i<n; i++){
    scanf("%d",&a[i]);
  }
}
void print(int a[],int n){
  int i;
  for(i=0; i<n; i++){
    printf("%d ",a[i]);
  }
}
void find(int a[], int n, int *addr, int *addr1){
  int i=0;
  *addr = 0; *addr1 = 0;
  for(i ; i<n; i++){
    if(a[i]%2 == 0){
      *addr += a[i];
    }else{
      *addr1 += a[i];
    }
  }
}
int main(){
  int a[100];
  read(a,5);
  print(a,5);
  int x,y;
  find(a,5,&x,&y);
  printf("\ntegsh toonuudiin to: %d\n",x);
  printf("sondgoi tonuudin too: %d\n",y);
  return 0;
}
