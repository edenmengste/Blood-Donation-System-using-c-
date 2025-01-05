# Blood Donation System

## Overview

This is a C++ program designed to manage a **blood donation system**. It allows users to:

- **Register blood donors** with their personal details.
- **Request blood** based on their required blood type.
- **Admin access** to manage blood inventory and view registered donors.

The system ensures **input validation** to guarantee accurate data entry and proper functionality.

---

## Features

- **Donor Registration**: Users can register as blood donors by providing their name, age, and blood type.
- **Blood Request**: Users can request blood by specifying the blood type. The system checks inventory for availability.
- **Admin Features**: Admins can add blood to the inventory, view current inventory levels, and see a list of registered donors.
- **Input Validation**: The system checks for valid blood types, positive age values, and ensures donor names do not contain digits.

---

## Task Distribution

The project is divided into specific tasks for each team member evenly:

### 1. Eden Alemayehu - **Implement Donor Registration Logic**
   - Responsible for:
     - Implementing donor registration functionality.
     - Adding input validation for donor **name** (should not contain digits).
     - Adding input validation for donor **age** (should be a positive number).
     - Ensuring donor **blood type** is valid.

### 2. Edom Getahun - **Handle Blood Request Logic**
   - Responsible for:
     - Writing the logic to allow users to **request blood** based on blood type.
     - Checking if the requested **blood type** is available in the inventory.
     - Decreasing blood quantity after a successful request.
     - Handling cases when requested blood type is out of stock.

### 3. Ephratah Girma - **Admin Access Implementation**
   - Responsible for:
     - Implementing the **admin menu** with options to manage the blood inventory.
     - Writing the functionality to **add blood** to the inventory with validation for exceeding capacity.
     - Providing a **view of registered donors** and the current **blood inventory**.

### 4. Enas Atham - **Main Menu and User Interface**
   - Responsible for:
     - Designing the **main menu** and handling the flow of user choices.
     - Ensuring proper transitions between the different features: donor registration, blood requests, and admin access.
     - Implementing the **Exit** feature to cleanly terminate the program.

### 5. Eden Mengste - **System Testing and Debugging**
   - Responsible for:
     - Writing and running **unit tests** for all features to ensure correctness.
     - Debugging issues related to **input validation** and system behavior.
     - Testing edge cases like **full donor list** and **out-of-stock blood types**.
## Flowchart 
This is the flowchart for the system.
```mermaid
flowchart TD
    A[Start] --> B[Main Menu]
    B -->|Register as Donor| C[Register Donor]
    B -->|Request Blood| D[Request Blood]
    B -->|Admin Access| E[Admin Access]
    B -->|Exit| F[End]

    C --> G[Input Donor Details]
    G --> H{Valid?}
    H -->|Yes| I[Register Donor]
    H -->|No| G

    D --> J[Input Blood Type]
    J --> K{Available?}
    K -->|Yes| L[Process Request]
    K -->|No| M[Notify Out of Stock]

    E --> N[Enter Admin Password]
    N --> O{Valid?}
    O -->|Yes| P[Admin Menu]
    O -->|No| N

    P --> Q[Manage Inventory]
    P --> R[View Donors]
    P --> S[Exit Admin] --> F[End] 

    L --> F[End] 
    I --> F[End]
    M --> F[End] 
    S --> F[End]
