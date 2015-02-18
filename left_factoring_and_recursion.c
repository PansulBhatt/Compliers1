#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct grammar{
 char lhs[10];
 char rhs[10][10];
 int i;
}grammar;
void main(){
int k,j,l,m,n;
char alpha[10],beta[10];
char ch[10];
grammar g[10];
clrscr();
printf("Enter the number of productions:\n");
scanf("%d",&j);
for(k=0;k<j;k++)
{
 printf("enter LHS: ");
 scanf("%s",&g[k].lhs);
 printf("\nenter number of right production sets for the above grammar:");
 scanf("%d",&l);
 for(m=0;m<l;m++)
 {
  printf("enter RHS: ");
 scanf("%s",&g[k].rhs[m]);



 }
 printf("\n");
}
for(k=0;k<j;k++)
{
 printf("%s->",g[k].lhs);
   for(m=0;m<strlen(g[k].rhs[0]);m++)
   printf("%s|",g[k].rhs[m]);
printf("\n");
}

for(k=0;k<j;k++)
{
 printf("%s->",g[k].lhs);
   for(m=0;m<strlen(g[k].rhs[0]);m++)
{
   printf("%s|",g[k].rhs[m]);
  if(g[k].lhs[0]==g[k].rhs[m][0])  {
  printf("left recursion\n");
 strcpy(ch,g[k].lhs);
  strcpy(beta,g[k].rhs[m+1]);
   for(n=0;n<strlen(g[k].rhs[0]);n++)
   alpha[n]=g[k].rhs[m][n+1];

  }
}
printf("\n");
}
printf("\nAlpha: %s , Beta:  %s",alpha,beta);
printf("\n%s -> %sS'\n",ch,beta);
printf("S' -> %sS'|e0",alpha);
printf("\n");

getch();

}
