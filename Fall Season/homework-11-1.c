#include<stdio.h>
#include<string.h>
#define pri printf
#define sca scanf
int b[100];
struct Student {
  char owog[20], ner[20], id[10];
  float golch;
};
typedef struct Student Student;
void read(Student a[],int n){
  int i;
  for(i=0 ; i<n; i++){
    pri("Owog: ");    scanf("%s",a[i].owog);
    pri("Ner: ");   scanf("%s",a[i].ner);
    pri("ID: ");   scanf("%s",a[i].id);
    pri("Dvn: ");   scanf("%f",&a[i].golch);
  }
}
void print(Student a[], int n){
  puts("");
  pri("\tStudent \tOwog \tNer\t \tID \tDvn ");
  pri("\n\t\t %d \t%s \t%s\t \t%s \t%.2f",n+1,a[n].owog,a[n].ner,a[n].id,a[n].golch);
}
int search_owog(Student a[],int n,char s[]){
  int i;
  for(i=0; i<n; i++){
    if(strcmp(a[i].owog,s)==0){
      print(a, i);
    }else if(i==n-1){
      printf("tiim student alga\n");
    }
  }
}
int search_ner(Student a[], int n, char s[]){
  int i;
  for(i=0; i<n; i++){
    if(strcmp(a[i].ner,s)==0){
      print(a, i);
    }else if(i==n-1){
      pri("tiim student alga\n");
    }
  }
}
int search_ID(Student a[],int n,char s[]){
  int i;
  for(i=0; i<n; i++){
    if(strcmp(a[i].id,s)==0){
      print(a, i);
    }else if(i==n-1){
      pri("tiim student alga\n");
    }
  }
}
int search_golch(Student a[],int n,int dd){
  int i;
  for(i=0; i<n; i++){
    if(a[i].golch==dd){
      print(a, i);
    }else if(i==n-1){
      printf("tiim student alga\n");
    }
  }
}
void dvn_sort(Student a[], int n){
  int i,j,k,max;
  struct Student temp;
  for(i=0; i<n-1; i++){
    k=j;
    for(j=0 ; j<(n-1-i); j++){
      if(a[j].golch<a[j+1].golch){
        temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
      }
    }
  }
}
void print_students(Student a[], int n){
  int i;
  pri("\tStudent \tOwog \tNer \tID \tDvn ");
  for(i=0; i<n; i++){
    pri("\n\t\t %d \t%s \t%s \t%s \t%.2f",i+1,a[i].owog,a[i].ner,a[i].id,a[i].golch);
  }
  pri("\n");
}
int main(){
  int n,c,dd;
  char ss[100];
  printf("Member: "); scanf("%d",&n);
  Student student[n];
  read(student , n);
  print_students(student , n);
  getch();
  pri("\nhaih torloo songono yy: \n");
  pri("\n1. Owog\n2. Ner\n3. ID\n4. Golch\n5. vgvi bol\n");
  scanf("%d",&c);
  if(c==1){
    scanf("%s",&ss);
    search_owog(student, n, ss);
  }else if(c==2){
    scanf("%s",&ss);
    search_ner(student , n, ss);
  }else if(c==3){
    scanf("%s",&ss);
    search_ID(student , n, ss);
  }else if(c==4){
    scanf("%d",&dd);
    search_golch(student, n, dd);
  }
  pri("\n\nGolchoor jagsaaw\n");
  dvn_sort(student , n);
  print_students(student,n);
  return 0;
}
