#include <bits/stdc++.h>
using namespace std;
#define ll 	long long
#define N 	10000020

int main()
{
	int arr[5],sum=0;
	int MAX = -123;
	bool flag=false;
	for(int i=0;i<6;i++)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
	int half = sum/2;
	if(sum%2!=0)
	{
		flag = false;
		goto end;
	}
	for(int i=0;i<6;i++)
	{
        for(int j=i+1;j<6;j++)
        {
            for(int k=j+1;k<6;k++)
            {
                if(arr[i]+arr[j]+arr[k] == half)
                    flag = true;
            }
        }
	}

    end:
	if(flag)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
    return 0;
}
