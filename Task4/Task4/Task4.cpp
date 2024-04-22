#include <iostream>
using namespace std;
class Point {
private:
    int cordinate1, cordinate2, cordinate3;

public:
    Point(int cordinate1 = 0, int cordinate2 = 0, int cordinate3 = 0) {
        this->cordinate1 = cordinate1;
        this->cordinate2 = cordinate2;
        this->cordinate3 = cordinate3;
    }
    Point(Point& point) {
        this->cordinate1 = point.cordinate1;
        this->cordinate2 = point.cordinate2;
        this->cordinate3 = point.cordinate3;
    }
    int getCordinate1()
    {
        return cordinate1;
    }
    int getCordinate2() 
    {
        return cordinate2;
    }
    int getCordinate3() 
    {
        return cordinate3;
    }
    void setCordinate1(int newCordinate1) { cordinate1 = newCordinate1; }
    void setCordinate2(int newCordinate2) { cordinate2 = newCordinate2; }
    void setCordinate3(int newCordinate3) { cordinate3 = newCordinate3; }
};

int main() {
    Point point1(1, 2, 3);
    Point point2(4, 5, 6);
    cout << "Point 1 coordinates: (" << point1.getCordinate1() << ", " << point1.getCordinate2() << ", " << point1.getCordinate3() << ")" << endl;
    cout << "Point 2 coordinates: (" << point2.getCordinate1() << ", " << point2.getCordinate2() << ", " << point2.getCordinate3() << ")" << endl;
    point1.setCordinate1(10);
    point1.setCordinate2(20);
    point1.setCordinate3(30);
    cout << "New coordinates of Point 1: (" << point1.getCordinate1() << ", " << point1.getCordinate2() << ", " << point1.getCordinate3() << ")" << endl;
    Point point1Modify(point1);
    point1Modify.setCordinate1(point1Modify.getCordinate1() + 1);
    point1Modify.setCordinate2(point1Modify.getCordinate2() + 2);
    point1Modify.setCordinate3(point1Modify.getCordinate3() + 3);
    cout << "Coordinates of Point 1 (modified constructor): (" << point1Modify.getCordinate1() << ", " << point1Modify.getCordinate2() << ", " << point1Modify.getCordinate3() << ")" << endl;
}
