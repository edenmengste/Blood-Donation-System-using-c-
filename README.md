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
    * **Task:** Design and implement the `blood_bank` class, including blood inventory management.
    * **Deliverables:** Complete implementation of `blood_bank` class and its associated functions.

* **Team Member 2: Edom Getahun**
    * **Task:** Design and implement the `admin` class, including password authentication and inventory display.
    * **Deliverables:** Complete implementation of `admin` class and its functionalities.

* **Team Member 3: Enas Atham**
    * **Task:** Design and implement the `donor` class, including data entry and display functionalities.
    * **Deliverables:** Complete implementation of `donor` class and its member functions.

* **Team Member 4: Ephratah Girma**
    * **Task:** Design and implement the `patient` class, including blood request handling and compatibility checks.
    * **Deliverables:** Complete implementation of `patient` class and its member functions.

* **Team Member 5: Eden Mengste**
    * **Task:** Develop and maintain the main program logic, including user interaction, menu handling, and coordination between classes.
    * **Deliverables:** Complete implementation of the `main` function and overall program flow.

## Note:

* This is a simplified model and **does not** include all the features of a **real-world blood bank system**.
* This project is for educational purposes and<strong> should not</strong> be used for **actual** blood donation management.
