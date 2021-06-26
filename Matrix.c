#include<stdio.h>
int main()
{
    int arr[3][3],i,j,s=0;
    printf("Input elements in the matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("element-[%d][%d]: ",i,j);
            scanf("%d",&*(*(arr+i)+j));
        }
    }
    printf("\n\nThe matrix is:\n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",*(*(arr+i)+j));
        }
        printf("\n\n\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            s=s+arr[i][j];
        }    
    }
    
    for(i=0;i<3;i++)
    {
        for(j=(3-1)-i;j>=0;j++)
        {
            s=s+arr[i][j];
            break;
        }    
    }
    
    printf("Sum of all Diagonal elements=%d",s);
    
    return 0;
}
