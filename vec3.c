#include "vec3.h"
#include <tgmath.h>

vec3 vec3_add(vec3 a, vec3 b)
{ return (vec3){ a.x + b.x, a.y + b.y, a.z + b.z }; }

vec3 vec3_sub(vec3 a, vec3 b)
{ return (vec3){ a.x - b.x, a.y - b.y, a.z - b.z }; }

double vec3_dot(vec3 a, vec3 b)
{ return a.x * b.x + a.y * b.y + a.z * b.z; }

vec3 vec3_scalar_mult(vec3 a, double s)
{ return (vec3){ s * a.x, s * a.y, s * a.z }; }

vec3 vec3_scalar_div(vec3 v, double s)
{ return (vec3){ v.x / s, v.y / s, v.z / s }; }

double vec3_length(vec3 a)
{ return sqrt(vec3_dot(a, a)); }

double vec3_length_squared(vec3 a)
{ return vec3_dot(a, a); }

vec3 vec3_cross(vec3 u, vec3 w) {
  return (vec3){
    u.y * w.z - w.y * u.z,
    w.x * u.z - u.x * w.z,
    u.x * w.y - w.x * u.y
  };
}

vec3 vec3_unit_vector(vec3 v)
{ return vec3_scalar_div(v, vec3_length(v)); }
