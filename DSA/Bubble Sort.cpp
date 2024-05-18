#include<bits/stdc++.h>


using namespace std;



int main()
{
    int arr[20] = {15,16,19,8,1,5,6};
    int i = 0,len = 0;
    while(arr[i] != '\0')
    {
        i++;
        len++;
    }
    for(int j = 1; j <= len-1;j++)
    {
        for(int i = 0; i < j;i++)
        {
            if(arr[i] > arr[j])
            {
                int var;
                var = arr[i];
                arr[i] = arr[j];
                arr[j] = var;
            }
        }
    }
    for(int i = 0; i < len;i++)
    {
       cout << arr[i] << " ";
    }

    return 0;
}
