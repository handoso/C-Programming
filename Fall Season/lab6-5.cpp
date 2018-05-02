#include<stdio.h>
int main(){
	int a[100],i,j,n,b=1,c=1;
	printf("n too: ");	scanf("%d", &n);
	for (i = 0 ; i < n ; i++){
		printf("a[%d] = ",i);	scanf ("%d",  &a[i]);
		}
	for (j = 0 ; j < n-1 ; j++){
		if (a[j] <= a[j+1]){ b++;
      if(b == n){ printf("Osox Erembtei\n"); }
		}
    if (a[j] >= a[j+1]){ c++;
      if(c == n){ printf("Byyrax\n"); }
    }
	}
  if(b!=n && c!=n){ printf("Erembgvi\n");}
	return 0;
}
