// contains unique values
// set is implemented using balanced binary search tree O(log n) time for insertion and searching functionality

#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main(){

    int arr[]={1, 2, 3, 1, 2, 3, 4, 5};
    vector <int> v(arr, arr+8);

    set<int> s;
    
    vector<int>::iterator itr1;
    for(itr1=v.begin(); itr1!=v.end(); ++itr1)
        s.insert(*itr1);

    
    set<int>::iterator itr2;
    for(itr2=s.begin(); itr2!=s.end(); ++itr2)
        cout<<*itr2<<" ";
    cout<<"\n";

    if(s.find(4)==s.end()){
        cout<<"not present";
    }else{
        cout<<"present";
    }

    return 0;
}
