#include <vector>
#include <iostream>
#include <fstream>
#include "block.h"


class cuboidBlocks : public sqrBaseRectBlocks {
      public:  
            vector<cubiod> cubeDimensions;
            vector<cubiod> readCube(vector<sqrRect> dim){
                 for(sqrRect x: dim){
                        if(x.width==x.length){
                              cubiod cube;
                              cube.length = x.length;
                              cubeDimensions.push_back(cube);
                        }
                  }
                  // for(cubiod c: cubeDimensions){
                  //       cout <<c.length<<endl;
                  // }   
                  return cubeDimensions; 
            }
};