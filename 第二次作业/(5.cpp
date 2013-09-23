#include<iostream>
using namespace std;

int jiecheng(int n)
{
    int num=1;
    for(int i=2;i<=n;i++)
        num*=i;
    return num;
}

int main()
{
    int m,n,sum;
    cout<<"请输入m与n的值:"<<endl;
    cin>>m>>n;
    sum=jiecheng(m)/(jiecheng(n)*jiecheng(m-n));
    cout<<"结果为 ";
    cout<<sum;
    return 0;
}



