#include <iostream>
using namespace std;
#include "Models.h"
#include "Constructer.h"
#include "Encapsulation.h"
#include "Methods.h"

void main()
{

    //Product p1(1, "No1", "Sliced Bread", 1.00, 15);
    //Product p2(2, "Coca Cola", "Drink", 2.40, 10);
   
    //p1.print();
    //p2.print();

    //p1.setPrice(8.0);
    //p1.setDescription("Amazing Drink!");
    //p1.setDiscount(25);

    //p2.setPrice(10.0);
    //p2.setDescription("Amazing Bread!");
    //p2.setDiscount(19);

    //p1.print();
    //p2.print();

    Stock stock("Stock", 2);
    Product* product1 = new Product(1, "No1", "Sliced Bread", 1.00, 15);
    Product* product2 = new Product(2, "Coca Cola", "Drink", 2.40, 10);

    Product* products[2] = { product1, product2};
    stock.setProducts(products, 2);

    stock.print();

}