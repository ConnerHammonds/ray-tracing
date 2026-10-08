#include <limits>
#include <cmath>
#include <iostream>
#include <fstream>
#include <vector>
#include "geometry.h"

void render() {
  const int width = 1024;
  const int height = 768;

  // creates a vector (dynamic array) of Vec3f objects (see geometry.h)
  // framebuffer is the variable name and width*height is the size of the vector
  // which is equal to the area of the image
  std::vector<Vec3f> framebuffer(width*height);

  // size_t is an alias for unsigned int
  // it compiles as unsigned int on 32 bit systems
  // and unsigned long on 64 bit systems
  for (size_t j = 0; j < height; j++) {
    for (size_t i = 0; i < width; i++) {
      framebuffer[i + j * width] = Vec3f(j/float(height), i/float(width), 0);
    }
  }

  std::ofstream ofs; // save the framebuffer to file
  ofs.open("./output.ppm");
  ofs << "P6\n" << width << " " << height << "\n255\n";
  for (size_t i = 0; i < height * width; ++i) {
    for (size_t j = 0; j < 3; j++) {
      ofs << (char)(255 * std::max(0.f, std::min(1.f, framebuffer[i][j])));
    }
  }
  ofs.close();
}

int main() {
  render();
  return 0;
}
