#include<stdio.h>
main(){
  int a[50][100][100],i,j,k,m,n,l,count=1;
  printf("orts:   "); scanf("%d",&n);
  printf("dawxar: "); scanf("%d",&m);
  printf("ail:    "); scanf("%d",&k);
  for(i=1; i<=n; i++){
    for(j=1; j<=m; j++){
      for(l=1; l<=k; l++){
        a[i][j][l] = count;
        count++;
      }
    }
  }/*
  for(i=1; i<=n; i++){
    for(j=1; j<=m; j++){
      for(l=1; l<=k; l++){
        printf("[%d][%d][%d]  ",i,j,a[i][j][l]);
      }
    }
    printf("\n");
  }*/ printf("\n");
  for(i=1; i<=n; i++){
    for(j=1; j<=m; j++){
      for(l=1; l<=k; l++){
        printf("[%d][%d][%d] = %d\n",i,j,l,a[i][j][l]);
      }
    } //printf("\n");
  }
  return 0;
}
