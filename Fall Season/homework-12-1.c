#include<stdio.h>
typedef struct {
  int y,m,d;
}Date;
int udur_zoroo(Date a, Date b){
  int s=0,l;
  if(a.y >= b.y && a.m >= b.m){
    for(b.m ; b.m < a.m; b.m++){
      if(b.m == 4 || b.m == 6 || b.m == 9 || b.m == 11){
        s += 30;
      }else if(b.m == 28){
        s += 28;
      }else{
        s += 31;
      }
    }
    return s-b.d+a.d+(a.y-b.y)*365;
  }else{
    s = 192; //1 sariin 1-ees  7 sariin 11 n until;
    for(b.m ; b.m <= 12 ; b.m++){
      if(b.m == 4 || b.m == 6 || b.m == 9 || b.m == 11){
        s += 30;
      }else if(b.m == 28){
        s += 28;
      }else{
        s += 31;
      }
    }
    return s-b.d+(a.y-b.y-1)*365;
  }
}

int main(){
  Date a,b;
  a.m = 7;
  a.d = 11;
  printf("year 1: "); scanf("%d",&b.y);
  printf("month: "); scanf("%d",&b.m);
  printf("day: "); scanf("%d",&b.d);
  printf("year 2: "); scanf("%d",&a.y);
  printf("\n%d-n day vldsen bna.\n", udur_zoroo(a,b));

  return 0;
}
