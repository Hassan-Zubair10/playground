#include <iostream>
#include <sqlite3.h>
using namespace std;

bool open_database_connection(const char* filename, sqlite3* db_con) noexcept
{
    int result = sqlite3_open(filename, &db_con);
    if (result != SQLITE_OK)
    {
        std::cout << "An error occurred while opening db_conn with: " << filename << std::endl;
        return false;
    }

    return true;
}

bool sqlite3_exec_ex(sqlite3* db_con, const char* query) noexcept
{
    char* error_message = nullptr;

    int result = sqlite3_exec(db_con, query, NULL, NULL, &error_message);
    if (result != SQLITE_OK)
    {
        std::cout << "An error occurred while executing query: " << query << std::endl;
        return false;
    }

    return true;
}


int main()
{
    sqlite3* db_con = nullptr;
    std::string db_filename = "test.db";

    if (!open_database_connection("test.db", db_con))
    {
        std::cout << "Error Message: " << sqlite3_errmsg(db_con) << std::endl;
        return 1;
    }

    std::cout << "Connected to database successfully." << std::endl;

    std::string query = "CREATE TABLE COMPANY("  \
        "ID INT PRIMARY KEY     NOT NULL," \
        "NAME           TEXT    NOT NULL," \
        "AGE            INT     NOT NULL," \
        "ADDRESS        CHAR(50)," \
        "SALARY         REAL );";   

    return 0;
}