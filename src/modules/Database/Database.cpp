#include "Database.h"
#include <iostream>

using namespace std;

// throws and prints errors for debugging reasons

Database::Database(const string& connectionString) {
    try { // attempts to connect, if fails print (if succeed user dont see db stuff)
        conn_ = make_unique<pqxx::connection>(connectionString); 
    } catch (const exception &e) {
        cerr << "DB Connection error: " << e.what() << endl;
    }
}

Database::~Database() { // closes connection
    if (conn_ && conn_->is_open()) {
        conn_->disconnect();
    }
}

bool Database::isConnected() const {
    return conn_ && conn_->is_open();
}

unique_ptr<pqxx::work> Database::createWork() {
    if (!isConnected()) {
        throw runtime_error("Database not connected");
    }
    return make_unique<pqxx::work>(*conn_);
}

pqxx::connection& Database::getConnection() {
    if (!isConnected()) {
        throw runtime_error("Database not connected");
    }
    return *conn_;
}
