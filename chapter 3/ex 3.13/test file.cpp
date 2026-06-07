#include <iostream>
#include <string>
#include "invoice.h"

using namespace std;

int main()
{
Invoice i1("81006", "router", 8, 100);
cout<<"Part Number: "<<i1.getPartNumber()<<endl;
cout<<"Part Description: "<<i1.getPartDescription()<<endl;
cout<<"Quantity: "<<i1.getQuantity()<<endl;
cout<<"Price Per Item: $"<<i1.getPricePerItem()<< endl;

cout<<"Invoice Amount: $"<<i1.getInvoiceAmount()<<endl;
}
