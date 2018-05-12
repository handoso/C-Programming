#include<stdio.h>
#include<string.h>
#define pri printf
#define sca scanf
const char a[10][100], b[10][100],n;
int check(char u[], char p[]){
  int i,j,k;
  for(i=0; i<n; i++){
    if(strlen(u)==strlen(a[i])){
      for(j=0; j<strlen(u); j++){
        if(u[j] == a[i][j]){
          continue;
        }else{
          break;
        }
      }
      if(j==strlen(u)){
        if(strlen(p)==strlen(b[i])){
          for(k=0; k<strlen(p); k++){
            if(p[k] == b[i][k]){
              continue;
            }else{
              break;
            }
          }
        }
        if(k==strlen(p)){
          return 1;
        }

      }
      }
    }
  return 0;
}
int main(){
  char s[100],pass[100];
  int i;
  printf("how many users? "); scanf("%d",&n);
  for(i=0; i<n; i++){
    pri("User: "); sca("%s",a[i]);
    pri("Password: "); sca("%s", b[i]); pri("\n");
  }
  pri("system login\n");
  pri("member: "); sca("%s",s);
  pri("password: "); sca("%s",pass);
  pri("\n%d\n", check(s,pass));

  return 0;
}
