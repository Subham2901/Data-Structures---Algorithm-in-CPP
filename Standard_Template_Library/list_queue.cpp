#include<iostream>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<set>
#include<unordered_set>
#include<map>
#include<algorithm>
#include<numeric>
#include<cmath>
#include<array>

using namespace std;
void explain_list()
{
    // Same as vector concept wise. But List allows us to insert at front but in case of vector we cannot pushfront.
    list<int> ls = {6,7};
    ls.push_front(1);
    for(int i :ls)
    {
        cout<<i<<endl;
    }

}
void explain_dequeue()
{
    // Same as vector but based on linked list.
    //Everything is same as before.
    deque<int> queue1 ={1,2,3,4,5};
    queue1.push_front(22);
    for(auto i :queue1)
    {
        cout<<i<<endl;
    }
}
void explain_stack()
{
    //Last In First Out Data Structure.
    // A container with only one opening - example.
    stack<int> st;
    st.push(1);
    st.push(2);
    // Now according to the concept of stack, u cannot access 1 without accessing 2.
    // Here there is no concept of iterators, or access the elements.
    // Only way to access 1 you have to pop all the elements before 1 to get one.
    cout<<st.top(); // Always print the top most elements.
    st.pop();// deletes the last element.
    st.empty(); // Returns true if stack is empty else false.

    // TO print stacks , write a while loop.
    while(st.empty()==false)
    {
        cout<<st.top()<<" ";
        st.pop();

    }
    // This is highly used.



}
void explain_queue()
{
    //Works like first in first out.( Like buying a ticket from the ticket counter).
    queue<int> q;
    q.push(2);
    q.push(3);
    q.push(4);
    while(q.empty()==false)
    {
        cout<<q.front()<<" ";
        q.pop();
    }

}
void explain_Priority_queue()

{
    // Underlying Data structure is a heap.
    // Stores the highest element at the top.
    priority_queue<int> pq;
    pq.push(2);
    pq.push(3);
    pq.push(5);
    pq.push(8);
    // Now if we try to fetch pq.top() it will fetch the highest element in the queue.
    //cout<<pq.top(); // prints the highest element in the queue.
    //pq.pop(); // pops the higest element from the queue.
    //cout<<pq.top();// Prints the second higest element of the queue.
    cout<<"The elements of the queue are ";
    while(pq.empty()==false)
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
    // We can also redesign the priority queue to store the smallest element at the top.
    // There will be a tiny syntax change in that case.
    priority_queue<int,vector<int>,greater<int>> pq1; // This will change the underlying data structure into minimum heap.
    // priority_queue<char,vector<char>,greater<char>> - This will store the characters. Update the data types here.
    // greater<int> is a comparator which can be used to customise heap. But mostly used are max heap and minimum heap.
    pq1.push(100);
    pq1.push(20);
    pq1.push(50);
    pq1.push(60);
    pq1.push(89);
    cout<<"The elements in the minimum heap are ";
    while(pq1.empty()==false)
    {
        cout<<pq1.top()<<" "; // This will print the numbers from smallest magnitude to largest.
        pq1.pop();

    }








}
void exlain_set()
{
    //stores only unique elements.
    // stores in ascending order.
    set<int> st;
    st.insert(2);
    st.insert(2);
    st.insert(2);
    st.insert(199);
    st.insert(40);
    st.insert(500);

    for(auto i:st)
    {
        cout<<i<<" ";
    }

// output - 2 40 199  so it will always print the numbers in ascending order. and will not repeat the numbers.
auto it =st.find(199); // it will be an iterator, which will point to the memory location where the value is location.
// if the value is not there then the iterator will point to the end location of the set.
// Thus the below if block checks if the iterator is not pointing towards the end location then in that case it will print the 
//the value of the iterator using *it.(it is a pointer)
if(it!=st.end())
{
    cout<<*it; // &it will print the memory location of the iterator.
}
cout<<endl<<"The count function will return 1 if the element is there and 0 if the element is not there";
int c=st.count(2);
cout<<c<<endl; // This will print 1 if the element is present in the set.
// To erase a range of values from the set.
auto begin_it = st.begin();
auto end_it= st.end(); // points at the location after the last element of the set.
end_it--;// Now it will be pointing towards the  last element.
st.erase(begin_it,end_it);// It will remove all the elements apart from the last element or the largest element of the set.
// Thus it will delete all the elements before the last element.
for(auto it3:st)
{
    cout<<it3<<" ";
}


st.erase(2);
// will remove or erase the element from the set
// We can also do that using iterators to erase the elements from a particular location of the set.
//auto it=st.end(); // points at the location after the last element.
//it--;// points at the last element.
//st.erase(it); //erases the last element.


// lower_bound(number) - Returns an iterator that returns the element that is greater than equal to the number.
// if there is no number that is greater that equal to the given number, it will end up pointing to the end.
// upper_bound(number)- Returns an iterator that is greater than  the number given.
st.insert(5);
st.insert(6);
st.insert(9);
st.insert(10);
st.insert(19);
cout<<endl<<endl;
for(auto i:st)
{
    cout<<i<<" ";
}
auto it6 =st.lower_bound(5);
cout<<endl<<"The usage of lower bound fucntion ";
if(it6!=st.end()) //To make sure the iterator is not pointing at the end.
{
    cout<<*it6;
}
else
cout<<"The number is not present in the set";

// upper_bound(number) - Returns the element larger than the given number.
auto it7=st.upper_bound(8);
cout<<endl<<"The usage of upper bound fucntion ";
if(it7 !=st.end())
{
    cout<<*it7;

}



}
void explain_multi_set()
{
    // It is very much similar to the set data structure,but it can store mulitple same(duplicate) values.
    // In this case the functions are very simple.
    multiset<int> ms;
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.insert(2);
    ms.insert(2);
    ms.insert(2);
    ms.insert(5);
    ms.insert(9);
    ms.insert(10);
    ms.insert(11);
    ms.insert(100);

    for(auto it:ms)
    {
        cout<<it<<" ";
    }
    auto it1= ms.find(2);// Finds the elements.
    int it2 = ms.count(2);// Returns the number of elements.
    cout<<*it1<<" ";
    cout<<endl;

    cout<<it2<<" ";
    cout<<endl;

   auto it=  ms.erase(ms.find(2)); //  This will,only erase one element out of the multiple elements as ms.find(2),
   // is an iterator which returns the memory location of the first place where 2 is found.
   // all the functions that has in set are also valid in multiset.
}

