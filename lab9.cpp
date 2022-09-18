#include <iomanip>
#include <iostream>
using namespace std;



int main()
{
  const int MIN_NUMBER = 0,
            MAX_NUMBER = 4;
  int num;
  int t;
  int h ;

  cout << fixed << setprecision(2) << endl;
  
  cout << "\nPlease input the time of fall in seconds:" << endl;
	cin >> t;    
   cout << "\nPlease input the height of the bridge in meters:" << endl;  
  cin >> h;
  cout << "Time Falling (seconds) Distance Fallen (meters)";
  cout << "***********************************************\n";
 for (num = MIN_NUMBER; num <= MAX_NUMBER; num++)
      cout << num << "\t\t" << 0.5 * 9.8*(num * num) << endl;
        
 if (num < h)
		{
			cout << " Warning Bad Data: The distance Fallen exceeds the height of the bridge. ";
		}
return 0;
}
