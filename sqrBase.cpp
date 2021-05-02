#include <vector>
#include <iostream>
#include <fstream>
#include "block.h"

class sqrBaseRectBlocks : public rectBlocks {
      public:  
            vector<sqrRect> sqrDimensions;
            vector<sqrRect> readSqr(vector<Rect> dim){
                 for(Rect x: dim){
                        if(x.width==x.height){
                              sqrRect squareRec;
                              squareRec.length = x.length;
                              squareRec.width = x.width;
                              sqrDimensions.push_back(squareRec);
                        }
                  }
                return sqrDimensions;    
            }     
};