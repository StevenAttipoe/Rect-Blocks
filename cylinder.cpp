#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
#include "block.h"

class cylindricalBlocks : public sqrBaseRectBlocks {
      public:  
            vector<cylinder> cylinderDimensions;
            void readCylinder(vector<sqrRect> dim){
                 for(sqrRect x: dim){
                        cylinder cylindrical;
                        cylindrical.diameter = x.width;
                        cylindrical.height = x.length;
                        cylinderDimensions.push_back(cylindrical);
                  }
                  double pi = 2 * acos(0.0);
                  cout<<"Pi ="<<pi<<endl;
                  vector<int> AreaVec,VolumeVec;
                  for(cylinder c: cylinderDimensions){
                        int radius = c.diameter/2;
                        int height = c.height;
                        int area = (2*pi*radius*height) + (2*pi*radius*radius);
                        int volume = pi*radius*2*height;
                        AreaVec.push_back(area);
                        VolumeVec.push_back(volume);
                  }    
                  sort(AreaVec.begin(),AreaVec.end());
                  sort(VolumeVec.begin(),VolumeVec.end());
                  cout <<"The cylindrical surface areas in ascending order are: "; 
                  for(int a: AreaVec){
                        cout << a<<" ";
                  }   
                  cout<<endl;

                  cout <<"The cylindrical volumes in ascending order are: "; 
                  for(int v: VolumeVec){
                        cout << v<<" ";
                  }   
                  cout<<endl;
      }
};