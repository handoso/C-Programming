#include<stdio.h>
main(){
	int a,b,c;
	printf("\nNyam\tDawaa\tMyagmar\tLxagwa\tPvrew\tBaasan\tByamba\n");
	for(int i=1; i<=31; i++){
		if (i==1){
			printf("\t\t\t\t");
		}
		printf("%d\t",i);
		if (i==3 || i==10 || i==17 || i==24){
			printf("\n");
		}
		if (i==7){
			printf("*");
		}
		if (i==17){
			printf("*");
		}
		}
		printf("\n\n");
		printf("*18-n bol tsergiin bayar\n*8-n bol Mart\n");
	return 0;
}
