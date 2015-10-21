//License: Apachev2

#include "MultiArray.hpp"
#include <iostream>

using namespace std;

int main()
{
     MultiArray<int,3> test_multi{new int[5*10*15],5,10,15};
     int count=0;
     for(int i=0; i<5; i++)
          for(int j=0; j<10; j++)
               for(int k=0; k<15; k++)
                    test_multi[i][j][k] = count++;

     for(int i=0; i<5; i++)
          for(int j=0; j<10; j++)
               for(int k=0; k<15; k++)
                    cout << test_multi[i][j][k] << ' ';
     return 0;
}
