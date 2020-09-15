#include<stdio.h>
int main ()
{   int element [3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    printf("The matrix is :\n");
    for (int i=0; i<3; i++)
    {   for (int j=0; j<3; j++)
            {
                int *p = &element[i][j];
                printf("%d\t",*p);
            }
        printf("\n");
    }
    int sum;
    for (int i=0; i<3; i++)
    {
        int *p = &element[i][i];
        sum = sum+*p;
    }
    printf("\nThe sum of Digonal elements of matrix is: %d \n",sum);
    return 0;
}
