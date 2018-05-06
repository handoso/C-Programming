#include<stdio.h>
#include<string.h>

struct Student {
  char Owog[20];
  char Ner[20];
  char ID[20];
  float golch;
};
void print(struct Student s){
  printf("\n");
  printf("%s\n",s.Owog);
  printf("%s\n",s.Ner);
  printf("%s\n",s.ID);
  printf("%.2f\n",s.golch);
}
void read(struct Student *s){
  scanf("%s%s%s%f",&s->Owog,&s->Ner,&s->ID,&s->golch);
}
void set_Owog(struct Student *p, char owog[]){
  strcpy(p->Owog, owog);
}
void set_Ner(struct Student *p, char ner[]){
  strcpy(p->Ner, ner);
}
void set_ID(struct Student *p, char ID[]){
  strcpy(p->ID , ID);
}
void set_golch(struct Student *p, float golch){
  p->golch = golch;
}
int main(){
  struct Student bat,t;
  read(&bat);
  print(bat);
  set_Owog(&t,"dorj");
  set_Ner(&t, "bold");
  set_ID(&t, "1234");
  set_golch(&t,3.0);
  print(t);

  return 0;
}
