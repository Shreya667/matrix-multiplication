#include <stdio.h>


int main()
{
    int r1,c1,r2,c2,i,j,k,a,b;
    int first[10][10],second[10][10],multiply[10][10];

    printf("enter number of rows and columns of first matrix");
    scanf("%d%d", &r1, &c1);

    printf("enter number of rows and columns of second matrix");
    scanf("%d%d", &r2,&c2 );

    while( c1!= r2)
        {

        printf("no Multiplication");
        printf("enter rows and columns of first matrix");
        scanf("%d%d",&r1,&c1);
        printf("enter rows and columns of second matrix");
        scanf("%d%d",&r2,&c2);

    }
    printf("enter elements of matrix");
    for(i=0; i<r1; i++)
    for(j=0; j<c1; j++)
    {
        printf("enter elements a %d%d",i+1,j+1);
        scanf("%d", &a [i][j]);

    }
    printf("enter elements of second matrix");
    for(i=0; i<r2; i++)
    for(j=0; j<c2; j++)
    {
        printf("enter elements b %d%d",i+1,j+1);
        scanf("%d", &b [i][j]);
    }

    for(i=0; i<r1; i++)
    for(j=-; j<c2; j++)
    {
        multiply[i][j]=0;
    }

    for(i=0; i<r1; i++)
    for(j=0; j<c2; j++)
    for(k=0; k<c1; k++)

    {

        multiply[i][j]+=a[i][k]*b[k][j];
    }
    printf("output matrix");
    for(i=0; i<r1; i++)
    for(j=0; j<c2; j++)
    {

        printf("%d",multiply[i][j]);
        if(j==c2-1)
            printf("\n\n");

    }

return 0;
}





