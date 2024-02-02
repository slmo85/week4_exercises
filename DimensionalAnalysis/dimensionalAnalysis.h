#include <iostream>
#include <array>

template <typename num_type, int L, int T, int M>
class Measure
{
    public:
    Measure(num_type x) : val(x) {}
    num_type val;
};

namespace measures
{
    using length = Measure<double, 1, 0, 0>;
    using time = Measure<double, 0, 1, 0>;
    using mass = Measure<double, 0, 0, 1>;
    using speed = Measure<double, 1, -1, 0>;
    using acceleration = Measure<double, 1, -2, 0>;
    using energy = Measure<double, 2, -2, 1>;
    using scalar = Measure<double, 0, 0, 0>;
}

template <typename type, int L, int T, int M>
Measure<type, L, T, M> operator+(const Measure<type, L, T, M> &x, const Measure<type, L, T, M> &y)
{
    return Measure<type, L, T, M>(x.val + y.val);
}

template <typename type, int L, int T, int M>
Measure<type, L, T, M> operator-(const Measure<type, L, T, M> &x, const Measure<type, L, T, M> &y)
{
    return Measure<type, L, T, M>(x.val - y.val);
}

template <typename type, int L, int T, int M>
Measure<type, L, T, M> operator*(type a, const Measure<type, L, T, M> &x)
{
    return Measure<type, L, T, M>(x.val * a);
}

template <typename type, int L, int T, int M>
Measure<type, L, T, M> operator*(const Measure<type, L, T, M> &x, type a)
{
    return Measure<type, L, T, M>(x.val * a);
}

template <typename type, int L1, int T1, int M1, int L2, int T2, int M2>
Measure<type, L1 + L2, T1 + T2, M1 + M2> operator*(const Measure<type, L1, T1, M1> &x, const Measure<type, L2, T2, M2> &y)
{
    return Measure<type, L1+L2, T1+T2, M1+M2>(x.val * y.val);
}

template <typename type, int L1, int T1, int M1, int L2, int T2, int M2>
Measure<type, L1 - L2, T1 - T2, M1 - M2> operator/(const Measure<type, L1, T1, M1> &x, const Measure<type, L2, T2, M2> &y)
{
    return Measure<type, L1-L2, T1-T2, M1-M2>(x.val / y.val);
}

std::ostream &streamUnit(std::ostream &os, int n, const std::string &name)
{
    if(n == 0)
    {
        return os;
    }
    os << name;
    if(n != 1)
    {
        os << "^" << n;
    }
    return os;
}

template <typename type, int L, int T, int M>
std::ostream &operator<<(std::ostream &os, Measure<type, L, T, M> m)
{
    os << m.val << " ";
    streamUnit(os, L, "m");
    streamUnit(os, T, "s");
    streamUnit(os, M, "kg");
    
    return os;
}