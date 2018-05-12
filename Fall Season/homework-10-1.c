#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define pri printf
void read_2darray(int a[][100], int n, int m){
  int i,j;
  for( i=0; i<n; i++){
    for( j=0; j<m; j++){
      printf("a[%d][%d] = ",i,j); scanf("%d", &a[i][j]);
    }
  }
}
void print_2darray(int a[][100], int n, int m){
  int i,j;
  for( i=0; i<n; i++){
    for( j=0; j<m; j++){
      printf("%d ", a[i][j]);
    } printf("\n");
  }
}
void min(int a[][100], int n, int m, int row[], int col[]){
  int i,j,min;
  for(i=0; i<n; i++){
    for(j=0; j<m; j++){
      if(j==0)
        min = a[i][j];
      if(min > a[i][j])
        min = a[i][j];
    }
    row[i] = min;
  }
  for(i=0; i<m; i++){
    for(j=0; j<n; j++){
      if(j==0)
        min = a[j][i];
      if(min > a[j][i])
        min = a[j][i];
    }
    col[i] = min;
  }
}
int main(){
  int c_row, c_col, A[100], B[100], C[100][100],i,j;
  printf("row / col: ");  scanf("%d%d",&c_row, &c_col);
  read_2darray( C, c_row, c_col); pri("\n");
  print_2darray( C, c_row, c_col); pri("\n");
  min( C, c_row, c_col, A, B);
  pri("mor bvriin min\n");
  for( i=0; i<c_row; i++){
    pri("%d-r moriin min: %d\n", i, A[i]);
  } pri("\n");
  pri("bagana bvriin min\n");
  for( j=0; j<c_col; j++){
    pri("%d-r baganiin min: %d\n", j, B[j]);
  }

  return 0;
}
