#include <iostream>
 #include <valarray>
 #include <cmath>
 
void print(std::valarray <double> v)
{
    std::cout << "Valarray = { ";
    for (int i = 0; i < v.size(); i++)
        std::cout << v[i] << "  ";
    std::cout << "}" << std::endl;
}
 
 int main()
 {
     std::valarray<double> v(1, 5);
     std::valarray<double> v2 = v + v;
     std::valarray<double> v3 = 5.0 * v2;
     std::valarray<double> v4 = cos(v3);
 
     print(v);
     std::cout << "Adding two valarrays " << std::endl;
     print(v2);
     std::cout << "Multiplying elements with a double " << std::endl;
     print(v3);
     std::cout << "Computing cosine of all elements " << std::endl;
     print(v4);
 }
