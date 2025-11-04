#pragma once

#include <pqxx/pqxx>
#include <memory>
#include <string>

using namespace std;

class Database {
public:
    Database(const string& connectionString);
    ~Database();

    bool isConnected() const;
    unique_ptr<pqxx::work> createWork();
    pqxx::connection& getConnection();

private:
    unique_ptr<pqxx::connection> conn_;
};
