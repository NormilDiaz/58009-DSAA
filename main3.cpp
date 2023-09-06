#include <algorithm>  
#include <iostream>  
#include <string>  
  
using namespace std;  
  
int main() 
{  
  string str = "1 2 3 4 5 6 7 8 9";  
  
  reverse(str.begin(), str.end());  
  cout <<str << endl;  
    
  return 0;  
}  
