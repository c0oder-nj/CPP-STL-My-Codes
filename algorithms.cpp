// pre built algorithms like binary search sorting in cpp stl use it directly don't need to implement the whole concept again

#include<algorithm>
#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);

    cout<<"search for 5 --> "<<binary_search(v.begin(),v.end(),5)<<endl;

    // in order to understand lower bound and upper bound 
    // https://jimmy-shen.medium.com/lower-bound-and-upper-bound-of-c-2f635619fa97

    // Quick summary
    // upper bound return first element which is >value. If not, return end().
    // lower bound return first element which is ≥value. If not, return end().

    cout<<"Lower Bound --> "<<lower_bound(v.begin(),v.end(),5) - v.begin()<<endl;
    cout<<"Upper Bound --> "<<upper_bound(v.begin(),v.end(),5) - v.begin()<<endl;


    int a = 5, b = 10;
    int max_ele = max(a,b); // same min() bhi work krta hai 
    cout<<max_ele<<endl;

    swap(a,b);
    cout<<"a now become "<<a<<endl;
    cout<<"b now become "<<b<<endl;


    string s = "Niraj Bolte";
    reverse(s.begin(),s.end());
    cout<<"Reversed string is "<<s<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"Before Sorting"<<endl;
    for(auto ele:v){
        cout<<ele<<" ";
    }cout<<endl;

    cout<<"After Sorting "<<endl;
    sort(v.begin(),v.end()); // this sort is based on introsort() --> combination of three algorithms quick sort, heap sort, insertion Sort
    for(auto ele:v){
        cout<<ele<<" ";
    }cout<<endl;

    return 0;
}