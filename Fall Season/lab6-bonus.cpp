#include<stdio.h>
main(){
  //a array-in yamar element b array-d baigaa boloxiig
  //haryyl
  int a[100],b[100],c[100],n,m,count=0,i=0;
    printf("n too: "); scanf("%d",&n);
    for(int j=0; j<n; j++){
      printf("a[%d] = ",j);
      scanf("%d", &a[j]);
    } printf("\n");
    printf("m too: "); scanf("%d",&m);
    for(int i=0; i<m; i++){
      printf("a[%d] = ",i);
      scanf("%d",&b[i]);
    } printf("\nZorvv: ");
    for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
        if(a[i]==b[j]){
          printf("\n%d",a[i]);
        }
      }
    }
  return 0;
}
