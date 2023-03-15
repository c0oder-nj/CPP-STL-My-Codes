#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque<int> d; // intialize an empty double ended queue

    cout<<d.size()<<endl;
    d.push_back(9);
    d.push_front(1);

    d.push_front(2); // 2 now at front 

    d.push_back(10);
    for(int ele:d){
        cout<<ele<<" ";
    }

    int first_ele = d.front();
    int last_ele = d.back();

    cout<<"First element is "<<first_ele<<" Last element is "<<last_ele<<endl;

    cout<<d.at(0)<<endl;

    d.erase(d.begin(),d.begin()+1); //needs range | in range erase deque values
    for(int ele:d){
        cout<<ele<<" ";
    }


    return 0;
}

