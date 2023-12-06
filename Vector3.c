

typedef struct Vec3{
  double x;
  double y;
  double z;
} Vec3;

Vec3 *AddVec(Vec3 *X, Vec3 *Y){
  X->x+=Y->x;
  X->y+=Y->y;
  X->z+=Y->z;
  return X;
}

double SkalProd(Vec3 *X, Vec3 *Y){
  return X->x*Y->x+X->y*Y->y+X->z*Y->z
}
