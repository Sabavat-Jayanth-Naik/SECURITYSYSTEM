# SECURITYSYSTEM
The security system serves as a protective barrier between the client and the system, helping to prevent potential threats. It also provides authentication measures to ensure that only authorized users are granted access to the system.
The security system encompasses essential functionalities like user registration, login, password change, and password recovery. It also includes features such as addressing the user by their name after a successful login and clearing the screen in a manner that is compatible with various platforms. These elements enhance user experience and ensure a secure and user-friendly system.



Program flow.

1. **Start**: The program begins execution.

2. **Read User Data**: The program reads user data from a file (users.txt) and stores it in a vector of User structures.

3. **Display Menu**: The program displays a menu with five options:
   - Register
   - Login
   - Change Password
   - Forgot Password
   - End Session

4. **User Input**: The user selects an option by entering a numeric choice.

5. **Registration (Option 1)**: If the user selects "Register," the program prompts the user to provide a username, password, and name. After successful registration, it displays a "Registration Successful!" message.

6. **Login (Option 2)**: If the user selects "Login," the program prompts for a username and password. If the credentials match, it logs in the user and displays a "Login Successful!" message along with a personalized greeting using the user's name.

7. **Change Password (Option 3)**: If the user selects "Change Password" and is logged in, they can enter a new password. The program updates the password and displays a "Password changed successfully!" message.

8. **Forgot Password (Option 4)**: If the user selects "Forgot Password," they can enter their username. If found, the program displays the user's password.

9. **End Session (Option 5)**: The program ends the session and displays a "Session ended. Goodbye!" message before exiting.

10. **Invalid Choice**: If the user enters an invalid choice, the program prompts them to enter a valid one.

11. **Repeat**: The program loops back to the menu after each action is completed, allowing the user to select another option or end the session.

12. **End**: The program exits when the user selects "End Session."

This flow diagram outlines the main interactions and logic of the program, helping users understand its operation.
<h1>The interface of the program</h1>
<img width="960" alt="Screenshot 2023-10-24 104551" src="https://github.com/Sabavat-Jayanth-Naik/SECURITYSYSTEM/assets/130920035/a7cc4eee-795f-4d52-a9ce-3b6c34458b3d">
<img width="960" alt="Screenshot 2023-10-24 104652" src="https://github.com/Sabavat-Jayanth-Naik/SECURITYSYSTEM/assets/130920035/eafc80d6-bfa9-428e-8884-046b9b1809de">
<img width="960" alt="Screenshot 2023-10-24 104845" src="https://github.com/Sabavat-Jayanth-Naik/SECURITYSYSTEM/assets/130920035/1f16c67d-df0b-4492-a1bf-c58e7824cbd0">
<img width="960" alt="Screenshot 2023-10-24 105037" src="https://github.com/Sabavat-Jayanth-Naik/SECURITYSYSTEM/assets/130920035/09b0820a-af01-474f-8827-dedd7fa45b47">
<img width="960" alt="Screenshot 2023-10-24 104947" src="https://github.com/Sabavat-Jayanth-Naik/SECURITYSYSTEM/assets/130920035/af767df0-196e-4aa3-bae3-0e836a2aa48b">



<h1>The UML daigram</h1>
![mermaid-diagram-2023-10-24-071604](https://github.com/Sabavat-Jayanth-Naik/SECURITYSYSTEM/assets/130920035/2e382068-3530-412e-bba2-e0eeaffc3590)



