#include <iostream>
#include <vector>
#include <string>
/*
struct UserAccount {                     // создаем структуру и три поля
    std::string username;
    std::string email;
    int age;
};

std::vector<UserAccount> userAccounts;            //массив в котором хранятся все данные пользователя

void addAccount() {                                 //  функция создания нового аккаунта
    UserAccount newAccount;
    std::cout << "Введите имя пользователя: ";
    std::cin >> newAccount.username;
    std::cout << "Введите email: ";
    std::cin >> newAccount.email;
    std::cout << "Введите возраст: ";
    std::cin >> newAccount.age;

    userAccounts.push_back(newAccount);                          // создали новый объект и добавили значения
    std::cout << "Аккаунт успешно добавлен." << std::endl;
}

void deleteAccount() {                              // функцияудаления аккаунта
    if (userAccounts.empty()) {
        std::cout << "Нет доступных аккаунтов для удаления." << std::endl;
        return;
    }

    int index;
    std::cout << "Выберите номер аккаунта для удаления (от 1 до " << userAccounts.size() << "): ";
    std::cin >> index;

    if (index >= 1 && index <= userAccounts.size()) {
        userAccounts.erase(userAccounts.begin() + index - 1);
        std::cout << "Аккаунт успешно удален." << std::endl;
    }
    else {
        std::cout << "Некорректный номер аккаунта." << std::endl;
    }
}

void updateAccount() {
    if (userAccounts.empty()) {
        std::cout << "Нет доступных аккаунтов для обновления." << std::endl;
        return;                                                                      // тест на проверку существ акаунтов 
    }
                      
    int index;
    std::cout << "Выберите номер аккаунта для обновления (от 1 до " << userAccounts.size() << "): ";
    std::cin >> index;

    if (index >= 1 && index <= userAccounts.size()) {
        UserAccount& account = userAccounts[index - 1];
        std::cout << "Введите новое имя пользователя: ";
        std::cin >> account.username;
        std::cout << "Введите новый email: ";
        std::cin >> account.email;
        std::cout << "Введите новый возраст: ";
        std::cin >> account.age;
        std::cout << "Информация об аккаунте успешно обновлена." << std::endl;
    }
    else {
        std::cout << "Некорректный номер аккаунта." << std::endl;
    }
}

void displayAccounts() {
    if (userAccounts.empty()) {                                                       // функция выведения всех аккаунтов 
        std::cout << "Нет доступных аккаунтов для отображения." << std::endl;
        return;
    }

    for (size_t i = 0; i < userAccounts.size(); ++i) {
        const UserAccount& account = userAccounts[i];
        std::cout << "Аккаунт #" << i + 1 << "\nИмя пользователя: " << account.username
            << "\nEmail: " << account.email << "\nВозраст: " << account.age << "\n\n";
    }
}

int main() {
    setlocale(LC_ALL, "RU");
    typedef void (*FunctionPointer)();                      // в методе мейн создаем указатель
    FunctionPointer actions[] = { addAccount, deleteAccount, updateAccount, displayAccounts };

    while (true) {
        std::cout << "\nВыберите действие:\n1. Добавить аккаунт\n2. Удалить аккаунт\n3. Обновить информацию об аккаунте\n4. Вывести информацию обо всех аккаунтах\n5. Выйти\n";
        int choice;
        std::cin >> choice;

        if (choice < 1 || choice > 5) {
            std::cout << "Некорректный выбор. Попробуйте снова." << std::endl;
            continue;
        }

        if (choice == 5) {
            break;
        }

        actions[choice - 1]();
    }

    return 0;
}

*/