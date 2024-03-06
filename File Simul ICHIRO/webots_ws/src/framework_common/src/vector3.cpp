#include "common/vector3.h"
#include "common/algebra.h"

Vector3::Vector3()
{
    x_value_ = 0;
    y_value_ = 0;
    z_value_ = 0;
}

Vector3::Vector3(float x, float y, float z)
{
    x_value_ = x;
    y_value_ = y;
    z_value_ = z;
}

Vector3::Vector3(Eigen::Vector3f vector)
{
    x_value_ = vector[0];
    y_value_ = vector[1];
    z_value_ = vector[2];
}

float Vector3::length()
{
    return alg::sqrt(alg::sqr(x_value_) + alg::sqrt(y_value_) + alg::sqr(z_value_));
}

void Vector3::normalize()
{
    x_value_ = x_value_ / length();
    y_value_ = y_value_ / length();
    z_value_ = z_value_ / length();
}

Vector3 &Vector3::operator = (Vector3 &vector)
{
    x_value_ = vector.getX();
    y_value_ = vector.getY();
    z_value_ = vector.getZ();

    return *this;
}

Vector3 &Vector3::operator += (Vector3 &vector)
{
    x_value_ += vector.getX();
    y_value_ += vector.getY();
    z_value_ += vector.getZ();

    return *this;
}

Vector3 &Vector3::operator -= (Vector3 &vector)
{
    x_value_ -= vector.getX();
    y_value_ -= vector.getY();
    z_value_ -= vector.getZ();

    return *this;
}

Vector3 &Vector3::operator += (float value)
{
    x_value_ += value;
    y_value_ += value;
    z_value_ += value;

    return *this;
}

Vector3 &Vector3::operator -= (float value)
{
    x_value_ -= value;
    y_value_ -= value;
    z_value_ -= value;

    return *this;
}

Vector3 &Vector3::operator *= (float value)
{
    x_value_ *= value;
    y_value_ *= value;
    z_value_ *= value;

    return *this;
}

Vector3 &Vector3::operator /= (float value)
{
    x_value_ /= value;
    y_value_ /= value;
    z_value_ /= value;

    return *this;
}

Vector3 &Vector3::operator + (Vector3 &vector)
{
    Vector3 *result = new Vector3();
    result->setX(x_value_ + vector.getX());
    result->setY(y_value_ + vector.getY());
    result->setZ(z_value_ + vector.getZ());
    
    return *result;
}

Vector3 &Vector3::operator - (Vector3 &vector)
{
    Vector3 *result = new Vector3();
    result->setX(x_value_ - vector.getX());
    result->setY(y_value_ - vector.getY());
    result->setZ(z_value_ - vector.getZ());
    
    return *result;
}

Vector3 &Vector3::operator + (float value)
{
    Vector3 *result = new Vector3();
    result->setX(x_value_ + value);
    result->setY(y_value_ + value);
    result->setZ(z_value_ + value);
    
    return *result;
}

Vector3 &Vector3::operator - (float value)
{
    Vector3 *result = new Vector3();
    result->setX(x_value_ - value);
    result->setY(y_value_ - value);
    result->setZ(z_value_ - value);
    
    return *result;
}

Vector3 &Vector3::operator * (float value)
{
    Vector3 *result = new Vector3;
    result->setX(x_value_ * value);
    result->setY(y_value_ * value);
    result->setZ(z_value_ * value);
    
    return *result;
}


Vector3 &Vector3::operator / (float value)
{
    Vector3 *result = new Vector3();
    result->setX(x_value_ / value);
    result->setY(y_value_ / value);
    result->setZ(z_value_ / value);

    return *result;
}