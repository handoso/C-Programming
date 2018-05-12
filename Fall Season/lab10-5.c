#include<string.h>
#include<stdio.h>
#include<ctype.h>
int is_valid(char pwd[]){
  int i,j,l,k=0;
  if(strlen(pwd)>=6){
    for(i=0; i<=strlen(pwd); i++)
    {
      if(isupper(pwd[i]))
      {
        for(j=0; j<strlen(pwd); j++){
          if(isdigit(pwd[j])){
            k++;
            if(k==3)
            {
              for(l=0; l<strlen(pwd); l++)
              {
                  if(ispunct(pwd[l])){
                    return 0;
                  }
              }
              return 4;
            }
          }
        }
        return 3;
      }
    }
    return 2;
  }else{
    return 1;
  }
}
int main(){
  char pwd[100];
  int d;
  gets(pwd);
  d = is_valid(pwd);
  if(d==1){
    printf("key iin urtiig dytaasan bna\n");
  }else if(d==2){
    printf("key iin tom vseg dytaasan bna\n");
  }else if(d==3){
    printf("key iin int too dytaasan bna\n");
  }else if(d==4){
    printf("key iin special dytaasan bna\n");
  }else {
    printf("perfect key bna %d \n", d);
  }

  return 0;
}
