# To-Do List GUI Application

A simple yet effective desktop To-Do List application built with C++ and the wxWidgets GUI library. This application allows you to manage your daily tasks with a clean and intuitive graphical interface.



## ✨ Features

* **Add Tasks:** Quickly add new tasks to your list.
* **Mark as Done:** Check off tasks as you complete them.
* **Delete Tasks:** Remove tasks you no longer need using the `Delete` key.
* **Reorder Tasks:** Move tasks up or down in the list using the `Up` and `Down` arrow keys.
* **Clear All:** A "Clear" button to remove all tasks at once, with a confirmation prompt.
* **Persistent Storage:** Your tasks are automatically saved to `Tasks.txt` when you close the application and reload the next time you open it.

## 🛠️ Technologies Used

* **C++:** The core application logic is written in C++.
* **wxWidgets:** Used for creating the cross-platform graphical user interface.

## 🚀 How to Use

1.  **Prerequisites:** You need to have the wxWidgets library installed and configured on your system.
2.  **Compile:** Compile the source files using a C++ compiler (like g++ or a build system like CMake).
    ```bash
    g++ MainFrame.cpp Task.cpp `wx-config --cppflags --libs` -o TodoApp
    ```
3.  **Run:** Execute the compiled application.
    ```bash
    ./TodoApp
    ```

### Controls

* **Add a task:** Type your task in the input box and press `Enter` or click the "Add" button.
* **Select a task:** Click on a task in the list.
* **Delete selected task:** Press the `DELETE` key.
* **Move task up/down:** Press the `UP` or `DOWN` arrow keys.
* **Mark as complete:** Click the checkbox next to the task.

## 📂 File Structure

The project is organized into the following files:

* `MainFrame.h` & `MainFrame.cpp`: Defines and implements the main window of the application. It handles the UI layout, event handling (button clicks, key presses), and the core application logic.
* `Task.h` & `Task.cpp`: Defines the `Task` struct, which represents a single to-do item. It also contains the functions for saving tasks to and loading tasks from the `Tasks.txt` file.
* `Tasks.txt`: A plain text file where the application stores your tasks.

https://youtu.be/ONYW3hBbk-8?list=PLFk1_lkqT8MbVOcwEppCPfjGOGhLvcf9G Watch this video for downloading the libraries of wxWidgets

https://youtu.be/urIpZnCTeKw?si=14l_-hOnIBcrKiPf Watch this video for faster project setup on Visual Studio

https://youtu.be/MPLfOoRUKMU?si=KZCCsXYSdGqQeoFr Watch this YouTube video for using the GUI text file in Visual Studio Community version





