#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
using namespace std;

void menu();
bool isValidCNIC(string CNIC)    //Function to check validity of 13 digit NIC
{
	for (int i = 0; i < 13; i++)
		if (CNIC[i] < '0' or CNIC[i] > '9')
			return false;

	return true;
}
bool isValid_password(string password)   //Function to check validity of password
{
	if (!((password.length() >= 8) && (password.length() <= 15)))
		return false;

	if (password.find(" ") != std::string::npos)
		return false;

	if (true)
	{
		int count = 0;

		for (int i = 0; i <= 9; i++)
		{
			// To convert int to string
			string str1 = to_string(i);

			if (password.find(str1) != std::string::npos)
				count = 1;
		}
		if (count == 0)
			return false;
	}
	// For special characters
	if (!((password.find("@") != std::string::npos) ||
		(password.find("#") != std::string::npos) ||
		(password.find("!") != std::string::npos) ||
		(password.find("~") != std::string::npos) ||
		(password.find("$") != std::string::npos) ||
		(password.find("%") != std::string::npos) ||
		(password.find("^") != std::string::npos) ||
		(password.find("&") != std::string::npos) ||
		(password.find("*") != std::string::npos) ||
		(password.find("(") != std::string::npos) ||
		(password.find(")") != std::string::npos) ||
		(password.find("-") != std::string::npos) ||
		(password.find("+") != std::string::npos) ||
		(password.find("/") != std::string::npos) ||
		(password.find(":") != std::string::npos) ||
		(password.find(".") != std::string::npos) ||
		(password.find(",") != std::string::npos) ||
		(password.find("<") != std::string::npos) ||
		(password.find(">") != std::string::npos) ||
		(password.find("?") != std::string::npos) ||
		(password.find("|") != std::string::npos)))
		return false;

	if (true)
	{
		int count = 0;
		// Checking capital letters
		for (int i = 65; i <= 90; i++)
		{
			// Type casting
			char c = (char)i;
			string str1(1, c);

			if (password.find(str1) != std::string::npos)
				count = 1;
		}
		if (count == 0)
			return false;
	}
	if (true)
	{
		int count = 0;
		// Checking small letters
		for (int i = 97; i <= 122; i++)
		{
			// Type casting
			char c = (char)i;
			string str1(1, c);

			if (password.find(str1) != std::string::npos)
				count = 1;
		}
		if (count == 0)// If all conditions fails
			return false;
	}
	return true;
}
class User  //User class
{
protected:
	char name[100];
	char password[100];
	char cnic[100];
public:
	User()
	{
		for (int i = 0; i < 100; i++)
		{
			name[i] = '0';
			password[i] = '0';
			cnic[i] = '0';
		}
	}

	User(string name, string password, string cnic)
	{
		strcpy_s(this->name, name.c_str());
		strcpy_s(this->password, password.c_str());
		strcpy_s(this->cnic, cnic.c_str());

	}

	void setName(string name1)
	{
		strcpy_s(name, name1.c_str());
	}
	void setCnic(string cnic1)
	{
		strcpy_s(cnic, cnic1.c_str());
	}
	void setPassword(string password1)
	{
		strcpy_s(password, password1.c_str());
	}

	string GetName()
	{
		return name;
	}
	string GetCnic()
	{
		return cnic;
	}
	string GetPassword()
	{
		return password;
	}
};
class Product_Catalog     //product catalog classs
{
public:

	char product_name[100];
	char p_unit[100];
	int p_price;
	int pc_decision;
	int category;
	int sub_category;
	char add;
	char remove1;
	char update;

	Product_Catalog()
	{
		for (int i = 0; i < 100; i++)
		{
			product_name[i] = '0';

			p_unit[i] = '0';
		}
		p_price = 0;
		pc_decision = 0;
		category = 0;
		sub_category = 0;
		add = '0';
		remove1 = '0';
		update = '0';
	}

