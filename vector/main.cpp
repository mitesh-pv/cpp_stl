#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> v(10);
    vector<int> ::iterator itr;

    for(int i=0; i<v.size(); ++i){
        v[i]=i;
    }

    for(itr=v.begin(); itr!=v.end(); ++itr){
        cout<<*itr<<" ";
    }
    cout<<"\n";

    return 0;
}
