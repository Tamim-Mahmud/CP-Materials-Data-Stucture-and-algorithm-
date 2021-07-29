#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,total_run,current_run,ball_left,ball_played;
    cin>>t;

    while(t--)
    {
        cin>>total_run>>current_run>>ball_left;
           ball_played=300-ball_left;

        double current_rate,required_rate;

        current_rate=(current_run*1.0/ball_played)*6;
        required_rate=((total_run-current_run+1 *1.0)/ball_left)*6;

        printf("%.2lf %.2lf \n",current_rate,required_rate);
       

    }

    return 0;
}
