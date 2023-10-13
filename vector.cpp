
#include <iostream>
#include<vector>

using namespace std;

int main()
{
    std::vector<int>v ;
    int a;
    cout<<"enter the number";
    for(int i=0;i<5;++i)
    {
        cin>>a;
        v.push_back(a);
        cout<<v.size()<<" "<<v.capacity()<<endl;
    }
    
    for(auto it=v.begin();it!=v.end();++it)
    {
        cout<<*it<<endl;
    }
    return 0;
}
