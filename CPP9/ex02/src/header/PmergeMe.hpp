#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <algorithm>
#include <cctype>
#include <ctime>
#include <vector>
#include <list>
#include <cctype>
#include <cstdlib>
#include <climits>

class PmergeMe
{
private:
  std::vector<int> args;

  std::vector<int> vector_sorted;
  double vector_duration;

  std::list<int> list_sorted;
  double list_duration;

public:
  PmergeMe(void);
  ~PmergeMe(void);
  PmergeMe(const PmergeMe &other);
  PmergeMe &operator=(const PmergeMe &other);
  int parse_args(char **);
  int merge_vector();
  int merge_list();
  void display();
};

#endif
