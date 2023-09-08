#include<bits/stdc++.h>
using namespace std;

void printArray(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Before sort : ";
    printArray(a,n);
    cout<<endl;
    //Buble implementation
    for(int i=1;i<n;i++)
    {
        int flag = 0;
         cout<<"iteratin no :"<<i<<endl;
        for(int j=0;j<n-i;j++)
        {
            cout<<j+1<<"th step-> ";
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                flag = 1;
            }
            printArray(a, n);
        }
        cout<<endl;
        if(flag == 0) break;
    }

    cout<<"After sort : ";
    printArray(a,n);
    cout<<endl;
    return 0;
}