#include <vector>
#include <iostream>
#include <fstream>
#include "rectBlocks.cpp"
#include "sqrBase.cpp"
#include "cubiod.cpp"
#include "cylinder.cpp"
#include "sphere.cpp"
using namespace std;

int main() {
      ifstream dataBlock("dataBlocks.dat");
      rectBlocks rec;
      vector<Rect> rectDim = rec.readRec(dataBlock);

      sqrBaseRectBlocks sqr;
      vector<sqrRect> sqrDim = sqr.readSqr(rectDim);
      
      cuboidBlocks cube;
      vector<cubiod> cubeDim = cube.readCube(sqrDim);

      cylindricalBlocks cylinder;
      cylinder.readCylinder(sqrDim);

      sphericalBlocks sphereBlock;
      sphereBlock.readSphere(cubeDim);
      return 0;
}
