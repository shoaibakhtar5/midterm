#include<iostream>
using namespace std;
int main() {
	int stock, restockthreshold;
	cout << "Enter initial stock : " << endl;
	cin >> stock;
	cout << "Enter restock threshold : " << endl;
	cin >> restockthreshold;
	while (stock > 0) {
		int quantitysold;
		cout << "Enter the amount of Quantity sold :  or Press '0' to exit . ";
		cin >> quantitysold;
		if (quantitysold == 0) {
			break;
		}
		if (quantitysold > 0 && quantitysold <= stock) {
			stock -= quantitysold;
			cout << "Sold " << quantitysold << " item. remaining stock = " << stock << endl;

			if (stock <= restockthreshold) {
				int restockquantity;
				cout << " The restock Quantity :";
				cin >> restockquantity;
				if (restockquantity > 0) {
					stock += restockquantity;
					cout << "Restocked quantity " << restockquantity << " items. Now stock is : " << stock << endl;

				}
				else { cout << "invalid stock value "; }
			}
			else {
				cout << " Enough stock  ";
			}
		}
		
	}

	return 0;
}