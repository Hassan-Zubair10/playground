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

int callback(void* first_arg, int argc, char* argv[], char* column[]) noexcept
{
    for (int i = 0; i < argc; i++)
    {
        const auto column_result = argv[i] ? argv[i] : "NULL";
        std::cout << column[i] << " = " << column_result << std::endl;
    }
    std::cout << std::endl;
    return 0;
}

bool sqlite3_exec_ex(sqlite3* db_con, const char* query, char* error_message) noexcept
{
    int result = sqlite3_exec(db_con, query, callback, 0, &error_message); // I get SQLITE_MISUSE here
    if (result != SQLITE_OK)
    {
        std::cout << "An error occurred while executing query: " << query << std::endl;
        std::cout << "Error code: " << result << std::endl;
        std::cout << "Error: " << error_message << std::endl;
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

    char* error_message = nullptr;
    bool result = sqlite3_exec_ex(db_con, query.c_str(), error_message);
    if (!result)
    {
        std::cout << "SQL Error: " << error_message << std::endl;
        sqlite3_free(error_message);
        return 1;
    }

    query = "INSERT INTO COMPANY (ID,NAME,AGE,ADDRESS,SALARY) "  \
         "VALUES (1, 'Paul', 32, 'California', 20000.00 ); " \
         "INSERT INTO COMPANY (ID,NAME,AGE,ADDRESS,SALARY) "  \
         "VALUES (2, 'Allen', 25, 'Texas', 15000.00 );" \
         "INSERT INTO COMPANY (ID,NAME,AGE,ADDRESS,SALARY)" \
         "VALUES (3, 'Teddy', 23, 'Norway', 20000.00 );" \
         "INSERT INTO COMPANY (ID,NAME,AGE,ADDRESS,SALARY)" \
         "VALUES (4, 'Mark', 25, 'Rich-Mond ', 65000.00 );";
    
    result = sqlite3_exec_ex(db_con, query.c_str(), error_message);
    if (!result)
    {
        std::cout << "SQL Error: " << error_message << std::endl;
        sqlite3_free(error_message);
        return 1;
    }

    query = "SELECT * from COMPANY";
    result = sqlite3_exec_ex(db_con, query.c_str(), error_message);
    if (!result)
    {
        std::cout << "SQL Error: " << error_message << std::endl;
        sqlite3_free(error_message);
        return 1;
    }


    sqlite3_close(db_con);
    return 0;
}