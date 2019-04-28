#include <iostream>
#include <string>
#include <regex>


/*******************************************************************************
 * The belowings are the definition of those regex referring to those command. *
 *******************************************************************************/

std::regex Check_Database_Creation("^create database \\w+;$");
// Database creation *** 'create database database_name;'

std::regex Check_Database_Choosing("^use \\w+;$");
// Database choosing *** 'use database_name;'

std::regex Check_Table_Creation("^create table \\w+[ ]?([^\f\n\r\t\v]);$");
// Table creation *** 'create table table_name ('name' int,'name' varchar(20));'

std::regex Check_Data_Insertion("^insert into \\w+ values[ ]?([^\f\n\r\t\v]);$");
// Data insertion *** 'insert into table_name values("name",123,234);'

std::regex Check_Data_Searching("^select \\w+ from \\w+");
// Data searching *** 'select name from table_name;'

std::regex Check_Data_Updating("update \\w+ set \\w+ = \\w+");
// Data updating *** 'update table_name set name = newValue where name op value;'

std::regex Check_Data_Erasing("delete from \\w+");
// Data erasing *** 'delete from table_name where name op value;'

std::regex Check_Where_Sentence("where \\w+ (<|>|<=|>=|!=|=) \\w+;$");
// The function 'where' only have to deal with one column. Operators included are '<' '<=' '>' '>=' '=' '!='.

/*******************************************************************************
 * Funcion name: Command 													   *
 * Description:	The function to deal with SQL input (Jump to related commands) *
 * Calls: 																	   *
 *******************************************************************************/

int Command(){
	std::string tempcommand="";
	tempcommand = std::cin.get();
	std::getchar();

}