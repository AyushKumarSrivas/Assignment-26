Member function, static, constructor

1. Define a class Complex to represent a complex number with instance variables a and
b to store real and imaginary parts. Also define following member functions
a. void setData(int,int)
b. void showData()
c. Complex add(Complex)
2. Define a class Time to represent a time with instance variables h,m and s to store
hour, minute and second. Also define following member functions
a. void setTime(int,int,int)
b. void showTime()
c. void normalize()
d. Time add(Time)
3. Define a class Cube and calculate Volume of Cube and initialise it using constructor.
4. Define a class Counter and Write a program to Show Counter using Constructor.
5. Define a class Date and write a program to Display Dateand initialise date object
using Constructors.
6. Define a class student and write a program to enter student details using constructor
and define member function to display all the details.
7. Define a class Box and write a program to enter length, breadth and height and
initialise objects using constructor also define member functions to calculate volume
of the box.
8. Define a class Bank and define member functions to read principal , rate of interest
and year. Another member functions to calculate simple interest and display it.
Initialise all details using constructor.
9. Define a class Bill and define its member function get() to take detail of customer ,
calculateBill() function to calculate electricity bill using below tariff :
Upto 100 unit RS. 1.20 per unit
From 100 to 200 unit RS. 2 per unit
Above 200 units RS. 3 per unit.
10. Define a class StaticCount and create a static variable. Increment this variable in a
function and call this 3 times and display the result.

Solution:-

1. #include <iostream>
using namespace std;

class Complex {
private:
    int a, b;  // 'a' for real part, 'b' for imaginary part
public:
    void setData(int real, int imag) {
        a = real;
        b = imag;
    }
    void showData() {
        cout << "Complex number: " << a << " + " << b << "i" << endl;
    }
    Complex add(Complex c) {
        Complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }
};

int main() {
    Complex c1, c2, c3;
    c1.setData(3, 4);
    c2.setData(5, 6);
    c3 = c1.add(c2);
    c3.showData();
    return 0;
}

2. #include <iostream>
using namespace std;

class Time {
private:
    int h, m, s;
public:
    void setTime(int hours, int minutes, int seconds) {
        h = hours;
        m = minutes;
        s = seconds;
    }
    void showTime() {
        cout << h << " hr " << m << " min " << s << " sec" << endl;
    }
    void normalize() {
        m += s / 60;
        s %= 60;
        h += m / 60;
        m %= 60;
    }
    Time add(Time t) {
        Time temp;
        temp.h = h + t.h;
        temp.m = m + t.m;
        temp.s = s + t.s;
        temp.normalize();
        return temp;
    }
};

int main() {
    Time t1, t2, t3;
    t1.setTime(1, 59, 120);
    t2.setTime(2, 30, 30);
    t3 = t1.add(t2);
    t3.showTime();
    return 0;
}

3. #include <iostream>
using namespace std;

class Cube {
private:
    double side;
public:
    Cube(double s) {
        side = s;
    }
    double volume() {
        return side * side * side;
    }
};

int main() {
    Cube c(3.0);
    cout << "Volume of the cube: " << c.volume() << endl;
    return 0;
}

4. #include <iostream>
using namespace std;

class Counter {
private:
    int count;
public:
    Counter() {
        count = 0;
    }
    void increment() {
        count++;
    }
    int getCount() {
        return count;
    }
};

int main() {
    Counter c;
    c.increment();
    c.increment();
    c.increment();
    cout << "Counter: " << c.getCount() << endl;
    return 0;
}

5. #include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;
public:
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }
    void displayDate() {
        cout << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    Date d(10, 7, 2024);
    d.displayDate();
    return 0;
}

6. #include <iostream>
using namespace std;

class Student {
private:
    int roll_no;
    string name;
    int age;
public:
    Student(int r, string n, int a) {
        roll_no = r;
        name = n;
        age = a;
    }
    void displayDetails() {
        cout << "Roll No: " << roll_no << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s(1, "John Doe", 20);
    s.displayDetails();
    return 0;
}

7. #include <iostream>
using namespace std;

class Box {
private:
    double length, breadth, height;
public:
    Box(double l, double b, double h) {
        length = l;
        breadth = b;
        height = h;
    }
    double volume() {
        return length * breadth * height;
    }
};

int main() {
    Box b(2.5, 3.0, 4.5);
    cout << "Volume of the box: " << b.volume() << endl;
    return 0;
}

8. #include <iostream>
using namespace std;

class Bank {
private:
    double principal;
    double rate;
    int years;
public:
    Bank(double p, double r, int y) {
        principal = p;
        rate = r;
        years = y;
    }
    double calculateInterest() {
        return (principal * rate * years) / 100;
    }
    void displayInterest() {
        cout << "Simple Interest: " << calculateInterest() << endl;
    }
};

int main() {
    Bank b(10000, 5.5, 2);
    b.displayInterest();
    return 0;
}

9. #include <iostream>
using namespace std;

class Bill {
private:
    string customer_name;
    int units;
public:
    void get(string name, int u) {
        customer_name = name;
        units = u;
    }
    double calculateBill() {
        double bill = 0;
        if (units <= 100) {
            bill = units * 1.2;
        } else if (units <= 200) {
            bill = 100 * 1.2 + (units - 100) * 2;
        } else {
            bill = 100 * 1.2 + 100 * 2 + (units - 200) * 3;
        }
        return bill;
    }
    void displayBill() {
        cout << "Customer: " << customer_name << endl;
        cout << "Total Bill: " << calculateBill() << endl;
    }
};

int main() {
    Bill b;
    string name;
    int units;
    cout << "Enter customer name: ";
    cin >> name;
    cout << "Enter number of units: ";
    cin >> units;
    b.get(name, units);
    b.displayBill();
    return 0;
}

10. #include <iostream>
using namespace std;

class StaticCount {
private:
    static int count;
public:
    void increment() {
        count++;
    }
    static int getCount() {
        return count;
    }
};

int StaticCount::count = 0;

int main() {
    StaticCount sc1, sc2, sc3;
    sc1.increment();
    sc2.increment();
    sc3.increment();
    cout << "Count: " << StaticCount::getCount() << endl;
    return 0;
}
