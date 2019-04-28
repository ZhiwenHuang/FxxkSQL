/*************************************************************
 * this is a draft to check regex while building the project *
 *************************************************************/

#include <iostream>
#include <regex>
using namespace std;

int main(){
	regex reg1("^create database!?[[<>=]\\w+");
	string s1 = "create database!=testdb";
	string s2 = "create database";
	smatch rr1;
	smatch rr2;
	cout << boolalpha << regex_match(s1, rr1, reg1) << endl;
    cout << "s1匹配结果：" << rr1.str() << endl;
    cout << boolalpha << regex_match(s2, rr2, reg1) << endl;
    cout << "s2匹配结果：" << rr2.str() << endl;
    cout << endl;
}