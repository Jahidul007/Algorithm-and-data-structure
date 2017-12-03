#include<stdio.h>
#include<string.h>
/** Algorithm 3.1
1. [Find the index P] set k=index(T,P)
2. Repeat while k!=0
    a) [Delete P from T]
    set T=DELETE(T,Index(T,P),LENGTH(P))
    b) [Update index] Set K=Index(T,P)
3.Write: T
4.Exit
**/
/*
int strlen( char Text[]){
 int i;
 for(i=0;Text[i]!='\0';i++){}
return i;


}*/
int index(char T[], char P[])
{
    int i,j;
    int flag=0;
    int k=-1;
    //int lengthOfT=strlen(T);
    //int lengthOfP=strlen(P);

    //printf("%s",T);
    //printf("%d",strlen(P));
    for(i=0,j=0; i<strlen(T),j<strlen(P); i++)
    {
        //printf("i=%d T[i]=%c  j=%d P[j]=%c\n",i,T[i],j,P[j]);
        if(T[i]==P[j])
        {
            j++;
            if(flag==0)
            {
                flag=1;
                k=i;
            }

            continue;


        }
        else
        {
            flag=0;
            j=0;
            k=-1;


        }
    }


    return k;



}

int main()

{
    char T[]="ammmnnnt";

    char P[6]="mn";
// char *text;
    int i;
    int k=index(T,P);  // k is the index of pattern
    // printf("%d",k);
    int strlen_T=strlen(T);  //length of T
    int strlen_P=strlen(P);   //length of P

    char text[31];  // text is a string
    for(i=0; i<strlen_T; i++)
    {
        text[i]=T[i];
    }   // copy all values of T to text
    text[i]='\0';

    while(k!=-1)
    {

        for(i=k; i<strlen(T); i++)
        {

            text[i]=text[i+strlen_P];  // replace the characters after deleting the pattern
        }
        text[i]='\0';    //put null value at the end of text



        k=index(text,P);   // again index, whether it has the pattern
        // printf("%d",k);
        //k=-1;

    }

    printf("%s",text);
    return 0;
}