	void selection()
	{
		cout << "------------------------------------------------------" << endl;
		cout << "|WELCOME TO THE PRODUCT CATALOG                       |" << endl;
		cout << "|CATEGORIES ARE FOOD,PERSONAL HYGIENE,HOUSEHOLD ITEMS |" << endl;
		cout << "|Press 1 to Add any item                              |" << endl;
		cout << "|Press 2 to Remove any item                           |" << endl;
		cout << "|Press 3 to Update any item                           |" << endl;
		cout << "|Press 4 to View items after update                   |" << endl;
		cout << "|Press 5 to go back to Main Menu                      |" << endl;
		cin >> pc_decision;
		cout << "------------------------------------------------------" << endl;
		if (pc_decision == 1)
		{
			add_item();
		}
		if (pc_decision == 2)
		{
			remove_item();
		}
		if (pc_decision == 3)
		{
			update_item();
		}
		if (pc_decision == 4)
		{
			view_items();
		}
		if (pc_decision == 5)
		{
			menu();
		}
	}
	void add_item()   //function to add items
	{
		cout << "-------------------------------------" << endl;
		cout << "You have following Categotries" << endl;
		cout << "FOOD\nPERSONAL HYGIENE\nHOUSEHOLD CLEANING\nPress 1 for FOOD\nPress 2 for PERSONAL HYGIENE\nPRESS 3 for HOUSEHOLD ITEMS" << endl;
		cin >> category;
		cout << "-------------------------------------" << endl;
		if (category == 1)
		{
			cout << "-------------------------------------" << endl;
			cout << "WELCOME TO FOOD SECTOR\nFOOD HAVE TWO CATEGORIES\nPERISHABLE AND NON_PERISHABLE GOODS" << endl;
			cout << "Press 1 for PERISHBALE GOODS OR PRESS 2 FOR NONPERISHABLE GOODS" << endl;
			cin >> sub_category;
			cout << "-------------------------------------" << endl;

			if (sub_category == 1)
			{
				cout << "-------------------------------------" << endl;
				cout << "PERISHABLE GOODS\nDO you want to Enter Item.Press Y for that and N to go back to Catalog Menu" << endl;   //to input
				cin >> add;
				cout << "-------------------------------------" << endl;
				if (add == 'Y' or add == 'y')
				{
					while (add != 'n')
					{
						cout << "-------------------------------------" << endl;
						cout << "Please Enter Item: " << endl;
						cin >> product_name;
						cout << "Please Enter Item Unit: " << endl;
						cin >> p_unit;
						cout << "Please Enter Item Price: " << endl;
						cin >> p_price;
						cout << "-------------------------------------" << endl;
						cout << "DO you want to Enter Item.Press Y for that and N to go back to Catalog Menu" << endl;
						cin >> add;
						cout << "-------------------------------------" << endl;
						add_items_writing("catalog.bin", *this);       //writing in file

						if (add == 'n')
						{
							selection();

						}
					}
				}
				if (sub_category == 2)
				{
					cout << "-------------------------------------" << endl;
					cout << "NONPERISHABLE GOODS\nDO you want to Enter Item.Press Y for that and N to go back to Catalog Menu" << endl;
					cin >> add;
					cout << "-------------------------------------" << endl;
					if (add == 'Y' or add == 'y')
					{
						while (add != 'n')
						{
							cout << "-------------------------------------" << endl;
							cout << "Please Enter Item: " << endl;
							cin >> product_name;
							cout << "Please Enter Item Unit: " << endl;
							cin >> p_unit;
							cout << "Please Enter Item Price: " << endl;
							cin >> p_price;
							cout << "-------------------------------------" << endl;
							cout << "DO you want to Enter Item.Press Y for that and N to go back to Catalog Menu" << endl;
							cin >> add;
							cout << "-------------------------------------" << endl;
							add_items_writing("catalog.bin", *this);         //writing in file

							if (add == 'n')
							{
								selection();

							}
						}
					}
				}
			}

		}
		if (category == 2)
		{
			cout << "-------------------------------------" << endl;
			cout << "WELCOME TO PERSONAL HYGIENE SECTOR" << endl;
			cout << "DO you want to Enter Item.Press Y for that and N to go back to Catalog Menu" << endl;
			cin >> add;
			cout << "-------------------------------------" << endl;
			if (add == 'Y' or add == 'y')
			{
				while (add != 'n')
				{
					cout << "-------------------------------------" << endl;
					cout << "Please Enter Item: " << endl;
					cin >> product_name;
					cout << "Please Enter Item Unit" << endl;
					cin >> p_unit;
					cout << "Please Enter Item Price" << endl;
					cin >> p_price;
					cout << "-------------------------------------" << endl;
					cout << "DO you want to Enter Item.Press Y for that and N to go back to Catalog Menu" << endl;
					cin >> add;
					cout << "-------------------------------------" << endl;
					add_items_writing("catalog.bin", *this);            //writing in file

					if (add == 'n')
					{
						selection();

					}
				}
			}
		}
		if (category == 3)
		{
			cout << "-------------------------------------" << endl;
			cout << "WELCOME TO HOUSEHOLD ITEMS SECTOR" << endl;
			cout << "DO you want to Enter Item.Press Y for that and N to go back to Catalog Menu" << endl;
			cout << "-------------------------------------" << endl;
			cin >> add;
			if (add == 'Y' or add == 'y')
			{
				while (add != 'n')
				{
					cout << "-------------------------------------" << endl;
					cout << "Please Enter Item: " << endl;
					cin >> product_name;
					cout << "Please Enter Item Unit: " << endl;
					cin >> p_unit;
					cout << "Please Enter Item Price: " << endl;
					cin >> p_price;
					cout << "-------------------------------------" << endl;
					cout << "DO you want to Enter Item.Press Y for that and N to go back to Catalog Menu" << endl;
					cout << "-------------------------------------" << endl;
					cin >> add;
					add_items_writing("catalog.bin", *this);      //writing in file

					if (add == 'n')
					{
						selection();

					}
				}
			}
		}
	}
	void remove_item()
	{

		while (add != 'n')
		{
			cout << "Which Item do you want to remove.Press Y for that and N to go back to Catalog Menu" << endl;
			cin >> add;
			if (add == 'n')
			{
				selection();
			}
			cout << "Please Enter Item" << endl;
			cin >> product_name;
			deleteData("catalog.bin", product_name);     //deleting object

		}
	}
	void update_item()
	{
		string name;
		int new_price;

		while (add != 'n')
		{
			cout << "Which Item do you want to update.Press Y for that and N to go back to Catalog Menu" << endl;
			cout << "-------------------------------------" << endl;
			cin >> add;
			if (add == 'n')
			{
				selection();
			}
			cout << "-------------------------------------" << endl;
			cout << "Please Enter Item:" << endl;
			cin >> name;
			cout << "Please Enter new  Item Price: " << endl;
			cin >> new_price;
			cout << "-------------------------------------" << endl;
			DataSearch("catalog.bin", name, new_price);      //updating item
		}
	}

	void view_items()       //viewing everything
	{
		reading_Data("catalog.bin");
		//cout << "leela";
	}
	void add_items_writing(const string fileName, Product_Catalog obj)    //function to add items in file
	{
		ofstream myFile(fileName, ios::binary | ios::app);

		if (myFile.write((char*)&obj, sizeof(obj)))

			cout << "Successfully Written!\n" << endl;

		else
			cout << "Writing Failed\n" << endl;
		myFile.close();
	}
	void DataSearch(const string fileName, string item, int new_price1)  //function to customize price
	{
		Product_Catalog obj;
		fstream myFile(fileName.c_str(), ios::in | ios::out | ios::binary);
		while (myFile.read((char*)&obj, sizeof(obj)))
		{
			if (item == obj.product_name)
			{
				obj.p_price = new_price1;
				int current = myFile.tellg();
				int oneobj = sizeof(obj);
				myFile.seekg(current - oneobj);
				myFile.write((char*)&obj, sizeof(obj));
				myFile.close();
			}
		}
	}
	void reading_Data(const string fileName)           //function to read to output
	{
		Product_Catalog obj;
		fstream myFile(fileName.c_str());
		while (myFile.read((char*)&obj, sizeof(obj)))
		{
			cout << "Food" << "\n\t" << "PRESICHABLE GOOD :" << "\n\t" << "Name: " << obj.product_name << "\n"
				<< "Price: " << obj.p_price << "\t\t" << "Unit: " << obj.p_unit << "\n" << endl;
			cout << "FOOD\n\t" << "NON PERISHABLE GOODS \n\t";
			cout << "Name: " << obj.product_name << "\t\t" << "Price: " << obj.p_price << "\t\t" << "Unit: " << obj.p_unit << "\n" << endl;
			cout << "PERSONAL HYGIENE:\n\t";
			cout << "Name: " << obj.product_name << "\t\t" << "Price: " << obj.p_price << "\t\t" << "Unit: " << obj.p_unit << "\n" << endl;
			cout << "HOUSE HOLD CLEANING:\n\t";
			cout << "Name: " << obj.product_name << "\t\t" << "Price: " << obj.p_price << "\t\t" << "Unit: " << obj.p_unit << "\n" << endl;
		}
		myFile.close();
	}
	void deleteData(const string fileName, string item)     //function to delete item
	{
		Product_Catalog temp;
		ifstream myFile(fileName.c_str());
		while (myFile.read((char*)&temp, sizeof(temp)))
		{
			if (item == temp.product_name) {
				temp.Null(item);
				cout << "The item has been deleted!" << endl;
				return;
			}
		}
	}
	void Null(string item)
	{
		const string fileName = "catalog.bin";
		Product_Catalog temp;
		fstream myFile(fileName.c_str(), ios::in | ios::out | ios::binary);
		ofstream myFileTemp("temp.bin", ios::app | ios::binary);
		while (myFile.read((char*)&temp, sizeof(temp)))
		{
			if (temp.product_name != item)
			{
				myFileTemp.write((char*)&temp, sizeof(temp));
			}
		}
		myFile.close();
		myFileTemp.close();
		remove(fileName.c_str());
		rename("temp.bin", fileName.c_str());
	}
};
class Inventory     //inventory class
{
public:
	char i_name[100];
	char i_quantity;
	int city_decision;
	int store_decision;
	int category;
	int sub_category;
	char add;
	char remove1;
	char update;
	bool chk1 = 0;

