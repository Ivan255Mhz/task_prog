#pragma once

#include <iostream>
#include "task.hpp"

class sub_task
{

private:
    std::string name_task;
    std::string text_task;
    task *parent_task;
    bool completed_task;

public:
    sub_task(const task *parent = nullptr);

    sub_task(const std::string &name, const task *parent = nullptr);

    sub_task(const std::string &name, const std::string &text, const task *parent = nullptr);

    sub_task(const char *name, const task *parent = nullptr);

    sub_task(const char *name, const char *text, const task *parent = nullptr);

    const std::string get_name_task() const;

    const std::string get_text_task() const;

    // возвращаем парента
    task *get_parent() const;

    bool completed_chek() const;

    // помечаем выполненую таску
    void check_mark();

    void display() const;
};