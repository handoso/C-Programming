#include<stdio.h>
#include<math.h>
typedef struct {
  int x,y;
}Point;
typedef struct {
  Point A,B,C;
}Triangle_P;
typedef struct {
  float a,b,c;
}Triangle_T;
float distance(Point g1, Point g2){
  return sqrt(pow(g2.x-g1.x,2)+(pow(g2.y-g1.y,2)));
}
float find_area(Triangle_T g){
  float s,p = (g.a+g.b+g.c)/2.0;
  s = sqrt(p*(p-g.a)*(p-g.b)*(p-g.c));
  return s;
}
int main(){
  float m1,m2,m3;
  Triangle_P t;
  Triangle_T s;
  printf("(x,y) = "); scanf("%d %d", &t.A.x, &t.A.y);
  printf("(x,y) = "); scanf("%d %d", &t.B.x, &t.B.y);
  printf("(x,y) = "); scanf("%d %d", &t.C.x, &t.C.y);
  m1 = distance(t.A,t.B); s.a = m1;
  m2 = distance(t.A,t.C); s.b = m2;
  m3 = distance(t.B,t.C); s.c = m3;
  printf("\nSquare: %.2f\n", find_area(s));
  return 0;
}
