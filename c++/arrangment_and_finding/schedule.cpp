#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;

    multimap<int, int> concertDates;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        concertDates.insert(make_pair(b, a));
    }

    int count = 0;
    int lastEndTime = 0; 

    for (auto it = concertDates.begin(); it != concertDates.end(); it++) {
        if (it->second > lastEndTime) {
            count++;
            lastEndTime = it->first;
        }
    }

    cout << count << endl;

    return 0;
}
