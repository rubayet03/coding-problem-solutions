//header files 
#include<iostream>
#include<vector>
#include<string>
#include<set>
#include<map>
#include<algorithm>
// macros
#define endl "\n"
#define ll long long

using namespace std;

// function's section

int main()
{
    //code fast korar ninza technique
    ios::sync_with_stdio();
    cin.tie(0);
    // code starts here
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        int i_odd=0,i_even=0,ii_odd=0,ii_even=0;
        cin >> n;
        vector<int>var(n);
        for(int i = 0;i < n;i++)
        {
            cin >> var[i];
        }

        for(int i = 0;i < n;i += 2)
        {
            if(var[i]%2 != 0)
            {
                i_odd++;
            }
            else if(var[i]%2==0)
            {
                i_even++;
            }
            
        }
        for(int i = 1;i < n;i += 2)
        {
         if(var[i]%2 != 0)
            {
                ii_odd++;
            }
            else if(var[i]%2==0)
            {
                ii_even++;
            }
        }
        if((i_even>0 && i_odd>0)||(ii_even>0 && ii_odd > 0))
        {
            cout << "NO"<<endl;
        }
        else
        {
            cout << "YES"<<endl;
        }
    }
    return 0;

}
