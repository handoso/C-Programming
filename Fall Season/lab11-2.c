#include<stdio.h>
#include<math.h>
struct point{
  int x,y;
}d1,d2;

double distance(struct point d1,struct point d2){
  return sqrt((pow(d2.x-d1.x,2))+(pow(d2.y-d1.y,2)));
}
int main(){
  printf("A point = "); scanf("%d%d",&d1.x,&d1.y);
  printf("B point = "); scanf("%d%d",&d2.x,&d2.y);
  printf("\n%.2f",distance(d1,d2));

  return 0;
}
