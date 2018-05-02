#include<stdio.h>
main(){
  int a[100][100],n,i,j,d=0,dio=0,dio1=0,n1;
  printf("n too: "); scanf("%d",&n);
  for(i=0; i<n; i++){
    d=0;
    for(j=0; j<n; j++){
      printf("a[%d][%d] = ",i,j); scanf("%d",&a[i][j]);
      d = d+a[i][j];
    }
    printf("%d moriin result: %d\n\n",i,d);
  }
  for(i=0; i<n; i++){
    d=0;
    for(j=0; j<n; j++){
      d = d+a[j][i];
    }
    printf("%d baganiin result: %d\n",i,d);
  }
  for(i=0,j=0; i<n; j++,i++){
    dio = dio + a[i][j];
  } n1=n-1;
  for(n1,i=0; n1>=0; n1--){
    dio1 = dio1 + a[i][n1];
    i++;
  } printf("\nArray:\n");
  for(i=0; i<n; i++){
    d=0;
    for(j=0; j<n; j++){
      printf("%d ",a[i][j]);
    }
    printf("\n");
  }
  printf("\nleft: %d\n",dio);
  printf("right: %d\n",dio1);
  return 0;
}
