#include "databaseM.h"
#include <stdexcept>
#include <stdio.h>
#include <iostream>
#include <sstream>
#include "mysql_connection.h"
#include "mysql_driver.h"
#include <mysql/mysql.h>
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>

using namespace std;
using namespace sql;

Character* dbmRX(Character* player)
{
	//Declaration of all the sql variables we require
	sql::Driver *driver;
	sql::Connection *con;
	sql::ResultSet *res;
	//sql::Statement *stmt;
	sql::PreparedStatement *pstmt;
	int var1 = 0;
	//const string database("JAMGame");
	
	
	//Set up the connection to the database at ip address 192.168.42.254 on port 3306 (this port may change in the future. Use webadmin account with password, as this is on a closed network the password and account name are not hidden but will be in the future
	driver = get_driver_instance();
	con = driver->connect("tcp://192.168.42.254:3306", "webadmin", "ap4894");
	//Select the JAMGame database
	con->setSchema("JAMGame");
	
	pstmt = con->prepareStatement("SELECT x_position FROM Character2 WHERE name='Adam'");
	res = pstmt->executeQuery();
	
	while(res->next())
	{
		var1 = res->getInt(1);
		printf("value in the database is : %d\n", var1);
		player->position->set_xCord(var1);
		printf("value in player object is %d\n", player->position->get_xCord());
			
	}	
	
	delete res;
	delete pstmt;
	delete con;
	
	return player;
}
void dbmSX(Character* player)
{
	sql::Driver *driver;
	sql::Connection *con;
	//sql::ResultSet *res;
	//sql::Statement *stmt;
	sql::PreparedStatement *pstmt;
	
	int var1 =0;
	var1 = player->position->get_xCord();
	printf("11111var1 is equal to %d\n", var1);
	driver = get_driver_instance();
	con = driver->connect("tcp://192.168.42.254:3306", "webadmin", "ap4894");
	con->setSchema("JAMGame");
	
	pstmt = con->prepareStatement("UPDATE Character2 SET x_position=? WHERE name='Adam' ");
	pstmt->setInt(1, var1);
	pstmt->executeUpdate();
	
	//stmt = con->createStatement();
	//stmt->execute("UPDATE Character2 SET x_position=" + var1 "WHERE name=Adam");
		
	
	delete pstmt;
	delete con;
}
Character* dbmRY(Character* player)
{
	//Declaration of all the sql variables we require
	sql::Driver *driver;
	sql::Connection *con;
	sql::ResultSet *res;
	//sql::Statement *stmt;
	sql::PreparedStatement *pstmt;
	int var1 = 0;
	//const string database("JAMGame");
	
	
	//Set up the connection to the database at ip address 192.168.42.254 on port 3306 (this port may change in the future. Use webadmin account with password, as this is on a closed network the password and account name are not hidden but will be in the future
	driver = get_driver_instance();
	con = driver->connect("tcp://192.168.42.254:3306", "webadmin", "ap4894");
	//Select the JAMGame database
	con->setSchema("JAMGame");
	
	pstmt = con->prepareStatement("SELECT y_position FROM Character2 WHERE name='Adam'");
	res = pstmt->executeQuery();
	
	while(res->next())
	{
		var1 = res->getInt(1);
		printf("value in the database is y : %d\n", var1);
		player->position->set_yCord(var1);
		printf("value in player object is y %d\n", player->position->get_yCord());
			
	}	
	
	delete res;
	delete pstmt;
	delete con;
	
	return player;
}
void dbmSY(Character* player)
{
	sql::Driver *driver;
	sql::Connection *con;
	//sql::ResultSet *res;
	//sql::Statement *stmt;
	sql::PreparedStatement *pstmt;
	
	int var1 =0;
	var1 = player->position->get_yCord();
	printf("11111var1 is equal to %d\n", var1);
	driver = get_driver_instance();
	con = driver->connect("tcp://192.168.42.254:3306", "webadmin", "ap4894");
	con->setSchema("JAMGame");
	
	pstmt = con->prepareStatement("UPDATE Character2 SET y_position=? WHERE name='Adam' ");
	pstmt->setInt(1, var1);
	pstmt->executeUpdate();
	
	//stmt = con->createStatement();
	//stmt->execute("UPDATE Character2 SET x_position=" + var1 "WHERE name=Adam");
		
	
	delete pstmt;
	delete con;
}
