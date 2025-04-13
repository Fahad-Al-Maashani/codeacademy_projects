//this program will anticipate the age of human being based on given dog age.
//As you know  one-year-old dog is 10.5 years old in human years, and a two-year-old dog is 21 years old in human years

#include <iostream>

int main() {
  
//Write  a program to calacualte the age of a dog, in human years,of any dog > 2 years. 
int dog_age=2; 
int early_years =21; 
int later_years; 
int human_years; 
later_years=(dog_age-2)*4;
//adding two variables of early years + later years that equals to human years.
human_years= early_years + later_years;
std::cout << "My name is Sparkles! Ruff ruff, I am " << human_years << " years old in human years.\n";
return 0;
}
