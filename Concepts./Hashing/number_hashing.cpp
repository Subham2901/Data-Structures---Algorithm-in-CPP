#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array "<<endl;
    cin>>n;
    vector<int> arr(n);
    
    int max_element =INT_MIN; 

    for(int i = 0;i<n;i++)
    {
       // cout<<"Enter the element ";   // Loop to insert the element of the array.
        cin>>arr[i];
        if(arr[i]>max_element)
        {
            max_element =  arr[i];
        }
    }

    // The array that you have entered is :
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"The maximum element is "<<max_element<<endl;
    
    // Now we will take another vector of the size one more than the largest element of the array.
    vector <int> hash(max_element+1);
   // hash={0}; // Assign all the elements of that vector as 0.
   // The above line was important for normal arrays to set explicitely everything to zero.
   // in vectors that happens by default.
   // IF we set use this line with vectors then it will reduce the size of the vector and initialise the entire vector as 0.

    for(int i =0;i<(max_element+1);i++)
    {
        cout<<hash[i]<<" ";
    }
    // Now we will perform the pre-computation step. 
    // i.e we will iterate through all the elements of the original vector and for each number we will add the counter as 1.
    for(int i =0;i<n;i++)
    {
        hash[arr[i]]++;
        
    }

    // THE UPDATED HASH MAP IS 
    cout<<endl<<"The updated hash map is "<<endl;
    // for(int i=0;i<(max_element+1);i++)
    // {
    //     cout<<hash[i]<<" ";
    // }
    for(auto i:hash)
    {
        cout<<i<<" ";
    }

    cout<<endl;
   
    // Now the query logic.
    int query; // This will ask the user that in total how many queries there will be.
    cin>>query;
    int num;
    while(query--)
    {
        cin>>num;
        cout<<"The entered number has appeared "<<hash[num]<<" times"<<endl;
    }


    return 0;
}