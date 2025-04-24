#include <iostream>
#include <string>
#include <vector>



class BaseThing {
private:

public:
    int number_of_pages;
    virtual void thingInfo() = 0;
protected:
    
};

class Book : public BaseThing {
private:
    std::string autor;
public:
    Book(std::string  a, int  n) {
        autor = a;
        number_of_pages = n;
    };
    void thingInfo() {
        std::cout << "книга" << " автор " << autor << " количество страниц " << number_of_pages << std::endl;
    }

protected:

};

class Journal : public BaseThing {
private:
    std::string publisher;
public:
    Journal(std::string p, int n) {
        publisher = p;
        number_of_pages = n;
    };
    void thingInfo() {
        std::cout << "журнал" << " издатель " << publisher << " количество страниц " << number_of_pages << std::endl;
    }
protected:

};

class Folder : public BaseThing {
private:
    std::string owner;
public:
    Folder(std::string o, int n) {
        owner = o;
        number_of_pages = n;
    };
    void thingInfo() {
        std::cout << "папка" << " владелец " << owner << " количество страниц " << number_of_pages << std::endl;
    }
protected:

};

class Shelf {
public:

    void book() {
        std::string autor;
        int number_of_pages;
        std::cout << "введите автора" << std::endl;
        std::cin >> autor;
        std::cout << "введите количество страниц" << std::endl;
        std::cin >> number_of_pages;
        storage.push_back(new Book(autor, number_of_pages));
    };
    void folder() {
        std::string owner;
        int number_of_pages;
        std::cout << "введите владельца" << std::endl;
        std::cin >> owner;
        std::cout << "введите количество страниц" << std::endl;
        std::cin >> number_of_pages;
        storage.push_back(new Folder(owner, number_of_pages));

    };
    void journal() {
        std::string publisher;
        int number_of_pages;
        std::cout << "введите издателя" << std::endl;
        std::cin >> publisher;
        std::cout << "введите количество страниц" << std::endl;
        std::cin >> number_of_pages;
        storage.push_back(new Journal(publisher, number_of_pages));
    }
    void showThingList() {
        for (auto thing : storage) {
            thing->thingInfo();
        }
    }
    void dellthing() {
        
    }
private:
    std::vector<BaseThing*> storage;
protected:

};

int main() {
    setlocale(LC_ALL, "RU_ru");
    int punkt;
    Shelf Shelf;
    while (true) {
        std::cout << "что вы хотите сделать?" << std::endl;
        std::cout << "1:добавить предмет на полку." << std::endl;
        std::cout << "2:посмотреть содержимое полки." << std::endl;
        std::cout << "3:удалить предмет с полки." << std::endl;
        std::cin >> punkt;
        switch (punkt)
        {
        case 1:
            int punkt2;
            std::cout << "какой предмет вы хотите добавить на полку?" << std::endl;
            std::cout << "1:книгу" << std::endl;
            std::cout << "2:журнал" << std::endl;
            std::cout << "3:папку" << std::endl;
            std::cin >> punkt2;
            switch (punkt2) {
            case 1:
                Shelf.book();
                break;
            case 2:
                Shelf.journal();
                break;
            case 3:
                Shelf.folder();
                break;
            }
            break;
        case 2:
            Shelf.showThingList();
            break;
        case 3:

            break;
        }
    }

    return 0;
};
