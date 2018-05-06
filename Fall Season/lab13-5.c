#include<stdio.h>
struct Triangle{
  int a,b,c;
};
void read(struct Triangle *p){
  scanf("%d%d%d",&p->a,&p->b,&p->c);
}
int main(){
  struct Triangle v1;
  read(&v1);
  printf("\n%d ",v1.a);
  printf("%d ",v1.b);
  printf("%d\n",v1.c);
  return 0;
}