void explain_unordered_set()
{
    unordered_set<int>st;
    st.insert(1);
    st.insert(2);
    // All the functions are same as set or multiset but we need this because it has a better time complexity in an average case.
    // Thus in case of average case this gives us a better functionality for the search function find().
}

void explain_map()
{
    // map<int, string> mpp. // first is known as key and second is known as value.
    map<int,string> mpp;
    mpp[1]="Subham"; // This will map the string Subham with key 1.
    mpp[2]="Emily"; // This will map the string Emily with the key 2.
    mpp[3]="Aviroop"; 

    mpp.insert({4,"Sampurnaa"}); // There are two ways to insert values in map.

    for(auto it:mpp)
    {
        cout<<it.first<<" "<<it.second<<" ";
    }
    // Map doesnt store multiple values under same key. The latest one will get updated.
    // Maps always assigns the value based on the ascending order of the keys..
    // find function can be used to find the value associated with the key and vice versa.

    // to find the value associated with the key
    auto it= mpp.find(3);
    if(it!=mpp.end())
    {
        cout<<"The value associated with key 3 is  "<<(*it).second; // Remember this syntax.
    }
    else
    cout<<"The key is not valid";
    //lower_bound - Returns the first key greater than equal to the given number.
    // upper_bound - Returns the first key greater than the given number.


}

void explain_unordered_map()
{
    unordered_map<int,string> mpp; //Same as map but wihtout sorted values.
    mpp.insert({1,"Subham"});
    mpp.insert({3,"Aviroop"});
    mpp.insert({2,"Emily"});
    for(auto it:mpp)
    {
        cout<<it.first<<" "<<it.second<<" ";

    }
}

