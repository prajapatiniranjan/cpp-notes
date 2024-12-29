// #include <iostream>
// using namespace std;

// class Distance
// {
// private:
//     int kilometers; // Distance in kilometers
//     int meters;     // Distance in meters

// public:
//     Distance() : kilometers(0), meters(0) {}

//     Distance(int km, int m) : kilometers(km), meters(m) {}

//     void display() const
//     {
//         cout << kilometers << " kilometers and " << meters << " meters" << endl;
//     }

//     Distance add(const Distance &other) const
//     {
//         Distance result;
//         result.kilometers = kilometers + other.kilometers;
//         result.meters = meters + other.meters;

//         // Normalize the distance
//         if (result.meters >= 1000)
//         {
//             result.kilometers += result.meters / 1000;
//             result.meters = result.meters % 1000;
//         }
//         return result;
//     }
// };

// class Bike
// {
// private:
//     string bikeNumber; // Bike number
//     Distance distance; // Distance traveled

// public:
//     Bike() : bikeNumber(""), distance(0, 0) {}

//     Bike(string number, int km, int mtr) : bikeNumber(number), distance(km, mtr) {}

//     void display() const
//     {
//         cout << "Bike Number: " << bikeNumber << endl;
//         cout << "Distance Traveled: ";
//         distance.display();
//     }

//     void addDistance(const Distance &d)
//     {
//         distance = distance.add(d);
//     }
// };

// int main()
// {
//     // Creating two Bike objects with different bike numbers and distances
//     Bike bike1("ABC123", 100, 500);
//     Bike bike2("XYZ456", 150, 200);

//     // Displaying the details of both bikes
//     cout << "Details of Bike 1:" << endl;
//     bike1.display();
//     cout << endl;

//     cout << "Details of Bike 2:" << endl;
//     bike2.display();

//     // Adding distance to both bikes
//     Distance d1(50, 300);
//     Distance d2(75, 400);
//     bike1.addDistance(d1);
//     bike2.addDistance(d2);

//     // Displaying the updated details of both bikes
//     cout << "Updated Details of Bike 1:" << endl;
//     bike1.display();
//     cout << endl;

//     cout << "Updated Details of Bike 2:" << endl;
//     bike2.display();

//     return 0;
// }

#include <iostream>
using namespace std;

class Distance
{
private:
    int kilometers; // Distance in kilometers
    int meters;     // Distance in meters

public:
    Distance() : kilometers(0), meters(0) {}

    Distance(int km, int m) : kilometers(km), meters(m) {}

    void display() const
    {
        cout << kilometers << " kilometers and " << meters << " meters" << endl;
    }

    Distance add(const Distance &other) const
    {
        Distance result;
        result.kilometers = kilometers + other.kilometers;
        result.meters = meters + other.meters;

        // Normalize the distance
        if (result.meters >= 1000)
        {
            result.kilometers += result.meters / 1000;
            result.meters = result.meters % 1000;
        }
        return result;
    }
};

class Bike
{
private:
    string bikeNumber; // Bike number
    Distance distance; // Distance traveled

public:
    Bike() : bikeNumber(""), distance(0, 0) {}

    Bike(string number, int km, int mtr) : bikeNumber(number), distance(km, mtr) {}

    void display() const
    {
        cout << "Bike Number: " << bikeNumber << endl;
        cout << "Distance Traveled: ";
        distance.display();
    }

    void addDistance(const Distance &d)
    {
        distance = distance.add(d);
    }
};

int main()
{
    // Creating two Bike objects with different bike numbers and distances
    Bike bike1("ABC123", 100, 500);
    Bike bike2("XYZ456", 150, 200);

    // Displaying the details of both bikes
    cout << "Details of Bike 1:" << endl;
    bike1.display();
    cout << endl;

    cout << "Details of Bike 2:" << endl;
    bike2.display();

    // Adding distance to both bikes
    Distance d1(50, 300);
    Distance d2(75, 400);
    bike1.addDistance(d1);
    bike2.addDistance(d2);

    // Displaying the updated details of both bikes
    cout << "Updated Details of Bike 1:" << endl;
    bike1.display();
    cout << endl;

    cout << "Updated Details of Bike 2:" << endl;
    bike2.display();

    return 0;
}