#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct grammar{
 char lhs[10];
 char rhs[10][10];
 int i;
}grammar;
int check(char a){
  if(a=='a'||a=='b'||a=='c'||a=='d'||a=='e'||a=='f'||a=='g'||a=='h'||a=='i'||a=='j'|| a=='k'||a=='l'||a=='m'||a=='n'||a=='o'||a=='p'||a=='q'||a=='r'||a=='s'||a=='t'||a=='u'||a=='v'||a=='w'||a=='x'||a=='y'||a=='z')
  return 1;
  else
  return 0;


}

void main(){
int k,j,t,l,m,n,asc;
char temp,alpha[10],beta[10];
char first[10];
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
printf("\n\n");
for(k=0;k<j;k++)
{
 for(m=0;m<strlen(g[k].rhs[0]);m++)
 {
/* temp=g[k].rhs[m][0];

 asc=atoi(temp);
 printf("%d",asc);
  if(asc<=97&&asc>=122)
  printf("first(%s): %s",g[k].rhs[m],g[k].rhs[m]);
*/
  if(check(g[k].rhs[m][0])==1)
  printf("FIRST(%c):%c\n",g[k].lhs[0],g[k].rhs[m][0]);
  else
{
 for(t=0;t<j;t++)
{
  if(g[k].rhs[m][0]==g[t].lhs[0])
  printf("Found match : %s\n",g[t].lhs);
  printf("FIRST(%c)=FIRST(%c)\n",g[k].lhs[0],g[t].lhs[0]);
  if(check(g[t].rhs[m][0])==1)
  printf("FIRST(%c):%c\n",g[k].lhs[0],g[t].rhs[m][0]);
 // if(m+1<strlen(g[k].rhs[0]))   {
 // if(check(g[t].rhs[m+1][0])==1)
 // printf("FIRST(%c):%c\n",g[k].lhs[0],g[t].rhs[m+1][0]);
 // }
}

}
 }

}

getch();
}
