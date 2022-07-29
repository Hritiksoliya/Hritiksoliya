#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n,*ptr;
 
    printf("Enter Number of Elements : ");
    scanf("%d",&n);
 
    ptr=(int *)malloc(n*sizeof(int));
 
    if(ptr==NULL)
    {
        printf("Memory Not Allocated");
    }
    else
    {
        for(i=0;i<n;i++)
        {
            printf("Enter Element : ");
            scanf("%d",ptr+i);
        }
 
        printf("All Elements : ");
        for(i=0;i<n;i++)
        {
            printf("%d ",*(ptr+i));
        }
 
        free(ptr);
    }
 
    return 0;
}
