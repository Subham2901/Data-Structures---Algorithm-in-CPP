#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n; //  Take the input from the user for the size of the array.
    vector<char> charr(n);
    for(int i =0;i<n;i++)
    {
        cin>>charr[i];// take the input for the character.
    } 

    //Printing the array
    for(auto i:charr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    // Now creating the hashmap for just the small characters.
    vector<int> small_alphabets(26); // This will by default create the vector with all zeros.
    for(int i=0;i<26;i++)
    {
        small_alphabets[charr[i]-'a']++; // This logic will restrict the 
        // the vector size to 26 by (a = 97-97=0),(b=98-97=1).

    }
    cout<<endl;
    // for(auto i:small_alphabets)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // Now query
    int q;
    cin>>q;
    char num;
    while(q--)
    {
        cin>>num;
        cout<<"This character has appeared "<<small_alphabets[num-'a']<<" times"<<endl;
    }
    return 0;
}