#include <iostream>
#include <cmath>
#include <iomanip>
 
const float PI = 3.14;
 
class Solid {
    float radii;
    float height;
    public:
        Solid() { }
        virtual float area() = 0;
        virtual float volume() = 0;
        virtual float getRadius() = 0;
        virtual float getHeight() = 0;
        virtual ~Solid() { }
};
 
class Sphere : public Solid {
    float radii;
    public:
        Sphere(float r = 0): radii(r) { }
        float area() { return 4 * PI * pow(radii, 2); }
        float volume() { return (4 * PI / 3) * pow(radii, 3); }
        float getRadius() { return radii; }
        float getHeight() { }
        virtual ~Sphere() { }
};
 
class Cylinder : public Solid {
    float radii;
    float height;
    public:
        Cylinder(float r = 0, float h = 0): radii(r), height(h) { }
        float area() { return 2 * PI * radii * (radii + height); }
        float volume() { return PI * pow(radii, 2) * height;}
        float getRadius() { return radii; }
        float getHeight() { return height; }
        virtual ~Cylinder() { }
};
 
class Cone : public Solid {
    float radii;
    float height;
    public:
        Cone(float r = 0, float h = 0): radii(r), height(h) { }
        float area() { return PI * radii * ( sqrt(pow(radii,2 ) + pow(height, 2)) + radii ); }
        float volume() { return (PI / 3.0) * pow(radii, 2) * height;}
        float getRadius() { return radii; }
        float getHeight() { return height; }
        virtual ~Cone() { }
};
 
int main()
{
    Sphere sphere(5.0);
    Cylinder cylinder(5.0, 5.0);
    Cone cone(5.0, 5.0);
 
    std::cout << "Sphere :\nRadius = " << sphere.getRadius()
              << std::endl;
    std::cout << "Area of Sphere     = " << sphere.area()
              << std::endl;
    std::cout << "Volume of Sphere   = " << sphere.volume()
              << std::endl;
    std::cout << "Cylinder :\nRadius = " << cylinder.getRadius()
              << ", Height = " << cylinder.getHeight()
              << std::endl;
    std::cout << "Area of Cylinder   = " << cylinder.area()
              << std::endl;
    std::cout << "Volume of Cylinder = " << cylinder.volume()
              << std::endl;
    std::cout << "Cone :\nRadius = " << cone.getRadius()
              << ", Height = " << cone.getHeight()
              << std::endl;
    std::cout << "Area of Cone       = " << cone.area()
              << std::endl;
    std::cout << "Volume of Cone     = " << cone.volume()
              << std::endl;
}
