#include <bits/stdc++.h>;
using namespace std;

void opening() {
  cout << "___________________________________________________________________" << endl;
cout << endl;
cout << "\t\t\t\t C A R  P A R K I N G" << endl;
cout << "___________________________________________________________________" << endl;
cout << endl;
}

int main() {
opening();
  
  int option;
  int car = 0;
  int bike = 0;
  int rickshaw = 0;
  int scooty = 0;

while(true) {

  cout << "Press 1 to enter car" <<endl;
  cout << "Press 2 to enter bike" <<endl;
  cout << "Press 3 to enter rickshaw" <<endl;
  cout << "Press 4 to enter scooty" <<endl;
  cout << "Press 5 to SHOW records" <<endl;
  cout << "Press 6 to DELETE records" <<endl;
  cin >> option;
  if(option == 1) {
    car++;
    system("clear");
    opening();
    cout << "*** Car is Added in the record *** " << endl;
  } else if (option == 2) {
    bike++;
    system("clear");
    opening();
    cout << "*** Bike is Added *** " << endl;    
  } else if (option == 3) {
    rickshaw++;
    system("clear");
    opening();
    cout << "*** Rickshaw is Added *** " << endl; 
    
  } else if (option == 4) {
    scooty++;
    system("clear");
    opening();
    cout << "*** Scooty is Added *** " << endl; 
    
  } else if (option == 5) {
    system("clear");
    opening();
    cout << "CAR\t\t\t: " << car << endl;
    cout << "BIKE\t\t: " << bike << endl;
    cout << "SCOOTY \t\t: " << scooty << endl;
    cout << "RICKSHAW \t: " << rickshaw << endl;
    
  } else if (option == 6) {
    system("clear");
    opening();
    cout << "Do you really want to DELETE :"<<endl;
    cout << "ENTER 66" << endl;
    cin >> option;
    if (option == 66) {
      car = 0;
      bike = 0;
      rickshaw = 0;
      scooty = 0;
    } else {
      exit(0);
    }
    cout << "DELETED" << endl;
    system("clear");
    opening();
  } else if (option == 9) {
    exit(0);
  } else {
    cout << "****** invalid input ******" << endl;
  }

  
}

  
  return 0;
}