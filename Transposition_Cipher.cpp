#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    string s,final;
    int key;
    cout<<"Please Enter the Key and cipher text For ex '12 Text to encode'"<<endl;
    cin>>key;
    getline(cin, s);
    vector<string> list;
    int m;
    for(int i=0;i<key;i++){
        final = "";
        for(m = i;m<s.length(); m+=key){
            final += s[m];
        }
        list.push_back(final);
    }
    final = "";
    for(int i=0;i<key;i++){
        final+=list[i];
    }
    cout<<final;
    return 0;
}
