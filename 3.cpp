#include <iostream>
#include <string>

class Shelf{
private:
int number_of_pages;
public:

int menu(){
    int punkt;
    std::cout << "что вы хотите сделать?" << std::endl;
    std::cout << "1:добавить предмет на полку." << std::endl;
    std::cout << "2:посмотреть содержимое полки." << std::endl;
    std::cout << "3:удалить предмет с полки." << std::endl;
    std::cin >> punkt;
    switch (punkt)
    {
    case '1':
    int punkt2;
    std::cout << "какой предмет вы хотите добавить на полку?" << std::endl;
    std::cout << "1:книгу" << std::endl;
    std::cout << "2:журнал" << std::endl;
    std::cout << "3:папку" << std::endl;
    std::cin >> punkt2;
    switch (punkt2){
        case '1':
        int addbook();
            break;
        case '2':
        int addjournal();
            break;
        case '3':
        int addfolder();
            break;

    }
        break;
    
    case '2':

        break;
    case '3':

        break;
    }
};
protected:
int addbook(){
    
};
int addfolder(){

};
int addjournal(){

}
};

class Book : public Shelf {
private:
int autor;
public:

protected:

};

class Journal : public Shelf{
private:
int publisher;
public:

protected:

};

class Folder : public Shelf{
private:
int owner;
public:

protected:

};

int main () {
    setlocale(LC_ALL, "RU_ru");

};