	void selection2()
	{
		cout << "Select Cities:(1)Lahore (2)Islamabad" << endl;
		cin >> city_decision;
		if (city_decision == 1)
		{
			lhr_store();
		}
		if (city_decision == 2)
		{
			isl_store();
		}
		if (city_decision == 3)
		{
			menu();
		}
	}

	//for lhr store
	void lhr_store()
	{
		cout << "WELCOME TO LAHORE STORE\n" << endl;
		cout << "----------------------------------------------------" << endl;
		cout << "|CATEGORIES ARE FOOD,PERSONAL HYGIENE,HOUSEHOLD ITEMS|" << endl;
		cout << "|----------------------------------------------------|" << endl;
		cout << "|=====================================================|" << endl;
		reading_Data("catalog.bin");
		cout << "|=====================================================|" << endl;
		cout << endl;
		cout << "-------------------------------------" << endl;
		cout << "|Press 1 to Add any item:            |" << endl;
		cout << "|Press 2 to Remove any item:         | " << endl;
		cout << "|Press 3 to Update any item:         | " << endl;
		cout << "|Press 4 to View items after update: |" << endl;
		cout << "|Press 5 to go back to Main Menu     |" << endl;
		cout << "-------------------------------------" << endl;
		cin >> store_decision;
		if (store_decision == 1)
		{
			add_item_lhr();
		}
		if (store_decision == 2)
		{
			remove_item_lhr();
		}
		if (store_decision == 3)
		{
			update_item_lhr();
		}
		if (store_decision == 4)
		{
			view_items_lhr();
		}
		if (store_decision == 5)
		{
			menu();
		}
	}
	void add_item_lhr()    //to add in lahore inventory
	{
		cout << "You have following Categotries" << endl;
		cout << "-------------------------------------" << endl;
		cout << "FOOD\nPERSONAL HYGIENE\nHOUSEHOLD CLEANING\nPress 1 for FOOD\nPress 2 for PERSONAL HYGIENE\nPRESS 3 for HOUSEHOLD ITEMS" << endl;
		cout << "-------------------------------------" << endl;
		cin >> category;
		if (category == 1)
		{
			cout << "-------------------------------------" << endl;
			cout << "WELCOME TO FOOD SECTOR\nFOOD HAVE TWO CATEGORIES\nPERISHABLE AND NON_PERISHABLE GOODS" << endl;
			cout << "-------------------------------------" << endl;
			cout << "Press 1 for PERISHBALE GOODS OR PRESS 2 FOR NONPERISHABLE GOODS" << endl;
			cout << "-------------------------------------" << endl;
			cin >> sub_category;

			if (sub_category == 1)
			{
				cout << "PERISHABLE GOODS\nDO you want to Enter Item.Press Y for that and N to go back to Catalog Menu" << endl;
				cin >> add;
				if (add == 'Y' or add == 'y')
				{
					while (add != 'n')
					{
						cout << "-------------------------------------" << endl;
						cout << "Please Enter Item: " << endl;
						cin >> i_name;
						cout << "Please Enter Item Quantity: " << endl;
						cin >> i_quantity;
						cout << "-------------------------------------" << endl;
						DataSearch("catalog.bin", i_name);
						if (chk1 == true)
						{
							cout << "Product Found" << endl;
							add_items_writing("LHR_Inventory.bin", *this);
						}
						cout << "DO you want to Enter Item.Press Y for that and N to go back to Catalog Menu" << endl;
						cout << "-------------------------------------" << endl;
						cin >> add;

						if (add == 'n')
						{
							selection2();

						}
					}
				}
				if (sub_category == 2)
				{
					cout << "-------------------------------------" << endl;
					cout << "NONPERISHABLE GOODS\nDO you want to Enter Item.Press Y for that and N to go back to Catalog Menu" << endl;
					cin >> add;
					cout << "-------------------------------------" << endl;
					if (add == 'Y' or add == 'y')
					{
						while (chk1 != true)
						{
							cout << "--------------------------------" << endl;
							cout << "Please Enter Item: " << endl;
							cin >> i_name;
							cout << "Please Enter Item Quantity: " << endl;
							cin >> i_quantity;
							cout << "-------------------------------------" << endl;
							DataSearch("catalog.bin", i_name);
							if (chk1 == true)
							{
								cout << "Product Found: " << endl;
								add_items_writing("LHR_Inventory.bin", *this);
							}
							cout << "DO you want to Enter Item.Press Y for that and N to go back to Catalog Menu" << endl;
							cout << "-------------------------------------" << endl;
							cin >> add;

							if (add == 'n')
							{
								selection2();
								break;

							}
						}
					}
				}
			}

		}
		if (category == 2)
		{
			cout << "-------------------------------------" << endl;
			cout << "WELCOME TO PERSONAL HYGIENE SECTOR" << endl;
			cout << "DO you want to Enter Item.Press Y for that and N to go back to Catalog Menu" << endl;
			cout << "-------------------------------------" << endl;
			cin >> add;
			if (add == 'Y' or add == 'y')
			{
				while (add != 'n')
				{
					cout << "-------------------------------------" << endl;
					cout << "|Please Enter Item:                   |" << endl;
					cin >> i_name;
					cout << "|Please Enter Item Quantity:          |" << endl;
					cin >> i_quantity;
					cout << "-------------------------------------" << endl;
					DataSearch("catalog.bin", i_name);
					if (chk1 == true)
					{
						cout << "Product Found: " << endl;
						add_items_writing("LHR_Inventory.bin", *this);
					}
					cout << "-------------------------------------" << endl;
					cout << "DO you want to Enter Item.Press Y for that and N to go back to Catalog Menu" << endl;
					cin >> add;
					cout << "-------------------------------------" << endl;
					if (add == 'n')
					{
						selection2();

					}
				}
			}
		}
		if (category == 3)
		{
			cout << "-------------------------------------" << endl;
			cout << "|WELCOME TO HOUSEHOLD ITEMS SECTOR    |" << endl;
			cout << "-------------------------------------" << endl;
			cout << "---------------------------------------------------------------------------" << endl;
			cout << "DO you want to Enter Item.Press Y for that and N to go back to Catalog Menu" << endl;
			cin >> add;
			cout << "----------------------------------------------------------------------------" << endl;
			if (add == 'Y' or add == 'y')
			{
				while (add != 'n')
				{
					cout << "-----------------------------" << endl;
					cout << "|Please Enter Item:          | " << endl;
					cin >> i_name;
					cout << "|Please Enter Item Qunatity: |" << endl;
					cin >> i_quantity;
					cout << "-----------------------------" << endl;
					DataSearch("catalog.bin", i_name);
					if (chk1 == true)
					{
						cout << "Product Found" << endl;
						add_items_writing("LHR_Inventory.bin", *this);
					}
					cout << "DO you want to Enter Item.Press Y for that and N to go back to Catalog Menu" << endl;
					cin >> add;

					if (add == 'n')
					{
						selection2();

					}
				}
			}
		}
	}
	void remove_item_lhr()  //to remove in lahore inventory
	{
		while (add != 'n')
		{
			cout << "Which Item do you want to remove.Press Y for that and N to go back to Catalog Menu" << endl;
			cin >> add;
			if (add == 'n')
			{
				selection2();
			}
			cout << "Please Enter Item" << endl;
			cin >> i_name;;
			deleteData("LHR_Inventory.bin", i_name);
		}
	}
	void update_item_lhr() //to update in lahore inventory
	{

		while (add != 'n')
		{
			cout << "DO you want to Enter Item.Press Y for that and N to go back to Catalog Menu" << endl;
			cin >> add;
			if (add == 'n')
			{
				selection2();
			}
			cout << "Please Enter Item" << endl;
			cin >> i_name;
			cout << "Please Enter Item Quantity" << endl;
			cin >> i_quantity;
			ChangeQuantity("LHR_Inventory", i_name, i_quantity);
		}
	}
	void view_items_lhr()
	{
		reading_Data_Inventory("LHR_Inventory.bin");
	}

