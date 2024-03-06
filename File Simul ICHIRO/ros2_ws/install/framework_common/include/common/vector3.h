#ifndef VECTOR3_H
#define VECTOR3_H

#include <eigen3/Eigen/Dense>

class Vector3
{
private:

    float x_value_;
    float y_value_;
    float z_value_;

public:

    Vector3();
    Vector3(float x, float y, float z);
    Vector3(Eigen::Vector3f vector);

    ~Vector3() { }

    float getX() { return x_value_; }
    float getY() { return y_value_; }
    float getZ() { return z_value_; }

    void setX(float value) { x_value_ = value; }
    void setY(float value) { y_value_ = value; }
    void setZ(float value) { z_value_ = value; }

    float length();    
    void normalize();

    Vector3 &operator = (Vector3 &vector);
    Vector3 &operator += (Vector3 &vector);
    Vector3 &operator -= (Vector3 &vector);
    Vector3 &operator += (float value);
    Vector3 &operator -= (float value);
    Vector3 &operator *= (float value);
    Vector3 &operator /= (float value);

    Vector3 &operator + (Vector3 &vector);
    Vector3 &operator - (Vector3 &vector);
    Vector3 &operator + (float value);
    Vector3 &operator - (float value);
    Vector3 &operator * (float value);
    Vector3 &operator / (float value);
};

#endif