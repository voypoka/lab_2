#include "TextDatabase.h"

#include <fstream>
#include <sstream>

TextDatabase::TextDatabase(const QString &filename) : filename(filename.toStdString()) {
    std::ifstream file(filename.toStdString());

    if (!file.is_open()) {
        std::ofstream newFile(filename.toStdString());
        if (!newFile.is_open()) {
            std::cerr << "Ошибка при создании файла: " << filename.toStdString() << std::endl;
            return;
        }
        newFile.close();
        std::cout << "Файл создан: " << filename.toStdString() << std::endl;
        return;
    }

    std::string line;

    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string item;
        std::vector<std::string> items;

        while (std::getline(ss, item, ';')) {
            item.erase(remove(item.begin(), item.end(), '\"'), item.end());
            items.push_back(item);
        }

        if (items.size() == 5) {
            int id = std::stoi(items[0]);
            std::string str1 = items[1];
            std::string str2 = items[2];
            std::string str3 = items[3];
            int intValue = std::stoi(items[4]);

            db[id] = std::make_tuple(str1, str2, str3, intValue);
        }
    }

    file.close();
}

TextDatabase::~TextDatabase() {
    std::ofstream outFile(filename);

    if (outFile.is_open()) {
        for (const auto &entry : db) {
            int id = entry.first;
            auto values = entry.second;

            std::cout << "перезапись\n";

            std::string str1 = std::get<0>(values);
            std::string str2 = std::get<1>(values);
            std::string str3 = std::get<2>(values);
            int intValue = std::get<3>(values);

            outFile << id << ";" << str1 << ";" << str2 << ";" << str3 << ";" << intValue << "\n";
        }
        outFile.close();
    } else {
        std::cerr << "Ошибка открытия файла для записи." << std::endl;
    }

    db.clear();
    filename.clear();
    std::cout << "destruction finished\n";
};

void TextDatabase::create() {
    std::cout << "This message in Create\n";
}

void TextDatabase::open() {
    std::cout << "This message in Open\n";
    for (const auto &entry : db) {
        int id = entry.first;
        auto values = entry.second;

        std::string str1 = std::get<0>(values);
        std::string str2 = std::get<1>(values);
        std::string str3 = std::get<2>(values);
        int intValue = std::get<3>(values);

        std::cout << "ID: " << id << ", Str1: " << str1 << ", Str2: " << str2 << ", Str3: " << str3
                  << ", Int: " << intValue << std::endl;
    }
}

void TextDatabase::BackupDatabase(const std::string &backupFolder) {
    if (!std::filesystem::exists(backupFolder)) {
        std::filesystem::create_directory(backupFolder);
    }

    std::string baseName = std::filesystem::path(filename).stem().string();
    std::string extension = std::filesystem::path(filename).extension().string();

    std::string backupFileName =
        backupFolder + "/" + baseName + "_backup" + std::to_string(count_backups + 1) + ".txt";

    std::ofstream backupFile(backupFileName);
    if (backupFile.is_open()) {
        for (const auto &entry : db) {
            int id = entry.first;
            auto values = entry.second;

            std::string str1 = std::get<0>(values);
            std::string str2 = std::get<1>(values);
            std::string str3 = std::get<2>(values);
            int intValue = std::get<3>(values);

            backupFile << id << ";" << str1 << ";" << str2 << ";" << str3 << ";" << intValue
                       << "\n";
        }
        backupFile.close();
        std::cout << "Бэкап выполнен в " << backupFileName << std::endl;
        ++count_backups;
    } else {
        std::cerr << "Ошибка открытия файла для бэкапа." << std::endl;
    }
}

void TextDatabase::ImportToCSV(const std::string &backupFolder) {
    if (!std::filesystem::exists(backupFolder)) {
        std::filesystem::create_directory(backupFolder);
    }

    std::string baseName = std::filesystem::path(filename).stem().string();
    std::string extension = std::filesystem::path(filename).extension().string();

    std::string backupFileName = backupFolder + "/" + baseName + ".csv";

    std::ofstream backupFile(backupFileName);
    if (backupFile.is_open()) {
        for (const auto &entry : db) {
            int id = entry.first;
            auto values = entry.second;

            std::string str1 = std::get<0>(values);
            std::string str2 = std::get<1>(values);
            std::string str3 = std::get<2>(values);
            int intValue = std::get<3>(values);

            backupFile << id << ";" << str1 << ";" << str2 << ";" << str3 << ";" << intValue
                       << "\n";
        }
        backupFile.close();
        std::cout << "Импорт выполнен в " << backupFileName << std::endl;
        ++count_backups;
    } else {
        std::cerr << "Ошибка открытия файла для импорта." << std::endl;
    }
}
