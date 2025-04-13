#include "task.hpp"

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
