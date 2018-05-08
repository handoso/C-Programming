#include<stdio.h>
struct Rational{
  int d,n;
};
typedef struct Rational Rat;
void read(Rat *a){
  scanf("%d%d",&a->d,&a->n);
}
void print(Rat *a){
  printf("%d/%d ",a->d,a->n);
}
Rat add(const Rat *a, const Rat *b){
  Rat pp;
  pp.n = a->n*b->n; //suuri
  pp.d = a->d*b->n;
  pp.d += b->d*a->n;
  return pp;
}
Rat sub(const Rat *a, const Rat *b){
  Rat p;
  p.n = a->n*b->n;
  p.d = a->d*b->n;
  p.d -= b->d*a->n;
  return p;
}
Rat mult(const Rat *a, const Rat *b){
  Rat p;
  p.n = a->n*b->n;
  p.d = b->d*a->d;
  return p;
}
Rat div(const Rat *a, const Rat *b){
  Rat p;
  p.d = a->d*b->n;
  p.n = a->n*b->d;
  return p;
}
void simpl(Rat *a){
  int i,n;
  if(a->d > a->n){
    n = a->d;
    for(n; n>=1; n--){
      if(a->d%n==0 && a->n%n==0){
        a->d /= n; a->n /= n;
        break;
      }
    }
  }else{
    n = a->n;
    for(n; n>=1; n--){
      if(a->d%n==0 && a->n%n==0){
        a->d /= n; a->n /= n;
        break;
      }
    }
  }
}
int main(){
  Rat v1,v2;
  printf("1: "); read(&v1);
  printf("2: "); read(&v2);
  Rat p = add(&v1,&v2);
  simpl(&p);
  printf("\nadd: ");
  print(&v1); printf("+ "); print(&v2); printf("= "); print(&p);
  Rat pe = sub(&v1,&v2);
  simpl(&pe);
  printf("\nsub: ");
  print(&v1); printf("- "); print(&v2); printf("= "); print(&pe);
  Rat pd = mult(&v1,&v2);
  simpl(&pd);
  printf("\nmult: ");
  print(&v1); printf("* "); print(&v2); printf("= "); print(&pd);
  Rat ps = div(&v1,&v2);
  simpl(&ps);
  printf("\ndiv: ");
  print(&v1); printf("/ "); print(&v2); printf("= "); print(&ps);
  printf("\n");
  return 0;
}
