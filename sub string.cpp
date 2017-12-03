#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
 char str[100],sub[100];
 int i,j,k,l,f=0,g=0,m,h,v;
 printf("\n Enter the string:");
 gets(str);

 printf("\n Enter the substring:");
 gets(sub);

 l=strlen(sub);
 m=strlen(str);

 printf("%d %d",l,m);
 for(i=0;str[i]!='\0';i++)
 {
  k=i;
  j=0;
  while(sub[j]!='\0')
  {
   if(str[k]==sub[j])
   {
    g++;
    if(g==l)
    {
     f=1;
     h=i;
    }
   }
   else if(str[k]!=sub[j])
   {
    break;
   }
   j++;
   k++;
  }
 }
 if(f==1)
 {
  printf("\n sub string is found\n\n\n");
  for(i=0;i<m;i++)
  {
   if(i<h)
    printf("%c",str[i]);
   else if(i>h&&i<(h+l))
    continue;
   else if(i>(h+l))
    printf("%c",str[i]);
  }
 }
 else if(f==0)
 {
  printf("\n substring not found:");
 }
 getch();
 return(0);
}
