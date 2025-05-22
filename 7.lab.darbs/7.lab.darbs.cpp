//221RDB411 Miķelis Kalme-Danenbaums

#include <iostream>
#include <string>
#include <map>
#include <set>

std::map<std::string, std::set<std::string>> map = {};

void add(std::string word1, std::string word2) {
    map[word1].insert(word2);
    map[word2].insert(word1);
}

void count(std::string word) {
    std::cout << map[word].size() << "\n";
}

void check(std::string word1, std::string word2) {
    bool areSynonyms = map[word1].find(word2) != map[word1].end();
    if (areSynonyms) std::cout << "Yes\n";
    else std::cout << "No\n";
}

int main()
{
    while (true) {
        std::string command;
        std::cin >> command;

        if (command == "add") {
            std::string word1, word2;
            std::cin >> word1;
            std::cin >> word2;

            add(word1, word2);
        }else if (command == "count") {
            std::string word;
            std::cin >> word;

            count(word);
        }else if (command == "check") {
            std::string word1, word2;
            std::cin >> word1;
            std::cin >> word2;

            check(word1, word2);
        } else break;
    }
}