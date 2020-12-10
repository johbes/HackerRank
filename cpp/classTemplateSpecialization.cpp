#include <iostream>
using namespace std;
enum class Fruit { apple, orange, pear };
enum class Color { red, green, orange };

template <typename T> struct Traits;

// Define specializations for the Traits class template here.
template<typename T>
class Traits{
    public:
    static string name(const int &index){
            switch (index)
            {
            case 0:
                return is_same<T,Fruit>::value ? "apple" : "red";
            case 1:
                return is_same<T,Fruit>::value ? "orange" : "green";
            case 2:
                return is_same<T,Fruit>::value ? "pear" : "orange";
            default:
                return "unknown";
            }
    }
};

int main()
{
	int t = 0; std::cin >> t;

    for (int i=0; i!=t; ++i) {
        int index1; std::cin >> index1;
        int index2; std::cin >> index2;
        cout << Traits<Color>::name(index1) << " ";
        cout << Traits<Fruit>::name(index2) << "\n";
    }
}
