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
    cout<<"������m��n��ֵ:"<<endl;
    cin>>m>>n;
    sum=jiecheng(m)/(jiecheng(n)*jiecheng(m-n));
    cout<<"���Ϊ ";
    cout<<sum;
    return 0;
}



