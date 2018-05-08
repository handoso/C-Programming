#include<stdio.h>
void read(int a[], int n){
  int i;
  for(i=0; i<n; i++){
    printf("a[%d] = ",i); scanf("%d",&a[i]);
  }
}
void print(int a[], int n){
  int i;
  for(i=0; i<n; i++){
    printf("%d ",a[i]);
  }
}
int *search(int a[], int value, int n){
  int i;
  for(i=0; i<n; i++){
    if(a[i] == value){
      return &a[i];
    }
  }
  return 0;
}
int main(){
  int a[100];
  read(a,5);
  print(a,5);
  int *p;
  p = search(a,3,5);
  if(p==NULL){
    printf("\nOldsongvi\n");
  }
  else{
    printf("\n%d too %d bairlald oldloo \n",*p,p-a);
  }


    return 0;
}
