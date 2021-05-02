#include <vector>
#include <iostream>
#include <fstream>
#include "block.h"

using namespace std;

class rectBlocks {
      public:
      vector<Rect> dimensions;
      vector<Rect> readRec(ifstream& inPutPointFile) {
            if (inPutPointFile.is_open()){
                  Rect block;
                  while(! inPutPointFile.eof()){ //while the end of file is NOT reached
                  inPutPointFile >> block.width >> block.height >> block.length;
                  dimensions.push_back(block);
                  } 
            }
            inPutPointFile.close();
            
            return dimensions;
      }

};


