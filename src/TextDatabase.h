#ifndef TEXTDATABASE_H
#define TEXTDATABASE_H

#include <QString>
#include <iostream>

#include <map>
#include <vector>
#include <string>

class TextDatabase {
public:
    explicit TextDatabase(const QString &filename);
    ~TextDatabase();

    std::map<int, std::tuple<std::string, std::string, std::string, int>> db;
    int count_delete_by_id = 0;
    int count_backups = 0;
    std::string filename;

    void BackupDatabase(const std::string &backupFolder);
    void ImportToCSV(const std::string &importFolder);
    void create();
    void open();
    void save();
    void clear();
};

#endif
