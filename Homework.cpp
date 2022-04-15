// Homework.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int calendar()
{
      setlocale(0, "UKR");
      cout << "\t\t    АПРЕЛЬ 2022\n\n";
      cout << "ПН\tВТ\tСР\tЧТ\tПТ\tСБ\tВС\n";
      cout << "\t\t\t\t 1\t 2\t 3\n";
      cout << " 4\t 5\t 6\t 7\t 8\t 9\t10\n";
      cout << "11\t12\t13\t14\t15\t16\t17\n";
      cout << "18\t19\t20\t21\t22\t23\t24\n";
      cout << "25\t26\t27\t28\t29\t30\n\n";
      return 0;
}

int tree()
{
     cout << "                   Peshko Vasiliy Nikolaevich                                                             \n";
     cout << "                               *                                                    \n";
     cout << "                               *                                                    \n";
     cout << "                               *                                                    \n";
     cout << "                             *   *                                                   \n";
     cout << "                           *       *                                                 \n";
     cout << "    Peshko Nikolay Nikolaevich   Peshko Valentina Viktorovna                                                                        \n";
     cout << "               *                              *                                  \n";
     cout << "               *                              *                                  \n";
     cout << "               *                              *                                  \n";
     cout << "             *   *                          *   *                                \n";
     cout << "           *       *                      *       *                              \n";
     cout << "   Ded Nikolay    Babushka Galina   Ded Viktor   Babushka Nina                                                                 \n";
     cout << "\n";
    return 0;
}

int name()
{
    cout << " ************                        *******                              ****************               *****************    \n";
    cout << "***************                     *********                           ******************             ********************    \n";
    cout << "****         ***                   ****   ****                         ****                            ****             ****    \n";
    cout << "****         ***                  ****     ****                       ****                             ****             ****    \n";
    cout << "****        ***                  ****       ****                     ****                               ****            ****    \n";
    cout << "****       ***                  ****         ****                   ****                                 ****           ****    \n";
    cout << "****      ***                  ****           ****                 ****                                   ****          ****    \n";
    cout << "*************                 *********************                ****                                    *****************    \n";
    cout << "****       ***               ***********************               ****                                  *******************    \n";
    cout << "****        ***             ****                 ****              ****                                 ****            ****    \n";
    cout << "****         ***           ****                   ****              ****                               ****             ****    \n";
    cout << "****          ***         ****                     ****              ****                             ****              ****    \n";
    cout << "****         ***         ****                       ****              ****                           ****               ****    \n";
    cout << "****        ***         ****                         ****              ****                         ****                ****    \n";
    cout << "****       ***         ****                           ****               *****************         ****                 ****    \n";
    cout << "*************         ****                             ****                ***************        ****                  ****    \n";
    cout << "\n";
    return 0;
}

int resume()
{
    cout << "Vasiliy Peshko                              \n";
    cout << "Украина, Одесса                              \n";
    cout << "Образование: Лицей №63, Академия Шаг                              \n";
    cout << "Навыки: Python, C++, Английский язык уровня C1                              \n";
    cout << "Опыт работы: 5 лет, Senior Programmer in Tesla Motors                              \n";
    return 0;
}

int main()
{
    calendar();
    tree();
    name();
    resume();
    return 0;
}