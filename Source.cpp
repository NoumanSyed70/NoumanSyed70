#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    ofstream emails("Emails.txt");
    ofstream pass("Passwords.txt");
    emails << "noumansyed069@gmail.com" << endl;
    pass << "aB12__**" << endl;
    emails << "Waqarmughal07@ucp.edu.pk" << endl;
    pass << "12345" << endl;
    emails << "Mohsin.abbas@ucp.edu.pk" << endl;
    pass << "mohsin12345" << endl;
    emails << "mahnoor420@outlook.com";
    pass << "mahnorr420";
    emails.close();
    pass.close();
    ifstream emailsFile("Emails.txt");
    ifstream passwordsFile("Passwords.txt");

    if (!emailsFile || !passwordsFile) {
        cout << "Files not opened" << endl;
        exit(0);
    }

    string enteredEmail, enteredPassword;
    cout << "Enter your email address: ";
    getline(cin, enteredEmail);
    cout << "Enter your password: ";
    getline(cin, enteredPassword);
    string email, password;
    bool found = false;
    while (emailsFile >> email && passwordsFile >> password) { //reading emails in email string and passwords in password string variable //
        if (enteredEmail == email && enteredPassword == password) { // Validating whether enter email is equal to read email && entered passwrod is equal to read password
            found = true;
            break;
        }
    }
    emailsFile.close();
    passwordsFile.close();
    if (found) {
        cout << "Email address and Password is correct." << endl;
    }
    else {
        cout << "Inorrect email address or password." << endl;
    }
    return 0;
}
