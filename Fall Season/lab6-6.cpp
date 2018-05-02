#include<stdio.h>
main(){
  int n,m,a[100][100],x;
  printf("mor/bagana: "); scanf("%d %d",&n,&m);
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      printf("a[%d][%d] = ",i,j); scanf("%d",&a[i][j]);
    }
  } printf("\n");
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      printf("%d ",a[i][j]);
    } printf("\n");
  }
  printf("\nx too: "); scanf("%d",&x);
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      if(x==a[i][j]){
        printf("mor: %d\nbagana: %d\n",i,j);
        break;
      }
      if(x==a[i][j]){
        break;
      }
    }
  }
  return 0;
}