	//for islamabad store
	void isl_store()
	{
		cout << "WELCOME TO ISLAMABAD STORE\n" << endl;
		cout << "CATEGORIES ARE FOOD,PERSONAL HYGIENE,HOUSEHOLD ITEMS" << endl;
		reading_Data("catalog.bin");
		cout << endl;
		cout << "Press 1 to Add any item" << endl;
		cout << "Press 2 to Remove any item" << endl;
		cout << "Press 3 to Update any item" << endl;
		cout << "Press 4 to View items after update" << endl;
		cout << "Press 5 to go back to Main Menu" << endl;
		cin >> store_decision;
		if (store_decision == 1)
		{
			add_item_isl();
		}
		if (store_decision == 2)
		{
			remove_item_isl();
		}
		if (store_decision == 3)
		{
			update_item_isl();
		}
		if (store_decision == 4)
		{
			view_items_isl();
		}
		if (store_decision == 5)
		{
			menu();
		}
	}
	void add_item_isl()   //to add in inventory
	{
		cout << "You have following Categotries" << endl;
		cout << "FOOD\nPERSONAL HYGIENE\nHOUSEHOLD CLEANING\nPress 1 for FOOD\nPress 2 for PERSONAL HYGIENE\nPRESS 3 for HOUSEHOLD ITEMS" << endl;
		cin >> category;
		if (category == 1)
		{
			cout << "WELCOME TO FOOD SECTOR\nFOOD HAVE TWO CATEGORIES\nPERISHABLE AND NON_PERISHABLE GOODS" << endl;
			cout << "Press 1 for PERISHBALE GOODS OR PRESS 2 FOR NONPERISHABLE GOODS" << endl;
			cin >> sub_category;

			if (sub_category == 1)
			{
				cout << "PERISHABLE GOODS\nDO you want to Enter Item.Press Y for that and N to go back to Catalog Menu" << endl;
				cin >> add;
				if (add == 'Y' or add == 'y')
				{
					while (add != 'n')
					{
						cout << "Please Enter Item" << endl;
						cin >> i_name;
						cout << "Please Enter Item Quantity" << endl;
						cin >> i_quantity;
						DataSearch("catalog.bin", i_name);
						if (chk1 == true)
						{
							cout << "Product Found" << endl;
							add_items_writing("ISL_Inventory.bin", *this);
						}
						cout << "DO you want to Enter Item.Press Y for that and N to go back to Catalog Menu" << endl;
						cin >> add;

						if (add == 'n')
						{
							selection2();

						}
					}
				}
				if (sub_category == 2)
				{
					cout << "NONPERISHABLE GOODS\nDO you want to Enter Item.Press Y for that and N to go back to Catalog Menu" << endl;
					cin >> add;
					if (add == 'Y' or add == 'y')
					{
						while (chk1 != true)
						{
							cout << "Please Enter Item" << endl;
							cin >> i_name;
							cout << "Please Enter Item Quantity" << endl;
							cin >> i_quantity;
							DataSearch("catalog.bin", i_name);
							if (chk1 == true)
							{
								cout << "Product Found" << endl;
								add_items_writing("ISL_Inventory.bin", *this);
							}
							cout << "DO you want to Enter Item.Press Y for that and N to go back to Catalog Menu" << endl;
							cin >> add;

							if (add == 'n')
							{
								selection2();
								break;

							}
						}
					}
				}
			}

		}
		if (category == 2)
		{
			cout << "WELCOME TO PERSONAL HYGIENE SECTOR" << endl;
			cout << "DO you want to Enter Item.Press Y for that and N to go back to Catalog Menu" << endl;
			cin >> add;
			if (add == 'Y' or add == 'y')
			{
				while (add != 'n')
				{
					cout << "Please Enter Item" << endl;
					cin >> i_name;
					cout << "Please Enter Item Quantity" << endl;
					cin >> i_quantity;
					DataSearch("catalog.bin", i_name);
					if (chk1 == true)
					{
						cout << "Product Found" << endl;
						add_items_writing("ISL_Inventory.bin", *this);
					}
					cout << "DO you want to Enter Item.Press Y for that and N to go back to Catalog Menu" << endl;
					cin >> add;
					if (add == 'n')
					{
						selection2();

					}
				}
			}
		}
		if (category == 3)
		{
			cout << "WELCOME TO HOUSEHOLD ITEMS SECTOR" << endl;
			cout << "DO you want to Enter Item.Press Y for that and N to go back to Catalog Menu" << endl;
			cin >> add;
			if (add == 'Y' or add == 'y')
			{
				while (add != 'n')
				{
					cout << "Please Enter Item" << endl;
					cin >> i_name;
					cout << "Please Enter Item Quantity" << endl;
					cin >> i_quantity;
					DataSearch("catalog.bin", i_name);
					if (chk1 == true)
					{
						cout << "Product Found" << endl;
						add_items_writing("ISL_Inventory.bin", *this);
					}
					cout << "DO you want to Enter Item.Press Y for that and N to go back to Catalog Menu" << endl;
					cin >> add;

					if (add == 'n')
					{
						selection2();

					}
				}
			}
		}
	}
	void remove_item_isl()   //to remove item from islamabad
	{
		while (add != 'n')
		{
			cout << "Which Item do you want to remove.Press Y for that and N to go back to Catalog Menu" << endl;
			cin >> add;
			if (add == 'n')
			{
				selection2();
			}
			cout << "Please Enter Item" << endl;
			cin >> i_name;;
			deleteData("ISL_Inventory.bin", i_name);

		}
	}
	void update_item_isl() //to update inventory in islamabad
	{
		while (add != 'n')
		{
			cout << "DO you want to Enter Item.Press Y for that and N to go back to Catalog Menu" << endl;
			cin >> add;
			if (add == 'n')
			{
				selection2();
			}
			cout << "Please Enter Item" << endl;
			cin >> i_name;
			cout << "Please Enter Item Quantity" << endl;
			cin >> i_quantity;
			ChangeQuantity("ISL_Inventory", i_name, i_quantity);
		}
	}

