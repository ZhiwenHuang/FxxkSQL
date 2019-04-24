This is a description text for eepa's final homework, self-made SQL.

Fuctions to be introduced are listed below while the command required are contained in quotation marks：
1. Database creation *** 'create database database_name;'
2. Database choosing *** 'use database_name;'
3. Table creation *** 'create table table_name ('name' int,'name' varchar(20));'
4. Data insertion *** 'insert into table_name values("name",123,234);'
5. Data searching *** 'select name from table_name;'
   Both 'where' and '*' command are required in data searching.
6. Data updating *** 'update table_name set name = newValue where name op value;' // 'op' refers to operator '<>!='
7. Data erasing *** 'delete from table_name where name op value;'

Special detailed requests:
1. Data type must contain int and varchar. There's no need to define int's length but length definition of varchar is a must.
2. The function 'select' should give support to '*' while only '*' means listing all the table.
3. The function 'where' only have to deal with one column. Operators included are '<' '<=' '>' '>=' '=' '!='.

Extra targets are listed if realized.