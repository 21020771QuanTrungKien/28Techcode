#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

int main() {
    string date;
    cin >> date;

    // Tạo một stringstream từ chuỗi ngày sinh
    stringstream ss(date);

    int day, month, year;

    // Sử dụng toán tử >> để đọc giá trị ngày, tháng, năm từ stringstream
    char slash1, slash2;
    ss >> day >> slash1 >> month >> slash2 >> year;

    // Xuất ngày sinh đã chuẩn hóa ra màn hình
    cout << setfill('0') << setw(2) << day << "/" << setw(2) << month << "/" << setw(4) << year;

    return 0;
}
