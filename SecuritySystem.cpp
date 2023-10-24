#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#ifdef _WIN32
#include <windows.h> // For Windows-based systems
#else
#include <cstdlib> // For non-Windows systems
#endif

using namespace std;

// User structure to store user information
struct User
{
    string username;
    string password;
    string name; // Add a 'name' field
};

// Function to read user data from a file
vector<User> readUserData()
{
    vector<User> users;
    ifstream file("users.txt");
    User user;

    while (file >> user.username >> user.password >> user.name)
    {
        users.push_back(user);
    }

    file.close();
    return users;
}

// Function to write user data to a file
void writeUserData(const vector<User> &users)
{
    ofstream file("users.txt");
    for (const User &user : users)
    {
        file << user.username << " " << user.password << " " << user.name << endl;
    }
    file.close();
}

// Function to clear the screen (cross-platform)
void clearScreen()
{
#ifdef _WIN32
    system("cls"); // For Windows-based systems
#else
    system("clear"); // For non-Windows systems
#endif
}

int main()
{
    vector<User> users = readUserData();
    int choice;
    string currentUsername;
    string currentName; // Store the logged-in user's name

    while (true)
    {
        // Clear the screen
        cout << "SECURITY SYSTEM " << endl;
        cout << endl;
        cout << "Welcome here are your options!" << endl;
        cout << endl
             << endl;
        cout << "_______________________" << endl
             << endl;
        cout << "| 1.Register          |" << endl;
        cout << "| 2.Login             |" << endl;
        cout << "| 3.Change Password   |" << endl;
        cout << "| 4.Forgot Password   |" << endl;
        cout << "| 5.END SESSION       |" << endl;
        cout << "|_____________________|" << endl;
        cout << endl
             << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1: // Registration
        {
            cout << "_______________________" << endl
                 << endl;
            cout << "|------ Register------|" << endl;
            cout << "|_____________________|" << endl
                 << endl;
            User newUser;
            cout << "Registration Form:" << endl;
            cout << "Username: ";
            cin >> newUser.username;
            cout << "Password: ";
            cin >> newUser.password;
            cout << "Name: "; // Ask for the user's name
            cin >> newUser.name;

            cout << "Registration Successful!" << endl;
            users.push_back(newUser);
            writeUserData(users);
            break;
        }
        case 2: // Login
        {
            clearScreen();
            cout << "_______________________" << endl
                 << endl;
            cout << "|------LOGIN----------|" << endl;
            cout << "|_____________________|" << endl
                 << endl;
            string username, password;
            cout << "Please Enter Username: ";
            cin >> username;
            cout << "Please Enter Password: ";
            cin >> password;

            bool loggedIn = false;
            for (const User &user : users)
            {
                if (user.username == username && user.password == password)
                {
                    loggedIn = true;
                    currentUsername = username;
                    currentName = user.name; // Store the user's name
                    clearScreen();
                    cout << "Login Successful!" << endl;
                    cout << "Welcome, " << currentName << "!" << endl; // Greet the user by name
                    cout << "Press Enter to continue...";
                    cin.ignore();
                    cin.get();
                    break;
                }
            }

            if (!loggedIn)
            {
                cout << "Username or password incorrect. Press Enter to continue...";
                cin.ignore();
                cin.get();
            }
            break;
        }
        case 3: // Change Password
        {
            cout << "----------CHANGE PASSWORD---------" << endl<<endl;
            ifstream of0("file.txt");

            cout << "Enter the old password:-";
            if (currentUsername.empty())
            {
                cout << "Please log in before changing the password. Press Enter to continue...";
                cin.ignore();
                cin.get();
                break;
            }

            string newPassword;
            cout << "Enter the new password: ";
            cin >> newPassword;

            for (User &user : users)
            {
                if (user.username == currentUsername)
                {
                    user.password = newPassword;
                    writeUserData(users);
                    clearScreen();
                    cout << "Password changed successfully!" << endl;
                    cout << "Press Enter to continue...";
                    cin.ignore();
                    cin.get();
                    break;
                }
            }
            break;
        }
        case 4: // Forgot Password
        {
            cout << "----------FORGOT PASSWORD---------" << endl;
            cout << endl
                 << endl;

            string forgottenUsername;
            cout << "Enter Your Username: ";
            cin >> forgottenUsername;

            bool found = false;
            for (const User &user : users)
            {
                if (user.username == forgottenUsername)
                {
                    found = true;
                    clearScreen();
                    cout << "Your password is: " << user.password << endl;
                    cout << "Press Enter to continue...";
                    cin.ignore();
                    cin.get();
                    break;
                }
            }

            if (!found)
            {
                clearScreen();
                cout << "Username not found. Please try again. Press Enter to continue...";
                cin.ignore();
                cin.get();
            }
            break;
        }
        case 5:            // End Session
            clearScreen(); // Clear the screen
            cout << "Session ended. Goodbye!" << endl;
            return 0;
        default:
            cout << "Enter a valid choice. Press Enter to continue...";
            cin.ignore();
            cin.get();
        }
    }

    return 0;
}
