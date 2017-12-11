#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int currentHour,currentMinute,alarmHour,alarmMinute;
    while(cin>>currentHour>>currentMinute>>alarmHour>>alarmMinute)
    {
        if(currentHour==0 && currentMinute==0 && alarmHour==0 && alarmMinute==0)
            break;
        int currentTime = currentMinute+currentHour*60;
        int alarmTime = alarmMinute+alarmHour*60;
        int result = alarmTime - currentTime;
        if(alarmTime<currentTime)
            result = (24*60)+result;
        cout<<result<<endl;

    }
    return 0;
}

