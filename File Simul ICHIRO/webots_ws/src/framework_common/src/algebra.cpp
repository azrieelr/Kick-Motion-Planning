#include "common/algebra.h"
#include <math.h>
#include <limits>
#include <cstdlib>

float alg::piValue()
{
    return 3.14159265359;
}

float alg::rad2Deg()
{
    return 180.0 / alg::piValue();
}

float alg::deg2Rad()
{
    return alg::piValue() / 180.0;
}

float alg::normalizeDeg(float val)
{
    while (val < -180.0)
        val += 360.0;

    while (val > 180.0)
        val -= 360.0;

    return val;
}

float alg::normalizeRad(float val)
{
    while (val < -alg::piValue())
        val += 2 * alg::piValue();

    while (val > alg::piValue())
        val -= 2 * alg::piValue();

    return val;
}

float alg::deltaAngle(float a, float b)
{
    a = normalizeDeg(a);
    b = normalizeDeg(b);

    float aa = a - b;
    float bb = aa + ((aa < 0.0) ? 360.0 : -360.0);
    return (fabs(aa) < fabs(bb)) ? aa : bb;
}

float alg::sqr(float val)
{
    return val * val;
}

float alg::sqrt(float val)
{
    return pow(val, 0.5);
}

float alg::random()
{
    return alg::clampValue((float)std::rand() / (float)RAND_MAX, 0.0, 1.0);
}

float alg::random(float val)
{
    return alg::random() * val;
}

float alg::randomRange(float a, float b)
{
    return a + random(b - a);
}

int alg::random(int val)
{
    if (val == 0)
        return 0;

    return std::rand() % val;
}

int alg::randomRange(int a, int b)
{
    return a + random(b - a);
}

float alg::infinityFloat()
{
    return std::numeric_limits<float>::infinity();
}

float alg::sign(float val)
{
  if (val == 0)
    return 1.0;

  return val / alg::abs(val);
}

float alg::abs(float val)
{
    return (val < 0.0) ? -val : val;
}

float alg::minValue(float a, float b)
{
    return (a <= b) ? a : b;
}

float alg::maxValue(float a, float b)
{
    return (a >= b) ? a : b;
}

float alg::lerp(float a, float b, float rate)
{
  return (a + ((b - a) * rate));
}

bool alg::valueInside(float value, float min, float max)
{
    return (value > min && value < max);
}

bool alg::valueOutside(float value, float min, float max)
{
    return (value < min || value > max);
}

float alg::clampValue(float val, float min, float max)
{
    return alg::maxValue(alg::minValue(val, max), min);
}

float alg::smoothValue(float a, float b, float percent)
{
    return ((1.0 - percent) * a) + (percent * b);
}

float alg::curveValue(float val, float min, float max, float exponential)
{
    val = alg::minValue(val, alg::maxValue(min, max));
    val = alg::maxValue(val, alg::minValue(min, max));
    return min + ((max - min) * (pow(val - min, exponential) / pow(max - min, exponential)));
}

float alg::mapValue(float source_val, float source_min, float source_max, float target_min, float target_max)
{
    source_val = alg::minValue(source_val, alg::maxValue(source_min, source_max));
    source_val = alg::maxValue(source_val, alg::minValue(source_min, source_max));
    return target_min + ((source_val - source_min) * ((target_max - target_min) / (source_max - source_min)));
}

float alg::distance(float x, float y)
{
    return alg::sqrt(alg::sqr(x) + alg::sqr(y));
}

float alg::direction(float x, float y)
{
    return alg::normalizeRad(atan2(y, x));
}

float alg::direction(Vector2 a, Vector2 b)
{
  return alg::direction(b.getX() - a.getX(), b.getY() - a.getY());
}