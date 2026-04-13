#include <bits/stdc++.h>
using namespace std;

int main()
{
     cout << "Exercise 1.2." << endl;
     // Exercise 1.2.1
     float time = 42 * 60 + 42;
     cout << "1. How many seconds are there in 42 minutes 42 seconds?\n"
          << "Answer: There are " << time << " seconds in 42 minutes 32 seconds" << endl;
     // Exercise 1.2.2
     float distance = 10 / 1.61;
     cout << "2. How many miles are there in 10 kilometers?\n"
          << "Answer: 10 kilometers = " << distance << " miles" << endl;
     // Exercise 1.2.3.a
     float spd_av_Pace = time / distance;
     float mpd_av_Pace = spd_av_Pace / 60;
     cout << "3.a If you run a 10 kilometers race in 42 mins 42 sec, what is your average pace?\n"
          << "Answer: " << mpd_av_Pace << " min/miles = "
          << spd_av_Pace << " s/miles " << endl;
     // Exercise 1.2.3.b
     float av_Speed = distance/(time/3600);
     cout << "3.b What is your average speed?\n"
          <<"Answer: "<< av_Speed <<" miles/h"<<endl;
     return 0;
}