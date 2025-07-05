#include "Task.h"
#include<string>
#include<vector>
#include<filesystem>
#include<fstream>
#include<algorithm>

void SaveTasksToFile(const std::vector<Task>& tasks, const std::string& fileName)
{
    std::ofstream ostream(fileName);
    ostream << tasks.size();

    for (const Task& task : tasks)
    {
        std::string description = task.description;
        std::replace(description.begin(), description.end(), ' ', '_');

        ostream << "\n" << description << ' ' << task.done;
    }
}

std::vector<Task> LoadTasksFromFile(const std::string& fileName)
{
    if (!std::filesystem::exists(fileName))
    {
        return std::vector<Task>();
    }

    std::vector<Task>tasks;
    std::ifstream istream(fileName);

    int n;
    istream >> n;

    for (int i = 0;i < n;i++)
    {
        std::string description;
        bool done;
        istream >> description >> done;
        std::replace(description.begin(), description.end(), '_', ' ');
        tasks.push_back(Task{ description,done });
    }

    return tasks;
}



