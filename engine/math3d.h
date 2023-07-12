#ifndef MATH3D_H
#define MATH3D_H


#include <math.h>

template<typename T, unsigned int D>
class Vector
{
public:
        Vector() {}

        T Dot(const Vector<T, D>& other)
        {
            T result = T(0);
            for (unsigned int i = 0; i < D; i++)
            {
                result += (*this)[i] * other[i];
            }
        }

        // operators overload
        T operator [] (unsigned int i) 
        {
            return values[i];
        }

        T& operator [] (unsigned int i) 
        {
            return values[i];
        }

        Vector<T, D> operator + (const Vector<T, D>& other)
        {
            Vector<T, D> result;
            for (unsigned int i = 0; i < D; i++)
            {
                result[i] += (*this)[i] + other[i];
            }
            return result
        }

        Vector<T, D> operator - (const Vector<T, D>& other)
        {
            Vector<T, D> result;
            for (unsigned int i = 0; i < D; i++)
            {
                result[i] += (*this)[i] - other[i];
            }
            return result
        }

        bool operator == (const Vector<T, D>& other)
        {
            
            for (unsigned int i = 0; i < D; i++)
            {
                if ((*this)[i] != other[i])
                    return false
            }
            return true
        }

private:
        T values[D];

};


#endif