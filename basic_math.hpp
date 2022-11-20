#ifndef __BASIC_MATH__
#define __BASIC_MATH__

template<typename T>
class vector3d final
{
private:
    T* data;
public:
    // Constructors
    vector3d();
    vector3d(const T& x,const T& y,const T& z);
    vector3d(T* arr);

    // RAII
    vector3d(const vector3d& lhs);
    vector3d& operator=(const vector3d& lhs);
    vector3d(vector3d&& rhs);
    vector3d& operator=(vector3d&& rhs);
    ~vector3d();

    // Binary operators
    bool      operator==(const vector3d& other);
    bool      operator!=(const vector3d& other);
    vector3d& operator+ (const vector3d& other);
    vector3d& operator- (const vector3d& other);
    T&        operator* (const vector3d& other);
    vector3d& operator^ (const vector3d& other);
    vector3d& operator* (const T& mult);

    // Unary operators
    vector3d& operator+=(const vector3d& other);
    vector3d& operator-=(const vector3d& other);
    vector3d& operator*=(const T& mult);
    vector3d& operator^=(const vector3d& other);
    vector3d& operator- ();

    // Methods
    T& x();
    T& y();
    T& z();
    T  x() const;
    T  y() const;
    T  z() const;
    T  len();
    void print();
    template<typename T_for_ostream>
    friend std::ostream & operator << (std::ostream& os, const vector3d<T_for_ostream>& v);
    template<typename T1, typename T2>
    friend vector3d<T2>& operator*(const T1& m, const vector3d<T2>& v);
};

#endif