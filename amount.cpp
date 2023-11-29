#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double value;
    cin >> value;

    int notes[] = {100, 50, 20, 10, 5, 2};
    double coins[] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};

    int intPart =(int)(value);
    value -= intPart;

    cout << "NOTAS:" << endl;
    int count100 = intPart / 100;
    intPart %= 100;
    int count50 = intPart / 50;
    intPart %= 50;
    int count20 = intPart / 20;
    intPart %= 20;
    int count10 = intPart / 10;
    intPart %= 10;
    int count5 = intPart / 5;
    intPart %= 5;
    int count2 = intPart / 2;

    cout << count100 << " nota(s) de R$ 100.00" << endl;
    cout << count50 << " nota(s) de R$ 50.00" << endl;
    cout << count20 << " nota(s) de R$ 20.00" << endl;
    cout << count10 << " nota(s) de R$ 10.00" << endl;
    cout << count5 << " nota(s) de R$ 5.00" << endl;
    cout << count2 << " nota(s) de R$ 2.00" << endl;

    int coinPart = (int)(value * 100);

    cout << "MOEDAS:" << endl;
    int count1 = coinPart / 100;
    coinPart %= 100;
    int count50c = coinPart / 50;
    coinPart %= 50;
    int count25c = coinPart / 25;
    coinPart %= 25;
    int count10c = coinPart / 10;
    coinPart %= 10;
    int count5c = coinPart / 5;
    int count1c = coinPart % 5;

    cout << count1 << " moeda(s) de R$ 1.00" << endl;
    cout << count50c << " moeda(s) de R$ 0.50" << endl;
    cout << count25c << " moeda(s) de R$ 0.25" << endl;
    cout << count10c << " moeda(s) de R$ 0.10" << endl;
    cout << count5c << " moeda(s) de R$ 0.05" << endl;
    cout << count1c << " moeda(s) de R$ 0.01" << endl;

    return 0;
}
