#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array ";
    cin>>n;
    vector <char> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    // The character array is
    for(auto i:arr)
    {
        cout<<i<<" ";
    }

    cout<<endl;
    // Now we will define the required hash map.
    vector<int> hash(257); // as total characters are 256.
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]++;
    }

    cout<<endl;
    for(auto i:hash)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    int q;
    char num;
    cin>>q;
    while(q--)
    {
        cin>>num;
        cout<<"THe entered character appeared "<<hash[num]<<" times"<<endl;
    }
    return 0;

}