#include<iostream>
 
using namespace std;
 
int main() {
  int x,y,z;
    cout<<"X\t Y\t Z\t XY+Z" << endl;
    for (x = false; x <= true; ++x)
      for (y = false; y<=true; ++y)
        for (z = false; z <= true; ++z){
         if(x*y+z==2)
          cout<< "\n\n" << x << "\t" << y << "\t" << z << "\t1" << endl;
         else
          cout << "\n\n" << x << "\t" << y << "\t" << z << "\t" << x* y + z << endl;
        }
  cout << "\n";
  return 0;
}
