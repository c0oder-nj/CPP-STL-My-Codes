// map is a datastructure in which data is stored in the key value format 
// e.g. key is love value is scorpip so love is pointing towards scorpio

// just like the dictionary in python 

// all keys are unique

// individual (single) key can only point single value

// two different keys can point the same values

// default map is ordered map that store values in ascending order 

// insert erase find count takes O(logn)
// unordered map ki searching complexity O(1) hoti hai 

#include<iostream>
#include<map>

using namespace std;

int main(){
    map<int,string> m;
    m[19] = "Niraj";
    m[2] = "Harsh";
    m[6] = "Pragya";

    // Another method for insertion

    m.insert({5,"Bheem"});

    // how to print this all values 

    // for(auto ele:m){ //this ele is a tupple for (key,value) pair like (19,Niraj) etc.
    //     cout<<ele.second<<" Birthday comes at "<<ele.first<<" November."<<endl;
    // }

    // cout<<"kya 19 present hai "<<m.count(19)<<endl;

    cout<<"Map Before Erase "<<endl;
    for(auto ele:m){
        cout<<ele.first<<" "<<ele.second<<endl;
    }

    m.erase(5); // only take key value for erasing the tupple 
    cout<<"Map After Erase "<<endl;
    for(auto ele:m){
        cout<<ele.first<<" "<<ele.second<<endl;
    }

    m.insert({23,"Sonis"});

    // auto // enables the ability to automatically detect the data type based on next literal value
    auto it = m.find(6);
    for(auto it1=it; it1!=m.end(); it1++){
        cout<<(*it1).first<<endl; //(*it1) pointer de-reference value de dedi as a tuple now lagao .first or .second
    }
    return 0;
}