#include<stdio.h>
#include<string.h>
main()
{
    int i,j,k,lM,lP,l,s;
    char M[100],P[100],T[100];
    gets(M);
    gets(P);
    lM=strlen(M);
    lP=strlen(P);
    for(i=0;M[i]!='\0';i++)
    {
        s=0;
        if(M[i]==P[0])
        {
            for(j=0,k=i;j<lP;j++,k++)
            {
                if(P[j]!=M[k])
                {
                    s=1;
                    break;
                }
            }
            if(s!=1)
            {
                for(j=i;M[j]!='\0';j++)
                {
                    M[j]=M[j+lP];
                }
                i=-1;
            }
        }
        //printf("\n%s\n",M);
    }
    printf("\n%s\n",M);
}