#include "task.hpp"
#include "sub_task.hpp"

namespace prg
{

    size_t task::task_id = 0;

    task::task() = default;

    task::task(const std::string &name) : name_task(name) {}

    task::task(const char *name) : task(std::string(name)) {}

    task::task(const std::string &name, const sub_task &sub) : name_task(name)
    {
        tasks_list.push_back(sub);
    }

    task::task(const char *name, const sub_task &sub) : task(std::string(name), sub) {}

    task::task(const std::string &name, const std::string &text) : name_task(name), text_task(text) {}

    task::task(const char *name, const char *text) : task(std::string(name), std::string(text)) {}

    task::task(const std::string &name, const std::string &text, const sub_task &sub) : name_task(name), text_task(text)
    {
        tasks_list.push_back(sub);
    }

    task::task(const char *name, const char *text, const sub_task &sub) : task(std::string(name), std::string(text), sub) {}

    const std::string task::get_name_task() const
    {
        return name_task;
    }

    const std::string task::get_text_task() const
    {
        return text_task;
    }

    void task::sub_task_display() const
    {
        int i = 1;
        for (const sub_task &task : tasks_list)
        {
            std::cout << i << '.';
            task.display();
            ++i;
        }
    }

    size_t task::number_of_subtasks() const
    {
        return tasks_list.size();
    }

    size_t task::number_of_active_subtasks() const
    {
        size_t count{};
        for (const sub_task &s_task : tasks_list)
        {
            if (s_task.completed_chek() != true)
                ++count;
        }
        return count;
    }

    void task::display() const
    {
        std::cout << "Задача: " << name_task << std::endl;
        std::cout << "Подзадачи: " << std::endl;
        if (tasks_list.size() != 0)
        {
            sub_task_display();
        }
        else
        {
            std::cout << "-----" << std::endl;
        }
        std::cout << "Описание: " << text_task << std::endl;
    }

}