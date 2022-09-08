#import <iostream>
using namespace std;
int product(int x, int y);
int main()
{
    cout << "Enter x" << endl;
    int x, y;
    cin >> x;
    cout << "Enter y" << endl;
    cin >> y;
    cout << "The product is " << product(x, y) << endl;
}
int product(int x, int y)
{
    if (x < y)
    {
        return product(y, x);
    }
    if (x > y && y != 0)
    {
        return (x + product(x, y - 1));
    }
    else
        return 0;
}