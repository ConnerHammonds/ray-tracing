#ifndef GEOMETRY_H

#define GEOMETRY_H

class Vec3f {
  public:
    float r; 
    float g;
    float b;

  Vec3f add(Vec3f vec1, Vec3f vec2) {
    Vec3f sum;
    sum.r = vec1.r + vec2.r;
    sum.g = vec1.g + vec2.g;
    sum.b = vec1.b + vec2.b;
    return sum;
  }

  Vec3f subtract(Vec3f vec1, Vec3f vec2) {
    Vec3f diff;
    diff.r = vec1.r - vec2.r;
    diff.g = vec1.g - vec2.g;
    diff.b = vec1.b - vec2.b;
    return diff;
  }

  Vec3f scalarMultiplication(Vec3f vec, int scalar) {
    Vec3f product;
    product.r = vec.r * scalar;
    product.g = vec.g * scalar;
    product.b = vec.b * scalar;
    return product;
  }

  float scalarProduct(Vec3f vec1, Vec3f vec2) {
    float product;
    product = (vec1.r*vec2.r) + (vec1.g*vec2.g) + (vec1.b*vec2.b);
    return product;
  }

  // have to pass vec2 by reference so that the original vector is modified
  // rather than a copy
  Vec3f assignment(Vec3f vec1, Vec3f &vec2) {
    vec2.r = vec1.r;
    vec2.g = vec1.g;
    vec2.b = vec1.b;
    return vec2;
  }
};


