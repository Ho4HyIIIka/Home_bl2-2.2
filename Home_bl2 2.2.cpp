#include <iostream>
#include <string>

class Counter {
private:
    int num;

public:
    Counter(int num) {
        this->num = num;
    }
    Counter() {
        num = 1;
    }
    void set_plus() {
        num++;
    }
    void set_minus() {
        --num;
    }
    int get_all() {
        std::cout << num << std::endl;
        return num;
    }
};

int main()
{
    int num1 = 0;
    std::string a, b;

    std::cout << "Do you want to specify the counter value. Write yes or no: "<<std::endl;
    std::cin >> b;

    if (b == "yes") {
        std::cout << "Enter the initial value of the counter: "<< std::endl;
        std::cin >> num1;
    }

    Counter* one;

    (b == "yes") ? (one = new Counter(num1)) : (one = new Counter());

    for (;;) {
        std::cout << "Write a command ('+', '-', '=' or 'x'): ";
        std::cin >> a;

        if (a == "+") {
            one->set_plus();
        }
        if (a == "-") {
            one->set_minus();
        }
        if (a == "=") {
            one->get_all();
        }
        if (a == "x") {
            std::cout << "Goodbye!";
            break;
        }
    }
    delete one;
}