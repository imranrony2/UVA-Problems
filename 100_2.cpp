#include<iostream>

using namespace std;

int main()
{
    int i,j,n,c,max;
    cin>>i>>j;
    max=0;
    cout<<i<<" "<<j<<" ";

    while(i<=j)
    {
        c=1;
        n=i;
    while(n!=1)
    {
        if(n%2==0)
        {
            n=n/2;
        }
        else
        {
            n=3*n+1;
        }
        c++;
    }
        if(c>max)
        {
            max=c;
            i++;
        }
    }

    cout<<max<<endl;
    return 0;
}


