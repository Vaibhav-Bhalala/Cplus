/*#1. WAP to get and display N numbers of Diamond
companies information using encapsulation and use of
parameterised constructor by including below
mentioned attributes:
- comp_id
- comp_name
- comp_staff_quantity
- comp_revenue (per year)
- comp_import_raw_diamonds (no. of raw diamonds
imported per year)
- comp_export_diamonds (no. of diamonds per year)
- comp_ceo (name of CEO of the company)*/

#include <iostream>
using namespace std;

class DiaCom{

    int comp_id;
    string comp_name;
    int comp_staff_quantity;
    int comp_revenue;
    int comp_import_raw_diamonds;
    int comp_export_diamonds;
    string comp_ceo;

public:
    DiaCom(int id, string name, int staff_quantity, int revenue, int import_raw_diamonds, int export_diamonds, string ceo) {
        comp_id = id;
        comp_name = name;
        comp_staff_quantity = staff_quantity;
        comp_revenue = revenue;
        comp_import_raw_diamonds = import_raw_diamonds;
        comp_export_diamonds = export_diamonds;
        comp_ceo = ceo;
        display();
    }

    void display() {
        cout<<"Company ID: "<<comp_id<<endl;
        cout<<"Company Name: "<<comp_name<<endl;
        cout<<"Staff Quantity: "<<comp_staff_quantity<<endl;
        cout<<"Revenue: "<<comp_revenue<<" per year"<<endl;
        cout << "Raw Diamonds Imported: " <<comp_import_raw_diamonds<<endl;
        cout << "Diamonds Exported: " << comp_export_diamonds << " per year" << endl;
        cout << "CEO: " << comp_ceo << endl;
    }
};

int main() {
	int id, staff_quantity, import_raw_diamonds, export_diamonds,revenue;
    string name, ceo;
    int n,i;
    cout << "Enter the number of Diamond Companies: ";
    cin >>n;
    
   	

    for (i=0;i<n;i++) {
        

        cout << endl << "Enter details for Company " << i+1 << ":" << endl;
        cout << "Company ID: ";
        cin >> id;
        cout << "Company Name: ";
        cin >> name;
        cout << "Staff Quantity: ";
        cin >> staff_quantity;
        cout << "Revenue (per year): $";
        cin >> revenue;
        cout << "Raw Diamonds Imported (per year): ";
        cin >> import_raw_diamonds;
        cout << "Diamonds Exported (per year): ";
        cin >> export_diamonds;
        cout << "CEO: ";
        cin >> ceo;
        
       DiaCom d(id,name,staff_quantity,revenue,import_raw_diamonds,export_diamonds,ceo);
    }

 
}


