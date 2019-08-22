// implemented using binary search tree hence takes O(log n ) time in insertion, deletion and search operation

#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main(){

    char a[]={'a', 'b' ,'c', 'a', 'd', 'c', 'e'};
    map<char, int> m;

    for(int i=0; i<7; ++i){
        m[a[i]]++;
    }

    for(map<char, int> :: iterator itr=m.begin(); itr!=m.end(); ++itr){
        cout<<itr->first<<" "<<itr->second<<"\n";
    }
    cout<<"\n";
    // remove a given key
    m.erase('e');
    for(map<char, int> :: iterator itr=m.begin(); itr!=m.end(); ++itr){
        cout<<itr->first<<" "<<itr->second<<"\n";
    }

    cout<<"\n";
    // taking into account the unordered map those are implemented using hash table which takes average of O(1) find, insert and delete operations 
    // and for worst case it takes O(n) time
    // order of the inputs are not taken into account as it has some different hash function mapping the input differently
    char b[]={'a', 'b' ,'c', 'a', 'd', 'c', 'e'};
    unordered_map<char, int> m1;

    for(int i=0; i<7; ++i){
        m1[b[i]]++;
    }

    for(unordered_map<char, int> :: iterator itr=m1.begin(); itr!=m1.end(); ++itr){
        cout<<itr->first<<" "<<itr->second<<"\n";
    }
    cout<<"\n";
    // remove a given key
    m1.erase('e');
    for(unordered_map<char, int> :: iterator itr=m1.begin(); itr!=m1.end(); ++itr){
        cout<<itr->first<<" "<<itr->second<<"\n";
    }


    return 0;
}
