#include<stdio.h>
#include<math.h>
main(){
  int s[100][100],a[100],b[100],c[100],n,m,count=0,i=0,j;
    printf("1 daxi mor: \n");
    for(j=0; j<2; j++){
      printf("a[%d][%d] = ",i,j);
      scanf("%d", &s[i][j]);
    }
    i = 1;
    printf("\n2 daxi mor: "); scanf("%d",&n);
    for(j=0; j<n; j++){
      printf("a[%d][%d] = ",i,j);
      scanf("%d", &s[i][j]);
      a[j] = s[i][j];
      c[j] = s[i][j];
    }
    i = 2;
    printf("\n3 daxi mor: "); scanf("%d",&m);
    for(j=0; j<m; j++){
      printf("a[%d][%d] = ",i,j);
      scanf("%d", &s[i][j]);
      b[j] = s[i][j];
    }
    printf("\nA array: ");
    for(j=0; j<n; j++){
      printf("%d ", a[j]);
    } printf("\nB array: ");
    for(j=0; j<m; j++){
      printf("%d ", b[j]);
    } printf("\nC array: ");
    for(j=0; j<m; j++){
      c[n+j]=b[j];
    }
    for(j=0; j<m+n;j++){
      printf("%d ",c[j]);
    }
    printf("\n");

  return 0;
}
