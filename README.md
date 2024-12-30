# Simple Blood Donation System

This project implements a basic console-based Blood Donation System using C++. This system allows users to:

* **Add Donor Information:** Donors can easily register by providing their name, gender, date of birth, blood group, and the number of blood packets they are donating.
* **Add Patient Information:** Patients can request blood by specifying their name and the desired blood group. The system will display available compatible blood groups and issue one blood packet per request.
* **View Blood Inventory:** Admins can view the current inventory of available blood units for each blood group (A+, O+, B+, AB+, A-, O-, B-, AB-).

## Key Features

* Object-Oriented Programming: The system utilizes C++ classes (blood_bank, admin, donor, patient) for better code organization and maintainability.
* Basic User Interface: Provides a simple and intuitive menu for user interaction.
* Blood Group Compatibility: Implements basic blood group compatibility checks.
* Data Handling: Manages blood inventory within the program's memory (no external file storage).

## Getting Started

1. **Compile:** Compile the C++ source code using a suitable compiler (e.g., g++):
   ```bash
   g++ -o blood_donation blood_donation.cpp
2. **Run:** Execute the compiled program:
   ```bash
   ./blood_donation
3. **Interact:** Follow the on-screen instructions to interact with the system as an admin, donor, or patient.

## Project Team & Task Division

* **Team Member 1: Eden Alemayehu**
    * Responsible for the displayBloodInventory() function. <br>
    * Ensure proper formatting and readability of the inventory display. 
* **Team Member 2: Edom Getahun**
   * Responsible for the donateBlood() function. <br>
   * Handle input validation (blood group and quantity).<br>
   * Update the blood inventory correctly upon successful donation.<br>

* **Team Member 3: Enas Atham**
    * Responsible for the requestBlood() function.
    * Handle input validation (blood group and quantity).
    * Determine the availability of the requested blood.
* **Team Member 4: Ephratah Girma**
    * Responsible for the main() function.
    * Handle user input for menu choices.
    * Call the appropriate functions based on user selections.
    * Implement the main program logic and user interface.
* **Team Member 5: Eden Mengste**
    * Oversee the overall project progress.
    * Resolve conflicts and merge code contributions.
    * Ensure code quality and adherence to coding standards.
    * Assist other team members as needed.

## Note

* This is a simplified model and **does not** include all the features of a **real-world blood bank system**.
* This project is for educational purposes and<strong> should not</strong> be used for **actual** blood donation management.  
## Flowchart
Here is a flowchart for our project.
```mermaid
graph TD
    A[Start] --> B{Display Menu}
    B --> C[Select Option]
    C --> D{Option 1: Display Inventory}
    D --> E[Display Inventory]
    E --> B
    C --> F{Option 2: Donate Blood}
    F --> G[Get Blood Group & Quantity]
    G --> H{Validate Input}
    H --> I{Update Inventory}
    I --> J{Display Donation Message}
    J --> B
    H --> K{Display Error Message}
    K --> B
    C --> L{Option 3: Request Blood}
    L --> M[Get Blood Group & Quantity]
    M --> N{Validate Input}
    N --> O{Check Availability}
    O --> P{Display Availability}
    P --> B
    O --> Q{Display Insufficient Blood}
    Q --> B
    C --> R{Option 4: Exit}
    R --> S[End]
