#include<stdio.h>
#include<math.h>

struct triangle {
  flaot a,b,c;
}v1,v2;

int main(){
  float p,d1,d2;
  printf("first triangle: "); scanf("%d%d%d",&v1.a,&v1.b,&v1.c);
  printf("second triangle: ");  scanf("%d%d%d",&v2.a,&v2.b,&v2.c);
  p = (v1.a+v1.b+v1.c)/2.0;
  d1 = sqrt(p*(p-v1.a)*(p-v1.b)*(p-v1.c));
  p = (v2.a+v2.b+v2.c)/2.0;
  d2 = sqrt(p*(p-v2.a)*(p-v2.b)*(p-v2.c));
  if(d1>d2) printf("1 - %.2f\n", d1);
  else printf("2 - %.2f\n", d2);
  return 0;
}
