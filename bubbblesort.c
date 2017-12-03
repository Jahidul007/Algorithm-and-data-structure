#include<stdio.h>
#include<conio.h>
void bubble_sort(int[], int);
void main()
{
    int ara[30],num,i;
    printf("\nEnter no of elements of array: ");
        scanf("%d",&num);
    printf("\nEnter array elements \n");
    for(i=0;i<num;i++)
        scanf("%d",&ara[i]);
    bubble_sort(ara,num);
    getch();
}
void bubble_sort(int iara[],int num)
{
    int i,j,k,temp;
    printf("\nUnsorted data:");
    for(k=0;k<num;k++)
    {
       printf("%5d",iara[k]) ;
    }
    for(i=1;i<num;i++){
        for(j=0;j<num-1;j++)
        {
            if(iara[j]>iara[j+1])
            {
                temp=iara[j];
                iara[j]=iara[j+1];
                iara[j+1]=temp;
            }

        }


    }
            printf("\nSorted list : ");
            for(k=0;k<num;k++)
            printf("%5d",iara[k]);
            printf("\n");
}


