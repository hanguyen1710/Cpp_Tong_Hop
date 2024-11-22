
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Hàm kiểm tra mật khẩu hợp lệ
bool isValidPassword(const string& password) {
    if (password.length() < 8) return false;

    bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;
    string specialChars = "!@#$%^&*()-+";

    for (int i = 0; i < password.length(); i++) {
        if (isupper(password[i])) hasUpper = true;
        if (islower(password[i])) hasLower = true;
        if (isdigit(password[i])) hasDigit = true;
        if (specialChars.find(password[i]) != string::npos) hasSpecial = true;

        // Kiểm tra hai kí tự liên tiếp không giống nhau
        if (i > 0 && password[i] == password[i - 1]) return false;
    }

    return hasUpper && hasLower && hasDigit && hasSpecial;
}

int main() {
    ifstream infile("password.in");
    ofstream outfile("res.out");
    string password;

    while (getline(infile, password)) {
        if (isValidPassword(password)) {
            outfile << "VALID" << endl;
        } else {
            outfile << "INVALID" << endl;
        }
    }

    infile.close();
    outfile.close();
    return 0;
}
