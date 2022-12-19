#include<bits/stdc++.h>
using namespace std;
int main()
{
    ifstream fin(".input");
    int ans = 0;
    if(fin.fail())
    {
        cout << "File not found" << endl;
        return 0;
    }
    string tempString;
    while(getline(fin, tempString))
    {
        // cout<<tempString<<endl;
        if(tempString == "")
        {

        }

        
    }

    cout << ans << endl;
    return 0;
}