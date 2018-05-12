# include <stdio.h>
int t = 1;
int main () {
  int n, a;
  scanf("%d%d", &a, &n);
  printf("first = %d\n",power(a, n));
  scanf("\n%d%d",&a,&n);
  t = 1;    // t гийн утгыг шинэчлэх
  printf("second = %d\n",power(a, n));

  return 0;
}
int power(int a, int b){ // void bish
  int i;
  for (i = 1; i <= b; i++)
     t = t * a;
  return t;
}
