
#include <iostream>
#include<array>

using namespace std;

int main()
{
    std::array<int, 5> a ;
    a={5,20,47,32,42};
    cout<<*a.begin()<<endl;
    
    cout<<"usign a[i] in loop";
    for(int i=0;i<5;++i)
    {
        cout<<a[i]<<endl;
    }
    
    cout<<"using an iterator"<<cout;
    for(auto it=a.begin();it!=a.end();++it)
    {
        cout<<*it<<endl;
    }
    return 0;
}
