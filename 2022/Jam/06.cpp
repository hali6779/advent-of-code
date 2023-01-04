#include<bits/stdc++.h>
using namespace std;
int main()
{
    ifstream fin("06.input");
    int ans = 0;
    if(fin.fail())
    {
        cout << "File not found" << endl;
        return 0;
    }
    string tempString;
    while(getline(fin, tempString))
    {
        int len = tempString.length();
        for(int i = 13; i < len; i++)
        {
            set<char> s;
            for(int j = i - 13; j <= i; j++)
            {
                s.insert(tempString[j]);
            }
            if(s.size() == 14)
            {
                ans = i + 1;
                break;
            }

        }

    }

    cout << ans << endl;
    return 0;
}