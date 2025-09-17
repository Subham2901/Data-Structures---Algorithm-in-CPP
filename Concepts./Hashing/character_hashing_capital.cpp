#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;

    vector<char> charr(n);
    for(int i=0;i<n;i++)
    {
        cin>>charr[i];
    }

    vector<int> capital_alp(26);
    for(int i=0;i<n;i++)
    {
        capital_alp[charr[i]-'A']++;
    }

    int q;
    char c;
    cin>>q;
    cout<<endl;
    while(q--)
    {
        cin>>c;
        cout<<capital_alp[c-'A']<<" ";
    }

}