// BEST TIME TO BUY STOCKS AND SELL ------------------------

// Input [7, 1, 5, 3, 6, 4], output = 5 -----------

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout << "Enter array length: ";
    cin >> n;

    vector<int> prices(n);
    for(int i = 0; i < n; i++){
        cin >> prices[i];
    }

    int maxprofit = 0, bestbuy = prices[0];
    for(int i = 1; i < n; i++){
        if(bestbuy < prices[i]){
            maxprofit = max(maxprofit, prices[i] - bestbuy);
        }

        bestbuy = min(bestbuy, prices[i]);
    }

    cout << "Maxprofit is: " << maxprofit << endl;

    return 0;
}