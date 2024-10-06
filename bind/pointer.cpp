#include <iostream>

using namespace std;

struct humanAttributes {
    string name;
    int age;
    int height;
    int weight;
};

class Human {

    private:
    humanAttributes attributes;

    public:
    Human(string name, int age, int height, int weight) {
        attributes.name = name;
        attributes.age = age;
        attributes.height = height;
        attributes.weight = weight;

        cout << "New birth of " << attributes.name << endl;
    };

    ~Human() {
        death();
    };

    void changeName(string newName) {

        cout << "Changing name from " << attributes.name << " to " << newName << endl;
        attributes.name = newName;
    };

    string callMyName() {
        cout << "My name is " << attributes.name << endl;

        return attributes.name;
    };

    void handShake (
        Human& otherHuman // must be a reference to avoid copying
        ) {
        cout << attributes.name << "Shaking hands with " << otherHuman.attributes.name << endl;
    };

    private:
    void death() {
        cout << attributes.name << " is dying..." << endl;
    };

};

int main() {

    Human james("James", 25, 180, 75);
    Human* john= new Human("John", 30, 175, 80);
    
    james.handShake(*john);

    delete john;

    return 0;
}