	void view_items_isl()
	{
		reading_Data_Inventory("ISL_Inventory.bin");
	}
	void add_items_writing(const string fileName, Inventory obj) //function to add items in inventory file
	{
		ofstream myFile(fileName, ios::binary | ios::app);

		if (myFile.write((char*)&obj, sizeof(obj)))

			cout << "Successfully Written!\n" << endl;
		else
			cout << "Writing Failed\n" << endl;
		myFile.close();
	}
	void DataSearch(const string fileName, string item)   //function to customize items in inventory file
	{
		Product_Catalog obj;
		fstream myFile(fileName.c_str(), ios::in | ios::out | ios::binary);
		while (myFile.read((char*)&obj, sizeof(obj)))
		{
			if (item == obj.product_name) //if found in catalog then retur that it can update it in inventory
			{
				chk1 = true;
				myFile.close();
			}
			else
			{
				chk1 = false;
				myFile.close();
			}
		}
	}
	void ChangeQuantity(const string fileName, string item, int new_quantity1)     //function to change quantity items in inventory file
	{
		Inventory obj;
		fstream myFile(fileName.c_str(), ios::in | ios::out | ios::binary);
		while (myFile.read((char*)&obj, sizeof(obj)))
		{
			if (item == obj.i_name)
			{
				obj.i_quantity = new_quantity1;
				int current = myFile.tellg();
				int oneobj = sizeof(obj);
				myFile.seekg(current - oneobj);
				myFile.write((char*)&obj, sizeof(obj));
				myFile.close();
			}
		}
	}
	void reading_Data(const string fileName)       //displaying items
	{
		Product_Catalog obj;
		fstream myFile(fileName.c_str());
		while (myFile.read((char*)&obj, sizeof(obj)))
		{
			cout << "Food" << "\n\t" << "PRESICHABLE GOOD :" << "\n\t" << "Name: " << obj.product_name << "\n"
				<< "Price: " << obj.p_price << "\t\t" << "Unit: " << obj.p_unit << "\n" << endl;
			cout << "FOOD\n\t" << "NON PERISHABLE GOODS \n\t";
			cout << "Name: " << obj.product_name << "\t\t" << "Price: " << obj.p_price << "\t\t" << "Unit: " << obj.p_unit << "\n" << endl;
			cout << "PERSONAL HYGIENE:\n\t";
			cout << "Name: " << obj.product_name << "\t\t" << "Price: " << obj.p_price << "\t\t" << "Unit: " << obj.p_unit << "\n" << endl;
			cout << "HOUSE HOLD CLEANING:\n\t";
			cout << "Name: " << obj.product_name << "\t\t" << "Price: " << obj.p_price << "\t\t" << "Unit: " << obj.p_unit << "\n" << endl;
		}
		myFile.close();
	}
	void reading_Data_Inventory(const string fileName)
	{

		Inventory obj;
		fstream myFile(fileName.c_str());
		while (myFile.read((char*)&obj, sizeof(obj)))
		{
			cout << "Food" << "\n\t" << "PRESICHABLE GOOD :" << "\n\t" << "Name: " << obj.i_name << "\n"
				<< "\t\t" << "Quantity: " << obj.i_quantity << "\n" << endl;
			cout << "FOOD\n\t" << "NON PERISHABLE GOODS \n\t";
			cout << "Name: " << obj.i_name << "\t\t" << "Quantity: " << obj.i_quantity << "\n" << endl;
			cout << "PERSONAL HYGIENE:\n\t";
			cout << "Name: " << obj.i_name << "\t\t" << "Quantity: " << obj.i_quantity << "\n" << endl;
			cout << "HOUSE HOLD CLEANING:\n\t";
			cout << "Name: " << obj.i_name << "\t\t" << "Quantity: " << obj.i_quantity << "\n" << endl;
		}
		myFile.close();

	}
	void deleteData(const string fileName, string item)
	{
		Product_Catalog temp;
		ifstream myFile(fileName.c_str());
		while (myFile.read((char*)&temp, sizeof(temp)))
		{
			if (item == temp.product_name) {
				temp.Null(item);
				cout << "The item has been deleted!" << endl;
				return;
			}
		}
	}
	void Null(string item)
	{
		const string fileName = "catalog.bin";
		Product_Catalog temp;
		fstream myFile(fileName.c_str(), ios::in | ios::out | ios::binary);
		ofstream myFileTemp("temp.bin", ios::app | ios::binary);
		while (myFile.read((char*)&temp, sizeof(temp)))
		{
			if (temp.product_name != item)
			{
				myFileTemp.write((char*)&temp, sizeof(temp));
			}
		}
		myFile.close();
		myFileTemp.close();
		remove(fileName.c_str());
		rename("temp.bin", fileName.c_str());
	}
};
class Feedback   //class for feedback
{
public:
	char feedback[200];
	int back;

	void fback()
	{
		cout << "Please Enter Feedback" << endl;
		cin >> feedback;
		add_feedback("feedback", *this);

		cout << "Press 1 to go back to Menu" << endl;
		cin >> back;
		if (back == 1)
		{
			menu(); //back to main menu
		}
	}


	void add_feedback(const string fileName, Feedback obj)
	{
		ofstream myFile(fileName, ios::binary | ios::app);

		if (myFile.write((char*)&obj, sizeof(obj)))      //writing feedback in file

			cout << "Successfully Written!\n" << endl;
		else
			cout << "Writing Failed\n" << endl;
		myFile.close();
	}
};
//class Payment
//{
//public:
//	char payment_customer[25];
//	bool chk1;
//	int payment_method;
//	int go_feedback;
//	char account_number[25];
//
//	
//
//	void reading_Data(const string fileName)
//	{
//		OnlineShopping obj;
//		fstream myFile(fileName.c_str());
//		while (myFile.read((char*)&obj, sizeof(obj)))
//		{
//			cout << "Customer Name: " << obj.customer_cart << endl;
//			cout << "Total Price he has to pay: " << obj.total_price << endl;
//			cout << "Product Name: " << obj.item << endl;
//		}
//		myFile.close();
//	}
//	void DataSearch(const string fileName, string item)
//	{
//		OnlineShopping obj;
//		fstream myFile(fileName.c_str(), ios::in | ios::out | ios::binary);
//		while (myFile.read((char*)&obj, sizeof(obj)))
//		{
//			if (item == obj.customer_cart)
//			{
//				chk1 = true;
//				myFile.close();
//			}
//			else
//			{
//				chk1 = false;
//				myFile.close();
//			}
//		}
//	}
//};
class OnlineShopping
{
public:
	char item[25];
	int quantity;
	int total_price;
	bool chk1;
	char customer_cart[25];
	char payment_decision;
	int payment_city;
	int payment_method;
	char account_number[25];
	int go_feedback;
	int lela;

	Product_Catalog pc1;
	Inventory i2;

