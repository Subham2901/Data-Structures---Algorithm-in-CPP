#include<iostream>
#include<vector>
using namespace std;
// A vector is a sequence container that encapsulates dynamic size arrays.
// Vectors are part of the Standard Template Library (STL) in C++.
void explainvector()
{
    vector<int>v1; // Declaration of a vector v1 that can hold integers.
    vector<int>v2(5, 10); // Declaration and initialization of a vector v2 with 5 elements, each initialized to 10.
    vector<int>v3{1, 2, 3, 4, 5}; // Declaration and initialization of a vector v3 using uniform initialization syntax.
    // In the above three ways we can declare and initialise vectors in STL in CPP.
    cout << "v1 size: " << v1.size() << endl; // Outputs the size of vector v1, which is 0.
    cout << "v2 size: " << v2.size() << endl; // Outputs the size of vector v2, which is 5.
    cout << "v3 size: " << v3.size() << endl; // Outputs the size of vector v3, which is 5.
    // We can also add elements to vectors after declaration.
    v1.push_back(20); // Adds the element 20 to the end of vector v1.
    v1.push_back(30); // Adds the element 30 to the end of vector v1.
    cout << "v1 after push_back: ";
    // we can also use emplace_back to add elements to the end of the vector.
    v1.emplace_back(40); // Adds the element 40 to the end of vector v1.

    // Vectors also have zero-based indexing, so we can access elements using indices.
    // SO we can iterate till vector.size() to access all elements.
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " "; // Outputs the elements of vector v1.
    }
    cout << endl; 



    // iterators can also be used to traverse through the vector.
    //Iterators are used to point to the memory address of the elements in the vector.
    cout << "Using iterators: ";
    vector<int>::iterator beginItr=v1.begin(); // This creates and iterator pointing to the first element of the vector v1 by pointing to the memory address of the first element. 
    vector<int>::iterator endItr = v1.end(); // This creates an iterator pointing to the end of the vector v1, which is one PAST the last element.
    // We can avoid using such a long syntax by using the auto keyword.
    auto beginItr2 = v1.begin(); // This creates an iterator pointing to the first element of the vector v1.
    auto endItr2 = v1.end(); // This creates an iterator pointing to the end
    for(auto it = beginItr2; it != endItr2; ++it) {
        cout << *it << " "; // Dereferencing the iterator to get the value it points to.
    }
    cout << endl;

// Usage of iterator in a loop:
for(vector<int>::iterator i=beginItr2;i<endItr2;i++)
{
    cout<<*i<<" "; // Here the * symbol is used to say that we want to print the value at the location pointed by the i iterator.

    // If we wanted to print the adress of the location we would have used & instead.
}



    // We can also use range-based for loop to iterate through the vector.
    cout << "Using range-based for loop: ";
    for (const auto& element : v1) {
        cout << element << " "; // Outputs each element in vector v1.
    }
    //foreach loop is also used to iterate through the vector.
    cout << endl;




    // We can also use the at() function to access elements at a specific index.
    cout << "Element at index 0: " << v1.at(0) << endl; // Outputs the first element of vector v1.
    cout << "Element at index 1: " << v1.at(1) << endl; // Outputs the second element of vector v1.
    cout << "Element at index 2: " << v1.at(2) << endl; // Outputs the third element of vector v1.




    // We can also use the front() and back() functions to access the first and last elements of the vector.
    cout << "First element: " << v1.front() << endl; // Outputs the first element of vector v1.
    cout << "Last element: " << v1.back() << endl; // Outputs the last element of vector v1.
    
    
    
    // We can also remove elements from the vector using pop_back() function.
    v1.pop_back(); // Removes the last element of vector v1.
    cout << "v1 after pop_back: ";
    for (const auto& element : v1) {
        cout << element << " "; // Outputs the elements of vector v1 after removing the last element.
    }
    cout << endl;



    // We can also clear the vector using clear() function.
    v1.clear(); // Clears all elements from vector v1.
    cout << "v1 size after clear: " << v1.size() << endl; // Outputs the size of vector v1 after clearing, which is 0.
   
   
   
    // Vectors can also hold different types of values.
    vector<pair<int, string>> v4; // Declaration of a vector v4 that can hold pairs of integers and strings.
    v4.push_back(make_pair(1, "one")); // Adds a pair (1, "one") to vector v4.
    v4.push_back(make_pair(2, "two")); // Adds a pair (2, "two") to vector v4.
    cout << "v4 pairs: ";
    // Iterating through vectors
    vector<int> vec={1,2,3,4,5,6};
    for(int i = 0; i<vec.size();i++)
    {
        cout<<vec[i]<<" ";

    }
    cout<<endl;





}
int main() // The main function where the program execution starts.
{
    explainvector(); // Calling the function to demonstrate the use of vectors in STL.
    return 0; // Returning 0 indicates that the program ended successfully.
}  