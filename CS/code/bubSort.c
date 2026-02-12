#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[] = {98, 12, 87, 4, 65, 23, 54, 33, 48, 78};
    int len = sizeof(arr) / sizeof(int);

    printf("%d\n", len);


    for (int i = 0; i < len; i++)
    {
        for (int j = i+1; j < len; j++)
        {
            if (arr[i] > arr[j])
            {
                arr[i] = arr[i] ^ arr[j];
                arr[j] = arr[i] ^ arr[j];
                arr[i] = arr[i] ^ arr[j];
            }
            
        }
        
    }
    
    for (int i = 0; i < len; i++)
    {
        printf("%d ",arr[i]);
    }
    

    return 0;
}
