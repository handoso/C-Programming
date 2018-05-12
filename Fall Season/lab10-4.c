#include<stdio.h>
#include<math.h>
void read(int a[], int n){
  int i;
  for(i = 0; i < n; i++){
    scanf("%d", &a[i]);
  }
}
void print(int a[],int n){
  int i;
  for(i=0; i < n; i++){
    printf("%d ", a[i]);
  }
  printf("\n");
}
int modul(int x){
  if(x<0){
    return -1*x;
  }else if(x>=0){
    return x;
  }
}
int sum(int a[], int n){
  int i,s=0;
  for(i=0; i<n; i++){
    s += a[i];
  }
  return s;
}
int avg(int a[], int n){
  float d;
  d = sum(a,n);
  return d/n;
}
int product(int a[], int n){
  int i, s;
  for(i=0; i<n-1; i++){
    s = a[i]*a[i+1];
  }
  return s;
}
int main(){
  int a[100], n, b[100];
  printf("n toonii utgiig oruul: ");
  scanf("%d",&n);
  read(a, n);
  printf("Tanii oruulsan daraalal: ");
  print(a,n);
  int mu,i;
  mu=avg(a,n);
  printf("mu-iin utga: %d\n", mu);
  /* b xvsnegted moduliig hadgalaad, vrjweriig bodno*/
  for(i=0 ; i<n; i++){
    b[i] = modul(a[i] - mu);
  }
  int alpha;
  alpha = product(b,n);
  printf("alpha-iin utrga: %d\n", alpha);
  return 0;
}
