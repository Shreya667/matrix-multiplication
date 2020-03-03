#include <stdio.h>
#include <stdlib.h>                                                             //Added so can use any system command(command use in
                                                                                // command prompt) in this case "cls" used to clear screen
int main()
{
    int r1,c1,r2,c2;                                                            //No of row and columns variable for both matrix.
    int i,j,k;                                                                  //iteration variables.
    int first[10][10],second[10][10],multiply[10][10];                          //Matrix variables.

    printf("enter number of rows and columns of first matrix : ");
    scanf("%d%d", &r1, &c1);

    printf("enter number of rows and columns of second matrix : ");
    scanf("%d%d", &r2,&c2 );

    while( c1!= r2)
        {
            system("cls");
            printf("\n Matrix is possible only if number of columns in \n first matrix is same as number of rows in second matrix\n\n");
            printf("Enter rows and columns of first matrix : ");
            scanf("%d%d",&r1,&c1);
            printf("Enter rows and columns of second matrix : ");
            scanf("%d%d",&r2,&c2);
        }

    system("cls");                                                              //cls is used to clear screen.
    printf("Enter elements of First matrix : \n\n");                            //if you don't know what \n is read about escape sequences in C.
    for(i=0; i<r1; i++)
        for(j=0; j<c1; j++)
            {
                printf("Enter element at place %d, %d : ",i+1,j+1);
                scanf("%d", &first[i][j]);                                      //2D array defined above was not taken hence error.
            }

    system("cls");
    printf("Enter elements of second matrix : \n\n");
    for(i=0; i<r2; i++)
        for(j=0; j<c2; j++)
            {
                printf("Enter elements b %d, %d : ",i+1,j+1);
                scanf("%d", &second[i][j]);
            }
    for(i=0; i<r1; i++)
        {
            for(j=0; j<c2; j++)                                                 //j=- gives error, valid value must be assigned.
            {
                multiply[i][j]=0;
            }
        }
    for(i=0; i<r1; i++)
        for(j=0; j<c2; j++)
            for(k=0; k<c1; k++)
                {
                    multiply[i][j]+=first[i][k]*second[k][j];                   //Again a & b were taken instead of defined array.
                }

    system("cls")
    printf("\n\n\n\n output matrix : ");
    for(i=0; i<r1; i++)                                                         //Did a little formating so output is bit clean.
       {
            printf("\n   ");
            for(j=0; j<c2; j++)
                printf("%d ",multiply[i][j]);
       }

    printf("\n\n\n\n");
    return 0;

}





