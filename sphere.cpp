#include <vector>
#include <iostream>
#include <fstream>
#include "block.h"
class sphericalBlocks : public cuboidBlocks {
      public:
            vector<int> sphereDimensions;
            void readSphere(vector<cubiod> dim){
                 for(cubiod x: dim){
                        int sphereStruct;
                        sphereStruct = x.length;
                        sphereDimensions.push_back(sphereStruct);
                  }

                  sort(sphereDimensions.begin(), sphereDimensions.end()); //Sort diameter
                  double pi = 2 * acos(0.0);
                  cout <<"The diameters of the spheres in ascending order are: ";
                  for(int s: sphereDimensions){
                        cout <<s<<" ";
                  }  
                  cout<<endl; //Break line
                  cout <<"The Spherical surface areas in ascending order are: "; 
                  for(int s: sphereDimensions){
                        int radius = s/2;
                        int area = 4*pi*radius*radius; //Calculate for area
                        cout << area<<" ";
                  }   

                  cout<<endl; //Break line
                  cout <<"The Spherical surface volumes in ascending order are: ";
                  for(int s: sphereDimensions){
                        int radius = s/2;
                        int volume =4/3*pi*radius*radius*radius;
                        cout << volume<<" ";
                  }   

      }
};

