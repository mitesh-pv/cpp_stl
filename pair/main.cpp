#include <iostream>
#include <utility>

using namespace std;

int main(){

    pair<int, char> p1;
    pair<int, float> p2(1, 1.1);
    p1=make_pair(4, 'a');

    cout<<p1.first<<" "<<p1.second<<'\n';
    cout<<p2.first<<" "<<p2.second;

    return 0;
}
