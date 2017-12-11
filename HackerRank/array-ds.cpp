#include <iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int A[N];
    int temp, i;

    for(i=0;i<N;i++)
    {
        cin>>A[i];

    }
    for (i = 0; i < N/2; ++i) {
    temp = A[N-i-1];
    A[N-i-1] = A[i];
    A[i] = temp;
    }

    for(int i=0;i<N;i++)
    {
        cout<<A[i]<<" ";
    }
}
