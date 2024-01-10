
#include <stdio.h>

int main()
{
    int arr[5],i;
    printf("enter numbers:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    int small, large;

    small = arr[0];//Assume first element is smallest
    large = arr[0];//Assume first element is largest

    for (i = 1; i < 5; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
        }
        if (arr[i] > large)
        {
            large = arr[i];
        }
    }
    printf("Largest element is : %d\n", large);
    printf("Smallest element is : %d\n", small);
    return 0;
}
