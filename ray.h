#ifndef RAY_H
#define RAY_H

#include "vec3.h"

typedef struct { vec3 orig, dir; } ray;

vec3 at(ray ray, double t) {
    return vec3_add(ray.orig, vec3_scalar_mult(ray.dir, t));
}

#endif
