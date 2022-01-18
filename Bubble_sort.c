#include<stdio.h>
void Bubble_sort(int arr[], int sz)
{
    int i = 0;
    int j = 0;
    int temp = 0;
    for (i = 0; i < sz - 1; i++)
    {
        for (j = 0; j < sz - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int a = 0;
    int arr[] = { 9,8,7,4,5,7,9,6,5,4,8,97,6,5,4,3,2,1,0 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    Bubble_sort(arr, sz);
    for (a = 0; a < sz; a++)
    {
        printf("%d ", arr[a]);
    }
    return 0;
}