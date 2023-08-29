#include <iostream>

int main()
{
  std::string questions[] = {"1. What programming languages we use for ML?: ",
                             "2. What programming languages we use for Embedded system?: ",
                             "3. What programming languages we use for Web Developement?: ",
                             "4. What programming languages we use for Mobile app development?: "};

  std::string options[][4] = {{"A. Python", "B. Javascript", "C. PHP", "D. Zig"},
                              {"A. Flutter", "B. C++", "C. Swift", "D. Java"},
                              {"A. C++", "B. Zig", "C. Javascript", "D. matlab"},
                              {"A. Flutter", "B. Lua", "C. C++", "D. PHP"}};
  char answerKey[] = {'A', 'B', 'C', 'A'};

  int size = sizeof(questions) / sizeof(questions[0]);
  int score = 0;
  char guess;

  for (int i = 0; i < size; i++)
  {
    std::cout << "*********************************************************************\n";
    std::cout << questions[i] << '\n';
    std::cout << "*********************************************************************\n";

    for (int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++)
    {
      std::cout << options[i][j] << std::endl;
    }

    std::cout << "Enter your guess : ";
    std::cin >> guess;
    guess = toupper(guess);

    if (guess == answerKey[i])
    {
      std::cout << "Correct!\n";
      score++;
    }
    else
    {
      std::cout << "Wrong!\n";
      std::cout << "Answer is " << answerKey[i] << "\n";
    }
  }
  std::cout << "**********************************************\n";
  std::cout << "You correct " << score << " out of 4 questions\n";
  std::cout << "You score parcentage is " << (score / double(size)) * 100 << " %";
  return 0;
}