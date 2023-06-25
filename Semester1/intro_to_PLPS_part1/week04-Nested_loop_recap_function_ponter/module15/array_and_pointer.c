#include<stdio.h>

int main()
{
    int arr[5]={5,10,15,20,25};
    printf("0th index er address %p\n", &arr[0]);
    printf("just arr er address %p\n", arr);
    printf("0th index er value %d\n", arr[0]);
    printf("just arr er value %d\n", *arr);

    printf("1th index er value %d\n", *(arr+1));
    printf("1th index er value %d\n", *(1+arr));
    printf("1th index er value %d\n", arr[1]);
    printf("1th index er value %d\n", 1[arr]);

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *(arr+i));
    }
    

    
    return 0;
}