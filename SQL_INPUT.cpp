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

std::regex Check_Table_Creation("^create table \\w+[ ]?([^\f\n\r\t\v]+);$");
// Table creation *** 'create table table_name ('name' int,'name' varchar(20));'

std::regex Check_Data_Insertion("^insert into \\w+ values[ ]?([^\f\n\r\t\v]+);$");
// Data insertion *** 'insert into table_name values("name",123,234);'

std::regex Check_Data_Searching("^select (\\w+|\\*) from \\w+");
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

int Command() {
//int main(){
	std::string Temp_Command = "";
	std::getline(std::cin,Temp_Command,'\n');
	//std::cout<<Temp_Command<<std::endl;
	std::smatch Command_Match_Result;
	if(std::regex_search(Temp_Command, Command_Match_Result, Check_Database_Creation)){
		//std::cout<<"command1 "<<Command_Match_Result.str()<<std::endl;
	}
	else if(std::regex_search(Temp_Command, Command_Match_Result, Check_Database_Choosing)){
		//std::cout<<"command2 "<<Command_Match_Result.str()<<std::endl;
	}
	else if(std::regex_search(Temp_Command, Command_Match_Result, Check_Table_Creation)){
		//std::cout<<"command3 "<<Command_Match_Result.str()<<std::endl;
	}
	else if(std::regex_search(Temp_Command, Command_Match_Result, Check_Data_Insertion)){
		//std::cout<<"command4 "<<Command_Match_Result.str()<<std::endl;
	}
	else if(std::regex_search(Temp_Command, Command_Match_Result, Check_Data_Searching)){
		//std::cout<<"command5 "<<Command_Match_Result.str()<<std::endl;
	}
	else if(std::regex_search(Temp_Command, Command_Match_Result, Check_Data_Updating)){
		//std::cout<<"command6 "<<Command_Match_Result.str()<<std::endl;
	}
	else if(std::regex_search(Temp_Command, Command_Match_Result, Check_Data_Erasing)){
		//std::cout<<"command7 "<<Command_Match_Result.str()<<std::endl;
	}
	else std::cout<<"Unknown command, please try again. Enter command 'help;' if help is necessary."<<std::endl;
	if(std::regex_search(Temp_Command, Command_Match_Result, Check_Where_Sentence)){
		//std::cout<<"commandwhere "<<Command_Match_Result.str()<<std::endl;
	}

}