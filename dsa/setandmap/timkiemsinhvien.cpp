#include <iostream>
#include <map>
#include <string>

int main() {
    int N;
    std::cin >> N;
    std::cin.ignore(); // Loại bỏ kí tự '\n' còn sót lại sau khi nhập N

    std::map<std::string, std::string> studentMap;

    // Nhập thông tin sinh viên và lưu vào map
    for (int i = 0; i < N; ++i) {
        std::string studentID, studentName;
        std::getline(std::cin, studentID);
        std::getline(std::cin, studentName);
        studentMap[studentID] = studentName;
    }

    int Q;
    std::cin >> Q;
    std::cin.ignore(); // Loại bỏ kí tự '\n' còn sót lại sau khi nhập Q

    // Tra cứu mã sinh viên và in ra tên sinh viên tương ứng
    for (int i = 0; i < Q; ++i) {
        std::string queryID;
        std::getline(std::cin, queryID);

        if (studentMap.find(queryID) != studentMap.end()) {
            std::cout << studentMap[queryID] << std::endl;
        } else {
            std::cout << "NOT FOUND" << std::endl;
        }
    }

    return 0;
}
