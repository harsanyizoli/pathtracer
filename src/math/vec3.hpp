#pragma once

template <typename T>
struct vec3
{
    union
    {
        struct { T x, y, z; };
        struct { T r, g, b; };
        
    };

    vec3<T> operator+(vec3<T> const& v1){
        return {x + v1.x, y + v1.y, z + v1.z};
    };

    vec3<T>& operator+(T const s){
        return {x + s, y + s, z + s};
    }
    template <typename U>
    vec3<T>& operator*(U const s){
        return {x * s, y * s, z * s};
    }
};

typedef vec3<float> vec3f;
typedef vec3<double> vec3d;
typedef vec3<int> vec3i;
