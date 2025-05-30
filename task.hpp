
#ifndef TASK_HPP
#define TASK_HPP

#include <iostream>
#include <list>

#include <iterator>

class sub_task;

namespace prg
{

    class task
    {

    private:
        static size_t task_id;
        std::string name_task;
        std::string text_task;
        std::list<sub_task> tasks_list;

        void sub_task_display() const;

    public:
        task();

        task(const std::string &name);

        task(const char *name);

        task(const std::string &name, const sub_task &sub);

        task(const char *name, const sub_task &sub);

        // Шаблонный конструктор demo--
        template <class InIter>
        task(const std::string &name, InIter begin, InIter end) : name_task(name)
        {
            tasks_list.assign(begin, end);
        }

        template <class InIter>

        task(const char *name, InIter begin, InIter end) : task(std::string(name), begin, end)
        {
        }

        task(const std::string &name, const std::string &text);

        task(const char *name, const char *text);

        task(const std::string &name, const std::string &text, const sub_task &sub);

        task(const char *name, const char *text, const sub_task &sub);

        // Шаблонный конструктор demo--
        template <class InIter>
        task(const std::string &name, const std::string &text, InIter begin, InIter end) : name_task(name), text_task(text)
        {
            tasks_list.assign(begin, end);
        }

        template <class InIter>
        task(const char *name, const char *text, InIter begin, InIter end) : task(std::string(name), std::string(text), begin, end) {}

        const std::string get_name_task() const;

        const std::string get_text_task() const;

        size_t number_of_subtasks() const;

        size_t number_of_active_subtasks() const;

        void display() const;
    };
}

#endif