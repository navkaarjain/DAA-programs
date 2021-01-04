//linear search 
#include<stdio.h>
void main()
{int a[10],i,x,m;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter element of array: ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter element to search: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
            if(a[i]==x)
            break;
            
        }
    if(i<n)
        printf("Element found");
    else
        printf("Element not found");
}