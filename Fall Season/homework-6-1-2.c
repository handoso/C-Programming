#include<stdio.h>
#define pri printf
#define sca scanf
int main(){
  int a[100],b[100],c[100],i=0,j,n,m,n1,len,k;
  pri("A array: "); sca("%d",&n);
  for(i=0; i<n; i++){
    pri("a[%d] = ",i); sca("%d",&a[i]);
  }pri("\n");
  pri("B array: "); sca("%d",&m);
  for(i=0; i<m; i++){
    pri("b[%d] = ",i); sca("%d",&b[i]);
  } pri("\n"); m += n;
  for(n,i=0; n<m; n++,i++)
    a[n] = b[i];
  len = 0 ; j=0; i=0;
  while(i<m){
    if(i==0){
      c[j] = a[i]; len++;//length
      j++; //index
    }else{
      for(k=0; k<len; k++){
        if(a[i] == c[k]){
            break; //k=n;
        }
      }if(k==len){
          c[j] = a[i]; len++;j++; k++; // or break;
        }
    }i++;
  }
  pri("i=%d j=%d k=%d len=%d\n",i,j,k,len);
  pri("A: ");
  for(i=0; i<m; i++){
    pri("%d ",a[i]);} pri("\n");
  pri("C: ");
  for(i=0; i<len; i++){
    pri("%d ", c[i]);
  }
  return 0;
}
