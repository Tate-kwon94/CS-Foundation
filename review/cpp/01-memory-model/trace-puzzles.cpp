#include <cstdlib>
#include <iostream>
#include <string>

namespace {

void puzzle1() {
  int value = 3;
  int* pointer = &value;
  *pointer = 8;

  std::cout << value << ' ' << *pointer << '\n';
}

void puzzle2() {
  int first = 2;
  int second = 4;
  int* left = &first;
  int* right = &second;

  left = right;
  *left = 10;

  std::cout << first << ' ' << second << ' ' << *left << ' ' << *right << '\n';
}

void puzzle3() {
  int first = 2;
  int second = 4;
  int* left = &first;
  int* right = &second;

  *left = *right;
  second = 7;

  std::cout << first << ' ' << second << ' ' << *left << ' ' << *right << '\n';
}

void puzzle4() {
  int* owner = new int{5};
  int& alias = *owner;

  alias = 9;
  std::cout << *owner << ' ' << alias << ' ' << std::boolalpha
            << (owner == &alias) << '\n';

  delete owner;
  owner = nullptr;
}

class SensorReading {
 public:
  explicit SensorReading(double value) : value_(value) {}

  void addOffset(double offset) { value_ += offset; }
  double value() const { return value_; }

 private:
  double value_;
};

void puzzle5() {
  SensorReading reading{12.5};
  SensorReading* pointer = &reading;

  pointer->addOffset(0.5);
  (*pointer).addOffset(2.0);

  std::cout << reading.value() << ' ' << pointer->value() << '\n';
}

void redirect(int*& pointer, int& target) { pointer = &target; }

void puzzle6() {
  int first = 1;
  int second = 6;
  int* pointer = &first;

  redirect(pointer, second);
  *pointer += 4;

  std::cout << first << ' ' << second << ' ' << *pointer << '\n';
}

void printUsage(const char* program) {
  std::cerr << "Usage: " << program << " <puzzle-number: 1-6>\n";
}

}  // namespace

int main(int argc, char* argv[]) {
  if (argc != 2) {
    printUsage(argv[0]);
    return 1;
  }

  const std::string puzzle = argv[1];

  if (puzzle == "1") {
    puzzle1();
  } else if (puzzle == "2") {
    puzzle2();
  } else if (puzzle == "3") {
    puzzle3();
  } else if (puzzle == "4") {
    puzzle4();
  } else if (puzzle == "5") {
    puzzle5();
  } else if (puzzle == "6") {
    puzzle6();
  } else {
    printUsage(argv[0]);
    return 1;
  }

  return 0;
}
