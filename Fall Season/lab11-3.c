#include<stdio.h>
#include<math.h>
struct triangle{
  int a,b,c;
}v1,v2;

double find_area(struct triangle g){
  double s,p = (g.a+g.b+g.c)/2.0;
  s = sqrt(p*(p-g.a)*(p-g.b)*(p-g.c));
  return s;
}

int main(){
  double d1,d2;
  printf("first triangle: "); scanf("%d%d%d",&v1.a,&v1.b,&v1.c);
  printf("second triangle: ");  scanf("%d%d%d",&v2.a,&v2.b,&v2.c);
  d1 = find_area(v1); d2 = find_area(v2);
  printf("\n%.2f %.2f\n\n", d1,d2);

  if(d1>d2) printf("1 - %.2f\n", d1);
  else printf("2 - %.2f\n", d2);
  return 0;
}
