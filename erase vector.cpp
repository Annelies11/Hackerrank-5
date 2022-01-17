#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a, b, c, d, e;
    vector<int> v;
    
    cin>>a;

    for(int i = 0; i < a; i++) {
        cin>>b;
        v.push_back(b);
    }
    
    cin>>c;
    c--;
    v.erase(v.begin()+c);
    
    cin>>d>>e;
    d--; e--;
    
    v.erase(v.begin()+d,v.begin()+e);
    cout<<v.size()<<endl;
    
    for(int i = 0; i < v.size(); i++) {
        cout<<v[i]<<" ";
    }
    return 0;
}
