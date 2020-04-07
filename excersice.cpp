#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main () {

int time_parked_hours;
string license_plate;
float total;

 cout<<"Type your license plate number: ";
  cin>>license_plate;
   cout<<endl;

 while (license_plate != "000000") {
    cout<<"Type how many hours you parked for: ";
     cin>>time_parked_hours;
      cout<<endl;

     if (time_parked_hours>0 && time_parked_hours<=3) {
        total=time_parked_hours*2;
     }

      else if (time_parked_hours<3 && time_parked_hours>=5) {
        total=3*2+(time_parked_hours-3)*1.5;
      }

       else if (time_parked_hours<=5) {
         total=(time_parked_hours-5)*1.3+3*1.5+2*1.2;
       }

    cout<<total<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;

    cout<<"Type your license plate number: ";
  cin>>license_plate;
   cout<<endl;


 }

return 0;
}
