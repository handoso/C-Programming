#include<stdio.h>
int palindrom(int n){
  int r=0,t = n;
   while (t != 0){
      r *= 10; // oron nemj ogch baigaa
      r += t%10; // n toog ardaas %10t xywaan r d vldegdeliig hadgalj bna
      t = t/10; // n /10 t xywaan bagasgaj bna
    }
   if (n == r) //r toog n tei checklene
      return 1;
   else
      return 0;
}
int main(){
  int a;
  printf("too: "); scanf("%d",&a);
  printf("%d",palindrom(a));

  return 0;
}
