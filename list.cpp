#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int> l;
    cout<<"Size  of the list is "<<l.size()<<endl;
    l.push_back(7);
    l.push_front(1);

    // l.insert(l.begin(),5);
    l.push_back(7);
    l.insert(l.end(),5); // insert before the iterator value

    for(int ele: l){
        cout<<ele<<" ";
    }
    return 0;
}