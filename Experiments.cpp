#include "Experiments.hpp"

#include <iostream>
#include <iterator>
#include <set>
#include <string>

using namespace std;

void test1() {
  //  1. Мы используем несколько разных типов STL, для чего включим некоторые за-
  //  головочные файлы:
  //  2. Чтобы сэкономить немного времени на наборе текста, объявим об использова-
  //  нии пространства имен std:

  //  3. Теперь мы готовы писать саму программу, начинающуюся с функции main.
  //  В ней создается экземпляр класса std::set, в котором будут храниться строки:
  set<string> s;
  //  4. Далее получим данные от пользователя. Просто считаем их из стандартного
  //  потока ввода с помощью удобного итератора istream_iterator:
  istream_iterator<string> it {cin};
  istream_iterator<string> end;
  //  1
  //  Все это будет проделано средствами стандарта C++98, из нового в этом разделе только
  //  синтаксис.
  //  Отсеиваем повторяющиеся слова и выводим их на экран 71
  //  5.6.7.Имея начальный и конечный итераторы, которые представляют данные, введен-
  //  ные пользователем, можем просто заполнить множество на основе этих данных
  //  с помощью std::inserter:
  copy(it, end, inserter(s, s.end()));
  //  На этом, в общем-то, все. Чтобы увидеть, какие уникальные слова мы получили
  //  из стандартного ввода, просто выведем на экран содержимое нашего множества:
  for (const auto word : s) { cout << word << ", "; }
  cout << '\n';

  //  Скомпилируем и запустим программу с нашими входными данными. Взглянем
  //  на полученный результат, из которого были удалены все дубликаты, а уникаль-
  //  ные слова теперь отсортированы по алфавиту:
  //  $ echo "a a a b c foo bar foobar foo bar bar" | ./program
  //  a, b, bar, c, foo, foobar,
}

Experiments::Experiments() {}