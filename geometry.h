#ifndef GEOMETRY_H

#define GEOMETRY_H

class Vec3f {
  public:
    float x; 
    float y;
    float z;

  Vec3f operator+(const Vec3f& v) const {
    return {x + v.x, y + v.y, z + v.z};
  }
  Vec3f operator-(const Vec3f& v) const {
    return {x - v.x, y - v.y, z - v.z};
  }
  //scalar multiplication
  Vec3f operator*(const float f) const {
    return {x*f, y*f, z*f};
  }
  //dot product
  float operator*(const Vec3f& v) const {
    return x*v.x + y*v.y + z*v.z;
  }


  Vec3f assignment(Vec3f vec1, Vec3f &vec2) {
    vec2.r = vec1.r;
    vec2.g = vec1.g;
    vec2.b = vec1.b;
    return vec2;
  }
};


