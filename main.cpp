#include <iostream>

using namespace std;

int main()
{

    int dollar{100};
    int quarter{25};
    int dime{10};
    int nickle{5};
    int penny{1};
    int total{0};
    int numDollar{}, numQuarter{}, numDime{}, numNickle{}, numPenny{};

    cout << "Enter an amount in cents: ";
    cin >> total;

    numDollar = total / dollar;
    total %= dollar;

    numQuarter = total / quarter;
    total %= quarter;

    numDime = total / dime;
    total %= dime;

    numNickle = total / nickle;
    total %= nickle;

    numPenny = total / penny;
    total %= penny;

    cout << "You can provide this change as follows: "
         << "\ndollars: " << numDollar
         << "\nquarters: " << numQuarter
         << "\ndimes: " << numDime
         << "\nnickle: " << numNickle
         << "\npennies: " << numPenny;

    return 0;
}