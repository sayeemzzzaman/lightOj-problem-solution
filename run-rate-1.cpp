/*
run rate = runs scored/Overs faced

300-6 = 294/6 = 49
294/49 = 6

Required Run Rate = (Runs required to win / Balls Remaining ) x 6
301-294 = (7/6) x6 = 7
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        double totalRun,currentRun,remainBall;
        cin >> totalRun >> currentRun >> remainBall;
        double over = (300-remainBall) / 6.00;
        double runRate = currentRun/over;
        double reqRunRate;

        if(totalRun<currentRun){
            reqRunRate = 0;
        }
        else {
            reqRunRate = (((totalRun+1)-currentRun)/remainBall) *6.0;
        }
        cout << fixed << setprecision(2) << runRate << " " << reqRunRate << endl;
    }
}