// LIFO last in first out lifo data structure

#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<string> s;
    s.push("niraj");
    s.push("harsh");
    s.push("Sahil");

    string top = s.top();
    cout<<top<<endl;

    s.pop(); // removes first element and returns nothing 

    cout<<s.top()<<endl;

    cout<<s.empty()<<endl; //returns bool values true or false

    cout<<s.size()<<endl;

}