	void cart()
	{
		cout << "---------WELCOME TO ONLINE SHOPPING----------" << endl;
		cout << "-------------------------------------------------" << endl;
		reading_Data("catalog.bin");//displaying catalog
		cout << "-------------------------------------------------" << endl;
		cout << "Enter Name of the Customer: " << endl;
		cin >> customer_cart;

		while (payment_decision != 'p' || payment_decision != 'P')
		{
			cout << "Press P for Payment or press R to take input" << endl;
			cin >> payment_decision;
			cout << "----------------" << endl;
			if (payment_decision == 'p' or payment_decision == 'P')
			{
				payment();
			}
			cout << "Enter Product you want to buy from the above menu" << endl;
			cin >> item;
			DataSearch("catalog.bin", item); //reading from catalog if found then can buy 
			if (chk1 == true)
			{
				cout << "Product is found in cart" << endl;
				cout << "Enter Quantity: ";
				cin >> quantity;
				cout << "---" << endl;
				i2.i_quantity = i2.i_quantity - quantity;

				total_price = lela * quantity;
				cout << "Total Bill is: " << total_price << endl; //calculating bill
			}
			else
			{
				cout << "Product not Found.\nEnter Again" << endl;
				cin >> item;
			}
		}
	}
	void payment() //payment method
	{
		cout << "-----------------------------------------------------------" << endl;
		cout << "Enter Customer name to verify that order is there in cart" << endl;
		cin >> customer_cart;
		cout << "-------------------" << endl;

		//reading_Data("cart.bin");
		cout << "------------------------" << endl;
		cout << "|Enter Payment Method:   | " << endl;
		cin >> payment_method;
		cout << "------------------------" << endl;
		if (payment_method == 1)
		{
			cod();  //cash on delivery
		}
		if (payment_method == 2)
		{
			debit();  //debit card
		}
		if (payment_method == 3)
		{
			jazzcash(); //jazzcash easypaisa
		}

	}
	void cod()
	{
		cout << "-------------------------" << endl;
		cout << "Please Enter Account Number: " << endl;
		cin >> account_number;
		cout << "Enter the city (1)Same City (2) Different City" << endl; //to add 30 or 50 for city delievery
		cin >> payment_city;
		cout << "-------------------------" << endl;
		if (payment_city == 1)
		{
			total_price = total_price + 30;
			cout << "Total price after Delievery Charges is: " << total_price << endl;
		}
		else if (payment_city == 2)
		{
			total_price = total_price + 50;
			cout << "Total price after Delievery Charges is: " << total_price << endl;
		}
		cout << "-------------------" << endl;
		cout << "Payment is done\nPress 1 for To Provide feedback" << endl;
		cin >> go_feedback;
		cout << "----------------------" << endl;
		if (go_feedback == 1)
		{
			Feedback fb1;
			fb1.fback();
		}
	}
	void debit()
	{

		cout << "Please Enter Account Number: " << endl;
		cin >> account_number;
		cout << "-------------------" << endl;
		cout << "Payment is done\nPress 1 for To Provide feedback" << endl;
		cin >> go_feedback;
		cout << "-------------------" << endl;
		if (go_feedback == 1)
		{
			Feedback fb2;
			fb2.fback();
		}
	}
	void jazzcash()
	{
		cout << "Please Enter Account Number: " << endl;
		cin >> account_number;
		cout << "-------------------" << endl;
		cout << "Payment is done\nPress 1 for To Provide feedback" << endl;
		cout << "-------------------" << endl;
		cin >> go_feedback;
		if (go_feedback == 1)
		{
			Feedback fb3;
			fb3.fback();
		}
	}
	void reading_Data(const string fileName)         //function to read so that customer can buy from following
	{
		Product_Catalog obj;
		fstream myFile(fileName.c_str());
		while (myFile.read((char*)&obj, sizeof(obj)))
		{
			cout << "Food" << "\n\t" << "PRESICHABLE GOOD :" << "\n\t" << "Name: " << obj.product_name << "\n"
				<< "Price: " << obj.p_price << "\t\t" << "Unit: " << obj.p_unit << "\n" << endl;
			cout << "FOOD\n\t" << "NON PERISHABLE GOODS \n\t";
			cout << "Name: " << obj.product_name << "\t\t" << "Price: " << obj.p_price << "\t\t" << "Unit: " << obj.p_unit << "\n" << endl;
			cout << "PERSONAL HYGIENE:\n\t";
			cout << "Name: " << obj.product_name << "\t\t" << "Price: " << obj.p_price << "\t\t" << "Unit: " << obj.p_unit << "\n" << endl;
			cout << "HOUSE HOLD CLEANING:\n\t";
			cout << "Name: " << obj.product_name << "\t\t" << "Price: " << obj.p_price << "\t\t" << "Unit: " << obj.p_unit << "\n" << endl;
		}
		myFile.close();
	}
	void DataSearch(const string fileName, string item) //entered item is equal to menu
	{
		Product_Catalog obj;
		fstream myFile(fileName.c_str(), ios::in | ios::out | ios::binary);
		while (myFile.read((char*)&obj, sizeof(obj)))
		{
			if (item == obj.product_name)
			{
				chk1 = true;
				lela = obj.p_price;
				myFile.close();
			}
			else
			{
				chk1 = false;
				myFile.close();
			}
		}
	}
	void add_in_cart(const string fileName, OnlineShopping obj)       //writing in cart file the items ordered
	{
		ofstream myFile(fileName, ios::binary | ios::app);

		if (myFile.write((char*)&obj, sizeof(obj)))

			cout << "Successfully Written!\n" << endl;
		else
			cout << "Writing Failed\n" << endl;
		myFile.close();
	}
};
class Manager :public User
{
protected:
	char manager_username[100];
	char gender_m[100];
	char email_m[100];
	char number_m[100];
	char address_m[100];
	char inven_decision;
public:
	Manager() {}
	Manager(string manager_username, string gender_m, string email_m, string number_m, string adress_m, string name, string password, string cnic) : User(name, password, cnic)
	{
		strcpy_s(this->manager_username, manager_username.c_str());
		strcpy_s(this->gender_m, gender_m.c_str());
		strcpy_s(this->email_m, email_m.c_str());
		strcpy_s(this->number_m, number_m.c_str());
		strcpy_s(this->address_m, adress_m.c_str());
		strcpy_s(this->name, name.c_str());
		strcpy_s(this->password, password.c_str());
		strcpy_s(this->cnic, cnic.c_str());
	}

	//setters
	void setUsername(string manager_username)
	{
		strcpy_s(this->manager_username, manager_username.c_str());
	}

	void setPassword(string password)
	{
		strcpy_s(this->password, password.c_str());
	}

	void setName(string name)
	{
		strcpy_s(this->name, name.c_str());
	}
	void setGender(string gender_m)
	{
		strcpy_s(this->gender_m, gender_m.c_str());
	}
	void setEmail(string email_m)
	{
		strcpy_s(this->email_m, email_m.c_str());
	}
	void setNumber(string number_m)
	{
		strcpy_s(this->number_m, number_m.c_str());
	}
	void setAdress(string adress_m)
	{
		strcpy_s(this->address_m, adress_m.c_str());
	}
	void setCnic(string cnic)
	{
		strcpy_s(this->cnic, cnic.c_str());
	}

