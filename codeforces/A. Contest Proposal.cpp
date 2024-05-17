#include<bits/stdc++.h>


using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t;i++)
    {
        int n;
        cin >> n;
        int a[n],b[n];
        for(int j = 0; j < n;j++)
        {
            cin >> a[j];
        }
        for(int j = 0; j < n;j++)
        {
            cin >> b[j];
        }
        int cnt = 0;
        for(int l = 0,k = 0; l < n,k < n;l++,k++)
        {
            while(a[l] > b[k] && k < n)
            {
                cnt++;
                k++;
            }
        }
    cout << cnt<< endl;
    }


    return 0;
}
