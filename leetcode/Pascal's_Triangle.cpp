#include<bits/stdc++.h>

#define ll long long
using namespace std;


void print_vector(vector<vector<int>>var,int numRows)
{
    for(int i = 0; i < numRows;i++)
    {
        for(int j = numRows-i; j > 0;j--)
        {
            cout << " ";
        }

        for(int j = 0; j <= i;j++)
        {
            cout << var[i][j] << " ";
        }
        cout << "\n";
    }
};

int main()
{
    int numRows;
    cin >> numRows;

    vector<vector<int>> var;

    for(int i = 0; i < numRows;i++)
    {
    vector <int> row(i+1,1);
    for(int j = 1; j < i;j++)
    {
        row[j] = var[i-1][j-1] + var [i-1][j];
    }
    var.push_back(row);
    }

    print_vector(var,numRows);

}
