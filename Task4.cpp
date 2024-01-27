#include <iostream>
#include <string>

const int MAX_TASKS = 10;

struct Task {
    std::string description;
    bool completed;
};

void addTask(Task tasks[], int& taskCount, const std::string& description) {
    if (taskCount < MAX_TASKS) {
        tasks[taskCount++] = {description, false};
        std::cout << "Task added successfully.\n";
    } else {
        std::cout << "Maximum number of tasks reached.\n";
    }
}

void viewTasks(const Task tasks[], int taskCount) {
    if (taskCount == 0) {
        std::cout << "No tasks available.\n";
    } else {
        std::cout << "Tasks:\n";
        for (int i = 0; i < taskCount; ++i) {
            std::cout << i + 1 << ". " << tasks[i].description;
            if (tasks[i].completed) {
                std::cout << " - Completed";
            } else {
                std::cout << " - Not Completed";
            }
            std::cout << "\n";
        }
    }
}

void Compeleted(Task tasks[], int taskCount, int index) {
    if (index > 0 && index <= taskCount) {
        tasks[index - 1].completed = true;
        std::cout << "Task marked as completed.\n";
    } else {
        std::cout << "Invalid task index.\n";
    }
}

int main() {
    Task tasks[MAX_TASKS];
    int taskCount = 0;
    int choice;

    do {
        std::cout << "\n===== To-Do List Menu =====\n";
        std::cout << "1. Add Task\n";
        std::cout << "2. View Tasks\n";
        std::cout << "3. Mark Task as Completed\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                {
                    std::string taskDescription;
                    std::cout << "Enter task description: ";
                    std::cin.ignore(); // Ignore the newline character in the buffer
                    std::getline(std::cin, taskDescription);
                    addTask(tasks, taskCount, taskDescription);
                    break;
                }
            case 2:
                viewTasks(tasks, taskCount);
                break;
            case 3:
                {
                    int taskIndex;
                    viewTasks(tasks, taskCount);
                    std::cout << "Enter the task index to mark as completed: ";
                    std::cin >> taskIndex;
                    Compeleted(tasks, taskCount, taskIndex);
                    break;
                }
            case 4:
                std::cout << "Exiting program.\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } 
	while (choice != 4);
    return 0;
}
