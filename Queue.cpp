#include<iostream>
#include<queue>

using namespace std;
int main(){
    queue<string> q;
    q.push("NIraj");
    q.push("Harsh");
    q.push("Ruchi");
    cout<<q.front()<<endl; // iterator pointer points to the first element of queue jo pehle push(insert hua)
    q.pop(); // returns nothing pops the first element of the queue

    cout<<q.front()<<endl;
    cout<<q.size()<<endl;

    // all task complexity is O(1)

    return 0;
}