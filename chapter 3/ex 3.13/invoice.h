#include <string>

using namespace std;

class Invoice
{
	private:
		string partNumber;
		string partDescription;
		int quantity;
		int pricePerItem;
		
	public:
		Invoice (string,string,int,int);
		void setPartNumber(string number);
		string getPartNumber();
		void setPartDescription(string desc);
		string getPartDescription();
		void setQuantity(int quant);
		int getQuantity();
		void setPricePerItem(int price);
		int getPricePerItem();
		int getInvoiceAmount();
};
