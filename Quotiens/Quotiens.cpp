#include "Quotiens.hpp"




class Quotiens
{
    Quotiens(int n, int d) {

        this->d = d;
        this->n = n;
    }
public:
    int get_N() { return n; }
    int get_D() { return d; }

    double get_Value() { return (double(n) / double(d)); }

    friend Quotiens operator+(Quotiens a, Quotiens b);
    friend Quotiens operator-(Quotiens a, Quotiens b);
    friend Quotiens operator*(Quotiens a, Quotiens b);
    friend Quotiens operator/(Quotiens a, Quotiens b);
private:
    int n, d;
};




Quotiens operator+(Quotiens a, Quotiens b) {
    return Quotiens( a.n * b.d + b.n * a.d, a.d*b.d );
}

Quotiens operator-(Quotiens a, Quotiens b) {
    return Quotiens(a.n * b.d - b.n * a.d, a.d * b.d);
}

Quotiens operator*(Quotiens a, Quotiens b) {
    return Quotiens(a.n * b.n, a.d*b.d);
}

Quotiens operator/(Quotiens a, Quotiens b) {
    return Quotiens(a.n*b.d, a.d*b.n);
}
