#include <iostream>
//#include <string>
#include <vector>

#include "Server.h"

#include "Employee.h"
#include "Product.h"
#include "Sale.h"

using namespace std;

/// добавить функции выводы объекта и вектора объектов
/// добавить функции добавления объекта в вектор


int main()
{
    vector <Employee> a{1};
    vector <Product> b{0};
    vector <Sale> c{2};

  
    cout << Print_Vec_Employee(a);
    cout << "new \n";
    Add_Element_Employee(a);
    cout << Print_Vec_Employee(a);


    cout << "\n\n\n\n";


    cout << Print_Vec_Product(b);
    cout << "new \n";
    Add_Element_Product(b);
    cout << Print_Vec_Product(b);


    cout << "\n\n\n\n";


    cout << Print_Vec_Sale(c);
    cout << "new \n";
    Add_Element_Sale(c);
    cout << Print_Vec_Sale(c);

    return 0;
}
