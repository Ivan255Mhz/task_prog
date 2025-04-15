#include <iostream>
#include "task.hpp"
#include "sub_task.hpp"
#include <vector>
#include <list>
#include <map>
#include <queue>
#include <stack>

int main()
{

    // Создаем задачи
    sub_task a1("Инициализация проекта", "создать базовую структуру каталогов");
    sub_task a2("Написание кода", "реализовать класс для работы с API");
    sub_task a3("Юнит-тесты", "покрыть тестами модуль авторизации");
    sub_task a4("Оптимизация", "уменьшить время выполнения запросов на 30%");
    sub_task a5("Документация", "добавить комментарии для всех публичных методов");
    sub_task a6("Сборка", "настроить CI/CD пайплайн");
    sub_task a7("Анализ памяти", "найти и исправить утечки в обработке изображений");
    sub_task a8("Интеграция", "подключить систему логирования к ядру приложения");
    sub_task a9("Рефакторинг", "перевести устаревший код на паттерн MVVM");
    sub_task a10("Деплой", "развернуть релизную версию на облачном сервере");

    // Вектор (последовательный доступ)
    std::vector<sub_task> task_vector = {a1, a2, a3, a4, a5, a6, a7, a8, a9, a10};

    // Список (быстрые вставки/удаления)
    std::list<sub_task> task_list = {a1, a2, a3, a4, a5, a6, a7, a8, a9, a10};

    // Ассоциативный массив (быстрый поиск по ключу)
    std::map<std::string, sub_task> task_map = {
        {a1.get_name_task(), a1},
        {a2.get_name_task(), a2},
        {a3.get_name_task(), a3},
        {a4.get_name_task(), a4},
        {a5.get_name_task(), a5},
        {a6.get_name_task(), a6},
        {a7.get_name_task(), a7},
        {a8.get_name_task(), a8},
        {a9.get_name_task(), a9},
        {a10.get_name_task(), a10}
    };

    //task one_task("Первая задача", "Провека конструторов",task_vector.begin(),task_vector.end());

    prg::task two_task("Вторая задача","Проверка контсрутора", task_list.begin(),task_list.end());


    //one_task.display();

    two_task.display();


    return 0;
}