	//getters
	string getManager_UserName()
	{
		return manager_username;
	}
	string getManager_Name()
	{
		return name;
	}
	string getManager_Cnic()
	{
		return cnic;
	}
	string getManager_Password()
	{
		return password;
	}
	string getManager_Gender()
	{
		return gender_m;
	}
	string getManager_Number()
	{
		return number_m;
	}
	string getManager_Adress()
	{
		return address_m;
	}
	string getManager_Email()
	{
		return email_m;
	}

	void Display()
	{
		cout << "name : " << name << endl;
		cout << "cnic : " << cnic << endl;
		cout << "password : " << endl;
	}
	void Register_Manager()
	{

		cout << "----MANAGER RESGISTRATION----" << endl;
		cout << "|Please Enter Your Name: ";
		cin >> name;

		cout << "|Please Enter Password: ";
		cin >> password;

		bool chk = isValid_password(password);  //for valid password
		if (chk == true)
		{
			cout << "Password is Valid" << endl;
		}
		if (chk == false)
		{
			while (chk != true)
			{
				cout << "Password is not Valid" << endl;
				cout << "Enter Again: " << endl;
				cin >> password;
				chk = isValid_password(password);
			}
		}
		cout << "Please Enter CNIC: ";
		cin >> cnic;

		bool chk1 = isValidCNIC(cnic);  //for valid cnic
		if (chk1 == true)
		{
			cout << "CNIC is Valid" << endl;
		}
		if (chk1 == false)
		{
			while (chk1 != true)
			{
				cout << "CNIC is not Valid" << endl;
				cout << "Enter Again" << endl;
				cin >> cnic;
				chk1 = isValidCNIC(cnic);
			}
		}
		cout << "Please Enter Gender: ";
		cin >> gender_m;

		cout << "Please Enter Email: ";
		cin >> email_m;

		cout << "Please Enter Number: ";
		cin >> number_m;

		cout << "Please Enter Address: ";
		cin >> address_m;

		cout << "Please Enter Username: ";
		cin >> manager_username;

		Manager m;
		fstream muzi;
		m.setUsername(manager_username);
		m.setPassword(password);
		m.setAdress(address_m);
		m.setCnic(cnic);
		m.setEmail(email_m);    //writing in file manager
		m.setGender(gender_m);
		m.setName(name);
		m.setNumber(number_m);

		m.Display();
		muzi.open("manager.bin", ios::out | ios::binary | ios::app);
		if (!muzi)
		{
			cout << "Error" << endl;
		}
		muzi.write((char*)&m, sizeof(m));
		muzi.close();


		cout << "Manager Registered in Successfully" << endl;
		cout << "----------------------------------------" << endl;
		menu();
	}
	void Login_Manager() //login manager
	{
		Manager m;
		cout << "------MANAGER LOGIN--------" << endl;
		cout << "|Please Enter Username: ";
		cin >> manager_username;


		fstream muzi;
		muzi.open("manager.bin", ios::in | ios::binary | ios::out);  //reading from file the specific person registered

		while (!muzi.eof())
		{
			muzi.read((char*)&m, sizeof(m));
			if (manager_username != m.getManager_UserName())
			{
				while (manager_username != m.getManager_UserName())
				{
					cout << "\n\nUser Name not found\n";
					cout << "Enter User name again : ";
					cin >> manager_username;
				}

			}
			if (manager_username == m.getManager_UserName())
			{

				cout << "\n\nUser Name found\n";
				break;

			}

		}
		muzi.close();

		cout << "Please Enter Password: ";
		cin >> password;

		muzi.open("manager.bin", ios::in | ios::binary | ios::out);

		while (!muzi.eof())
		{
			muzi.read((char*)&m, sizeof(m));
			if (password != m.getManager_Password())
			{
				while (password != m.getManager_Password())
				{
					cout << "\n\nPassword not found\n";
					cout << "Password name again : ";
					cin >> password;
				}
			}
			if (manager_username == m.getManager_Password())
			{

				cout << "\n\nPassword Name found\n";
				break;

			}
		}
		muzi.close();

		cout << "Manager Logged in Successfully" << endl;
		cout << "---------------------------------------------------------" << endl;
		cout << "|Press I for Inventory or Press M to go back to main menu|" << endl;
		cout << "--------------------------------------------------------" << endl;
		cin >> inven_decision;

		if (inven_decision == 'i' || inven_decision == 'I')      //to go to inventory
		{
			Inventory i;
			i.selection2();
		}
		if (inven_decision == 'm' || inven_decision == 'M')
		{
			menu();
		}

	}
};
class Customer :public User
{
protected:
	char name_c[100];
	char password_c[100];
	char cnic_c[100];
	char customer_username[100];
	char gender_c[100];
	char email_c[100];
	char number_c[100];
	char address_c[100];

public:
	char customer_decision;

	Customer()
	{}

	Customer(string customer_username1, string gender_c, string email_c, string number_c, string adress_c, string name, string password, string cnic) :User(name, password, cnic)
	{
		strcpy_s(this->customer_username, customer_username1.c_str());
		strcpy_s(this->gender_c, gender_c.c_str());
		strcpy_s(this->email_c, email_c.c_str());
		strcpy_s(this->number_c, number_c.c_str());
		strcpy_s(this->address_c, adress_c.c_str());
		strcpy_s(this->name_c, name.c_str());
		strcpy_s(this->password_c, password.c_str());
		strcpy_s(this->cnic, cnic.c_str());
	}

	//setters
	void setUsername_c(string customer_username_c)
	{
		strcpy_s(this->customer_username, customer_username_c.c_str());
	}

	void setPassword_c(string password)
	{
		strcpy_s(this->password_c, password.c_str());
	}

	void setName_c(string name)
	{
		strcpy_s(this->name_c, name.c_str());
	}
	void setGender_c(string gender_c)
	{
		strcpy_s(this->gender_c, gender_c.c_str());
	}
	void setEmail_c(string email_c)
	{
		strcpy_s(this->email_c, email_c.c_str());
	}
	void setNumber_c(string number_c)
	{
		strcpy_s(this->number_c, number_c.c_str());
	}
	void setAdress_c(string adress_c)
	{
		strcpy_s(this->address_c, adress_c.c_str());
	}
	void setCnic_c(string cnic)
	{
		strcpy_s(this->cnic_c, cnic.c_str());
	}

	//getters
	string getCustomer_UserName()
	{
		return customer_username;
	}
	string getCustomer_Name()
	{
		return name_c;
	}
	string getCustomer_Cnic()
	{
		return cnic_c;
	}
	string getCustomer_Password()
	{
		return password_c;
	}
	string getCustomer_Gender()
	{
		return gender_c;
	}
	string getCustomer_Number()
	{
		return number_c;
	}
	string getCustomer_Adress()
	{
		return address_c;
	}
	string getCustomer_Email()
	{
		return email_c;
	}


