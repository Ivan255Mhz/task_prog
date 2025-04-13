#include "sub_task.hpp"

// Конструкторы demo--
sub_task::sub_task(const task *parent = nullptr) : completed_task(false), parent_task(parent) {}

sub_task::sub_task(const std::string &name, const task *parent = nullptr) : name_task(name), completed_task(false), parent_task(parent) {}

sub_task::sub_task(const std::string &name, const std::string &text, const task *parent = nullptr) : name_task(name), text_task(text), completed_task(false), parent_task(parent) {}

sub_task::sub_task(const char *name, const task *parent = nullptr) : name_task(name), completed_task(false), parent_task(parent) {}

sub_task::sub_task(const char *name, const char *text, const task *parent = nullptr) : name_task(name), text_task(text), completed_task(false), parent_task(parent) {}

const std::string sub_task::get_name_task() const
{
    return name_task;
}

const std::string sub_task::get_text_task() const
{
    return text_task;
}

task *sub_task::get_parent() const
{
    return parent_task;
}

bool sub_task::completed_chek() const
{
    return completed_task;
}

void sub_task::check_mark()
{
    completed_task = true;
}

void sub_task::display() const
{

    std::cout << "Задача: " << name_task << std::endl;
    std::cout << "Описание: " << text_task << std::endl;
}
