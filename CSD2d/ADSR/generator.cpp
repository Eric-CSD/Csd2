#include "generator.h"
#include "math.h"

Generator::Generator() {
}

Generator::~Generator() {
}

void Generator::tick() {
  sample++;
}
float Generator::getSample() {
  return sample;
}
void Generator::setSample( float newSample){
  sample = newSample;
}