	void Register_Customer()
	{
		cout << "------CUSTOMER RESGISTRATION---------" << endl;
		cout << "|Please Enter Your Name: ";
		cin >> name_c;

		cout << "| Please Enter Password : ";
		cin >> password_c;

		bool chk = isValid_password(password_c);  //for valid password
		if (chk == true)
		{
			cout << "Password is Valid" << endl;
		}
		if (chk == false)
		{
			while (chk != true)
			{
				cout << "Password is not Valid" << endl;
				cout << "Enter Again" << endl;
				cin >> password_c;
				chk = isValid_password(password_c);
			}
		}

		cout << "Please Enter CNIC: ";
		cin >> cnic_c;

		bool chk1 = isValidCNIC(cnic_c);   //for valid cnic
		if (chk1 == true)
		{
			cout << "CNIC is Valid" << endl;
		}
		if (chk1 == false)
		{
			while (chk1 != true)
			{
				cout << "CNIC is not Valid" << endl;
				cout << "Enter Again: " << endl;
				cin >> cnic_c;
				chk1 = isValidCNIC(cnic_c);
			}
		}
		cout << "Please Enter Gender: ";
		cin >> gender_c;

		cout << "Please Enter Email: ";
		cin >> email_c;

		cout << "Please Enter Number: ";
		cin >> number_c;

		cout << "Please Enter Address: ";
		cin >> address_c;

		cout << "Please Enter Username: ";
		cin >> customer_username;

		Customer c;
		fstream muzi;
		c.setUsername_c(customer_username);
		c.setPassword(password_c);
		c.setAdress_c(address_c);
		c.setCnic(cnic_c);
		c.setEmail_c(email_c);
		c.setGender_c(gender_c);
		c.setName(name_c);
		c.setNumber_c(number_c);

		muzi.open("customer.bin", ios::out | ios::binary | ios::app);  //writing in file
		if (!muzi)
		{
			cout << "Error" << endl;
		}
		muzi.write((char*)&c, sizeof(c));
		muzi.close();


		cout << "Customer Registered in Successfully" << endl;
		menu();
	}
	void Login_Customer()
	{
		Customer c1;
		cout << "---------CUSTOMER LOGIN------------" << endl;
		cout << "|Please Enter Username : ";
		cin >> customer_username;

		fstream muzi;
		muzi.open("customer.bin", ios::in | ios::binary | ios::out);   //reading from file that specific person registered username

		while (!muzi.eof())
		{
			muzi.read((char*)&c1, sizeof(c1));
			if (customer_username != c1.getCustomer_UserName())
			{
				while (customer_username != c1.getCustomer_UserName())
				{
					cout << "\n\nUser Name not found\n";
					cout << "Enter User name again : ";
					cin >> customer_username;
				}
			}
			if (customer_username == c1.getCustomer_UserName())
			{

				cout << "\n\nUser Name found\n";
				break;

			}

		}
		muzi.close();

		cout << "Please Enter Password:";
		cin >> password;

		muzi.open("customer.bin", ios::in | ios::binary | ios::out);

		while (!muzi.eof())
		{
			muzi.read((char*)&c1, sizeof(c1));               //reading from file that specific person registered password
			if (password_c != c1.getCustomer_Password())
			{
				while (password_c != c1.getCustomer_Password())
				{
					cout << "\n\nPassword not found\n";
					cout << "Password name again : ";
					cin >> password_c;
				}
			}
			if (password_c == c1.getCustomer_Password())
			{

				cout << "\n\nPassword Name found\n";
				break;

			}
			cout << "Customer Logged in Successfully" << endl;
			cout << "--------------------------------------" << endl;
		}
		muzi.close();
		cout << "----------------------------------------------------------------" << endl;
		cout << "|Press O to go to Online shopping or M to go back to Main Menu|" << endl;
		cin >> customer_decision;
		if (customer_decision == 'o' or customer_decision == 'O') //to go to shopping online
		{
			OnlineShopping o;
			o.cart();
		}
		if (customer_decision == 'm' or customer_decision == 'M')
		{
			menu();
		}
	}
};
class Admin :public User   //admin class
{

public:
	char manager_decision;
	char admin_username[100];

	string getUserName()
	{
		return admin_username;
	}

	string GetName()
	{
		return name;
	}
	string GetCnic()
	{
		return cnic;
	}
	string GetPassword()
	{
		return password;
	}

	Admin(string name1 = "Muzammil", string password1 = "Muzi0612", string cnic1 = "1234567891234", string admin_username1 = "Muzi06")
	{
		strcpy_s(admin_username, admin_username1.c_str());
		strcpy_s(name, name1.c_str());
		strcpy_s(password, password1.c_str());
		strcpy_s(cnic, cnic1.c_str());
	}

	void Login_Admin()
	{
		Admin a;
		fstream muzi;
		string admin_usernsme1;
		muzi.open("admin.bin", ios::out | ios::binary);
		if (!muzi)
		{
			cout << "Error" << endl;                            //writing in admin file the arguments passed in constructor
		}
		muzi.write((char*)&a, sizeof(a));
		muzi.close();


		cout << "-------ADMIN LOGIN---------" << endl;
		cout << "|  Please Enter Username: ";
		cin >> admin_username;
		while (admin_username != a.getUserName())
		{
			cout << "Registered Username did not match ";
			cout << "Please Enter Valid UserName:";
			cin >> admin_username;
		}
		if (admin_username == a.getUserName())
		{
			cout << "Admin UserName Matched \n";
		}

		cout << "| Please Enter Password:";
		cin >> password;                                       //matching with the info written in file if pass or username matches
		while (password != a.GetPassword())
		{
			cout << "Registered Password did not match ";
			cout << "Please Enter Valid Password:";
			cin >> password;
		}
		if (password == a.GetPassword())
		{
			cout << "Admin Password Matched \n";
		}
		cout << "Admin Logged in Successfully\n========================" << endl;
		cout << " ----------------------------------" << endl;
		cout << "|Press R to Register a Manager    |" << endl;
		cout << "| Or" << endl;
		cout << "|Press C to go to Product Catalog |" << endl;
		cout << " --------------------------------" << endl;
		cin >> manager_decision;

		if (manager_decision == 'r' or manager_decision == 'R')
		{
			Manager m;
			m.Register_Manager();
		}
		if (manager_decision = 'c' or manager_decision == 'C')
		{
			Product_Catalog pc;
			pc.selection();
		}
	}

};


void menu()
{
	int decision;
	cout << "\t-------------WELCOME TO THE STORE---------------" << endl;
	cout << "\t===========================================" << endl;        //main menu
	cout << " \t|   Please Log in as Admin by pressing 1   | " << endl;
	cout << "\t|  Press 2 to Login as Manager             |" << endl;
	cout << "\t|  Press 3 for Customer Registration       |" << endl;
	cout << "\t|  Press 4 to Login as Customer            | " << endl;
	cout << "\t|  Press 5 to Exit                         |" << endl;
	cout << "\t===========================================" << endl;
	cin >> decision;

	if (decision == 1)
	{
		Admin a1;
		a1.Login_Admin();
	}
	if (decision == 2)
	{
		Manager m1;
		m1.Login_Manager();
	}

	if (decision == 3)
	{
		Customer c;
		c.Register_Customer();
	}

	if (decision == 4)
	{
		Customer c;
		c.Login_Customer();
	}
	if (decision == 5)
	{
		exit(0);
	}
}
int main()
{
	menu();

	return 0;
}