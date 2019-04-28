#include <string>
class Database{
	Database(const std::string Database_Name);
	~Database();
	void Read_Database();
	void Add_Table();
	void Select_Table();
private:
	int Num_of_Table;
	std::string* Table_Pointer[];

};

/*
	The stucture of database is initially imagined as belowing:
	Each database has its own dictionary (as file folder) which holds
		1.a .dtb file which describe the database;
		2.several .tab file containing data of tables.
	When database are created or chosen, it's initialized as a temp in 
RAM and sync to files shortly after.
 */
