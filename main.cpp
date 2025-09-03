#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Binary Search function
bool isPriceAvailable(vector<int>& prices, int targetPrice) {
    int low = 0, high = prices.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (prices[mid] == targetPrice)
            return true; // Price found
        else if (prices[mid] < targetPrice)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return false; // Price not found
}

int main() {
    // Sorted flight ticket prices (in INR)
    vector<int> flightPrices = {2500, 3200, 4100, 4800, 5600, 6300, 7100};

    int targetPrice;
    cout << "Enter the price you want to check: Rs";
    cin >> targetPrice;

    if (isPriceAvailable(flightPrices, targetPrice))
        cout << " Ticket available at Rs" << targetPrice << endl;
    else
        cout << " No ticket found at Rs" << targetPrice << endl;

    return 0;
}
