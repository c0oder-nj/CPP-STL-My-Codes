// Basically it is based on heap data structure 
// apka max element starting me aa jayega agr apne max heap banaya hai toh nahi toh min element aa jayega agr apne min heap banaya hai toh

#include<iostream>
#include<queue>

using namespace std;
int main(){
    //max heap - max element have high priority

    priority_queue<int>  maxi;
    maxi.push(10);
    maxi.push(5);
    maxi.push(15);
    maxi.push(20);
    maxi.push(25);
    maxi.push(45);

    // since i first insert 10 so 10 would be at front but in the case of prio queue default is max heap wala concept so my 15 should be show in front let's see

    cout<<"Element jo pehle bahar aayega jisko priority jayada hai vo hai "<<maxi.top()<<endl;

    // now in order to create min heap --> min element have high priority
    priority_queue<int, vector<int>, greater<int>> mini;
    mini.push(10);
    mini.push(15);
    mini.push(1);

    cout<<"Jis element ki priority high hogi vo pehle niklega vo hai mera "<<mini.top()<<endl;
    mini.pop();

    cout<<"Ab jo niklega vo hoga "<<mini.top()<<endl;
    mini.pop();

    cout<<mini.top()<<endl;
    cout<<mini.size()<<endl;

    // now come back to max heap

    cout<<maxi.size()<<endl;
    int size = maxi.size();
    for(int i=0; i<size; i++){
        cout<<maxi.top()<<" "; // print sorted element max to min 45 25 20 15 10 5 prints in descending order
        // similarly min heap will store min first so print in ascending order  
        maxi.pop();
    }

    cout<<"Khaali hai kya bhai "<<maxi.empty()<<endl;
    return 0;
}