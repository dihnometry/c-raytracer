#ifndef VEC3_M
#define VEC3_M

#include <tgmath.h>

typedef struct { double x, y, z; } vec3;

vec3 vec3_add(vec3 a, vec3 b);

vec3 vec3_sub(vec3 a, vec3 b);

double vec3_dot(vec3 a, vec3 b);

vec3 vec3_scalar_mult(vec3 a, double s);

vec3 vec3_scalar_div(vec3 v, double s);

double vec3_length(vec3 a);

double vec3_length_squared(vec3 a);

vec3 vec3_cross(vec3 u, vec3 w);

vec3 vec3_unit_vector(vec3 v);

#endif // VEC3_H