void explain_multi_map()
{
    multimap<int,char> mpp;
    mpp.insert({1,'a'});
    mpp.insert({1,'a'});
    mpp.insert({1,'a'});
    mpp.insert({1,'a'});
    mpp.insert({2,'a'});
    mpp.insert({2,'b'});
    mpp.insert({3,'a'});
    mpp.insert({1,'b'});
    for(auto it:mpp)
    {
        cout<<it.first<<"->"<<it.second<<endl;
    }
    // This will return  us all the values of the map sorted based on the key.

    //If we want to find a range of a particular key. i.e what are the values that is present under the same key.
    // We can use - .equal_range(key)- This will return a pair of iterators pointing at the first same key and the last same key.
    auto it=mpp.equal_range(1);
    for(auto i=it.first;i!=it.second;i++)// multimap map is not sorted, we must use i!= instead of i< to iterate through the loop.
    {
        cout<<(*i).first<<"->"<<(*i).second<<" ";
    }
    
}
void explain_algorithm()
{ // What is a sort function.
    // sort,accumulate,count,find,pow,next_permutation.
    int arr[7]={7,22,8,45,10,10,10};
    for(int i =0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort(arr+1,arr+5);
    cout<<"The sorted array is";
        for(int i =0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    // We can sort certain parts of the array based on the selection inside the sort function as shown above
    // Note sort(arr+1--> first element, arr+3(This will sort the array till before the mentioned element))

    // Sort function also works for vectors.
    vector<int> vec;
    vec.push_back(10);
    vec.push_back(9);
    vec.push_back(8);
    vec.push_back(7);
    vec.push_back(6);
    vec.push_back(5);
    cout<<endl<<"The entered vector is ";
    for(auto i:vec)
    {
        cout<<i<<" ";
    }
    sort(vec.begin(),vec.end());

    cout<<endl<<"The sorted vector is ";
    for(auto i:vec)
    {
        cout<<i<<" ";
    }
    // Accumulate function
    cout<<endl<<"The usage of the accumulate function. ";
    //cout<<accumulate(arr,arr+5,0); // This will sum the values of the array which the initial sum=0;
    cout<<endl<<accumulate(arr,arr+7,0)<<" "; // This will sum the values of the array with the inital sum=5;

    // Count function returns the value of how many times a  particular number appears.
    cout<<endl<<count(arr,arr+7,10); // This will search the number mentioned (1).
    // Find function.
    auto it= find(arr,arr+7,10);
    if(it==arr+7)
    {
        cout<<"Not found";
    }
    cout<<endl<<*it; // This will return the first place where the number was available.
    // Max Element  and Min Element.
    cout<<endl<<"THe max element of the array is "<<*(max_element(arr,arr+7));
    // Min Element 
    cout<<endl<<"The minimum element of the array is "<<*(min_element(arr,arr+7));
    // Reverse function - Used to reverse an array.
    int arr1[7]={7,22,8,45,10,10,10};
    cout<<endl<<"The reversed array is ";
    reverse(arr1,arr1+7);
    for(int i=0;i<7;i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl<<"The reverse vector is ";
    reverse(vec.begin(),vec.end());
    for(auto i:vec)
    {
        cout<<i<<" ";
    }

}
void explainNextPermutation()

{
    string str = "abc";
    do
    {
        cout<<str<<endl;

        /* code */
    } while (next_permutation(str.begin(),str.end())); // returns the possible combination or permutations using the string.
    // abc,acb,bac,bca,cab,cba

    // This only do permuations in sorted order of the string alphabatically.
    string str1 = "bac";
    do
    {
        cout<<str1<<endl;

        /* code */
    } while (next_permutation(str1.begin(),str1.end()));
    // output -> bac,bca,cab,cba.
    string str3 = "ebcda";
    do
    {
        cout<<str3<<endl;
    }while(prev_permutation(str3.begin(),str3.end())); // returns the permutationsin reverse sorted order.

    // works for a vector, string.






}    
bool internalComparator(int el1,int el2)
{
    if(el1<el2) return false;
    return true;
}
bool internalComparator1(pair<int,int>el1,pair<int,int>el2)
{
    if(el1.second>el2.second) return true;
    if(el1.second<el2.second) return false;
    if(el1.first<el2.first) return true;
    return false;

}
void explain_internalcomparator()
{
    // el1 5
    // el2 is 6
    // there is an internal comparator that the sort function uses to compare between element 1 and 2 and places them at 
    // its right place .
    // Now if we want to reverse the array this is where the place of comparator comes in.
    // tells true if el1 is before el2
    // tells false if el1 has to be after el2.
    int arr[]={5,6,7,8,9,1,2,3,4};
    sort(arr,arr+9,internalComparator); // Like this we can override the built in internal comparator of the array.
    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<" ";
    }

}
void explain_comparator()
{
    pair<int,int> arr[]={{1,6},{1,5},{1,3},{2,5},{3,9},{2,9}};
    // Sort it according to the second element of the pair.
    // {2,9},{3,9},{2,5},...
    sort(arr,arr+6,internalComparator1); // We just need to think from the perspective of the two elements.
    for(int i=0;i<6;i++)
    {
        cout<<"{"<<arr[i].first<<","<<arr[i].second<<"}";
    }


}
int main()

{
    //explain_list();
    //explain_dequeue();
    //explain_stack();
   // explain_queue();
   //explain_Priority_queue();
   //exlain_set();
   //explain_multi_set();
   //explain_map();
   //explain_unordered_map();
   //explain_multi_map();
 // explain_algorithm();
  //explainNextPermutation();
   explain_comparator();

    return 0;

}