#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    int temp;
    vector<int> v1, v2, v3;
    for(int i=0;i<n;i++){
        cin>>temp;
        if(temp > 0) v2.push_back(temp);
        else if(temp < 0) v1.push_back(temp);
        else{v3.push_back(temp);}
    }

    if(v1.size() % 2 == 0){
        temp = v1[v1.size() - 1];
        v1.pop_back();
        v3.push_back(temp);
    }

    if(v2.size() == 0){
        temp = v1[v1.size() - 1];
        v1.pop_back();
        v2.push_back(temp);

        temp = v1[v1.size() - 1];
        v1.pop_back();
        v2.push_back(temp);
    }
    cout<<v1.size()<<' ';
    for(int i = 0;i<v1.size();i++){
        cout<<v1[i]<<' ';
    }
    cout<<endl;
    cout<<v2.size()<<' ';
    for(int i = 0;i<v2.size();i++){
        cout<<v2[i]<<' ';
    }
    cout<<endl;
    cout<<v3.size()<<' ';
    for(int i = 0;i<v3.size();i++){
        cout<<v3[i]<<' ';
    }
    cout<<endl;

    return 0;
}