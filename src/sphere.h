#ifndef SPHEREH
#define SPHEREH

#include "hitable.h"

class sphere: public hitable {
  public:
    sphere() {}
    sphere(vec3 cen, float r): center(cen), radius(r) {};
    virtual bool hit(const ray& r, float t_min, float t_max, hit_record& rec) const;
    vec3 center;
    float radius;
};

bool sphere::hit(const ray &r, float t_min, float t_max, hit_record& rec) const {
  vec3 oc = r.origin() - center;
  float a = dot(r.direction(), r.direction());
  float b = 2.0 * dot(oc, r.direction());
  float c = dot(oc, oc) - radius * radius;
  float discriminant = b * b - 4 * a * c;  // TODO why not b * b - 4 * a * c?
	if (discriminant > 0) {
		float temp = (-b - sqrt(discriminant)) / (2.0 * a); // TODO why not / (2 * a )?
    if (temp < t_max && temp > t_min) {
      rec.t = temp;
      rec.p = r.point_at_parameter(rec.t);
      rec.normal = (rec.p - center) / radius;
      return true;
    }
		temp = (-b + sqrt(discriminant)) / a;
    if (temp < t_max && temp > t_min) {
      rec.t = temp;
      rec.p = r.point_at_parameter(rec.t);
      rec.normal = (rec.p - center) / radius;
      return true;
    }
	}
  return false;
}

#endif
