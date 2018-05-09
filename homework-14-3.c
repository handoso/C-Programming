#include<stdio.h>
int *find(int a[][100], int n, int m){
  int i,j, temp, *max , l = 0;
  for(i=0; i<n; i++){
    temp = 0;
    for(j=0; j<m; j++){
      if(a[i][j]%2 == 0){
        temp++;
      }
    }
    if(l<temp){
      l = temp;
      max = a[i];
    }
  }
  printf("\nhayag dotorx bytsax utga %d %d\n", *max,max);
  return max;
}
int main(){
  int a[100][100],n,m,i,j,*l;
  printf("mor/bagana: "); scanf("%d%d",&n,&m);
  for(i=0; i<n; i++){
    for(j=0; j<m; j++){
      printf("a[%d][%d] = ",i,j); scanf("%d",&a[i][j]);
    }
  } printf("\n");
  for(i=0; i<n; i++){
    for(j=0; j<m; j++){
      printf("%d ",a[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  for(i=0; i<n; i++){
    for(j=0; j<m; j++){
      printf("%d ",&a[i][j]);
    }
    printf("\n");
  }
  l = find(a,n,m);  printf("\n");
  printf("%d",l);


  return 0;
}
