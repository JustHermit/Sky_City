#include<iostream>
using namespace std;
int digui(int x,int y)
{
    for(int i=1;i<y;i++)
        x=x*x;
    return x;
}

int main()
{
    int x,y;
    cout<<"请输入x与y的值："<<endl;
    cin>>x>>y;
    cout<<digui(x,y)<<endl;
    return 0;
}
