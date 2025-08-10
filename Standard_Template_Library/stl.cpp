#include<iostream> // This is a header file for input and output operations so that we can use cout and cin.
using namespace std; // This allows us to use standard library features without pregiving the std:: prefix.
// Standard Template Library (STL) is a powerful set of C++ template classes to provide general-purpose classes and functions.
// STL provides algorithms and data structures like vectors, lists, queues, stacks, etc.
// Here we are learning about pairs in STL.
// A pair is a simple container defined in the STL that can hold two values of different types.
void explainpair()
{
    pair<int,int>p1; // Declaration of a pair p1 that can hold two integers.
    pair<int,int>p2(10,20); // Declaration and initialization of a pair p2 with values 10 and 20.
    pair<int,int>p3={30,40}; // Declaration and initialization of a pair p3 using uniform initialization syntax.
    // In the above three ways we can declare and initialise pairs in STL in CPP.
    cout<< "p1: " << p1.first << " " << p1.second << endl; // Outputs the first and second elements of pair p1.
    cout<< "p2: " << p2.first << " " << p2.second << endl; // Outputs the first and second elements of pair p2.
    cout<< "p3: " << p3.first << " " << p3.second << endl; // Outputs the first and second elements of pair p3.
    // We can also assign values to pairs after declaration.
    p1.first = 50; // Assigning value 50 to the first element of pair p1.
    p1.second = 60; // Assigning value 60 to the second element of pair p1.
    cout<< "p1 after assignment: " << p1.first << " " << p1.second << endl; // Outputs the updated values of pair p1
    // We can also use pairs to hold different types of values.
    pair<string, double> p4("pi", 3.14); // Declaration of a pair p4 that holds a string and a double.
    cout << "p4: " << p4.first << " " << p4.second << endl; // Outputs the first and second elements of pair p4.

}     
int main() // The main function where the program execution starts.
{
    explainpair(); // Calling the function to demonstrate the use of pairs in STL.
    return 0; // Returning 0 indicates that the program ended successfully.
}