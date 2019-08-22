#include <iostream>
#include <string>

using namespace std;

int main(){

    string s1="First string";
    string s2(s1);
    string s3(s1, 2, 4);

    cout<<s1<<"\n"<<s2<<"\n"<<s3;

    string s4=s1.substr(2, 4);
    cout<<"\n"<<s4<<"\n";

    (s4.compare(s3)==0) ? (cout<<"Same") : (cout <<"not same");
    return 0;
}
