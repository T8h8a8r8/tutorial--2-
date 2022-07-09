#include<stdio.h>
int main()
{
    int a[3][3];
    int i,j,r,c,sum;
    printf("\n how many number of rows and columns in the matrix:-");
    scanf("%d %d",&i,&j);
    printf("enter the elements:-");
    for(r=0;r<i;r++)
    {
        for(c=0;c<j;c++)
        {
            scanf("%d",&a[r][c]);
        }
    }
    for(r=0;r<i;r++)
    {
        sum=0;
        for(c=0;c<j;c++)
        {
            sum=sum+a[c][r];
        }
        printf("the number of columns elements in the matrix=%d\n",sum); 
    }
    
    return 0;
}
