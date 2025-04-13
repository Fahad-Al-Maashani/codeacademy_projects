/* Write a space.cpp program that helps him keep track of his target weight by:

It should ask him what his earth weight is.
Ask him to enter a number for the planet he wants to fight on.
It should then compute his weight on the destination planet.
Here is the table of conversion:

#	Planet	Relative Gravity
1	Mercury	0.38
2	Venus	0.91
3	Mars	0.38
4	Jupiter	2.34
5	Saturn	1.06
6	Uranus	0.92
7	Neptune	1.19 */ 

#include <iostream>

int main() {
//declare variables 
double earth_weight; 
int num; 
double weight_p;
std::cout<< "Enter your weight on planet earth ? "; 
std::cin>> earth_weight; 
std::cout<<"Enter the number of the planet you want to fight on ? "; 
std::cin>> num; 
 if (num==1){
 weight_p =  earth_weight* 0.38; 
 std::cout<<"Your weight in Mercury " << weight_p << "\n";
 }
else if (num ==2){
 weight_p =  earth_weight * 0.91; 
 std::cout<<"Your weight in Venus " << weight_p << "\n";
 }  
else if (num ==3){
 weight_p = earth_weight * 	0.38; 
 std::cout<<"Your weight in Mars " << weight_p << "\n";
 }  
else if (num ==4){
 weight_p = earth_weight * 2.34; 
 std::cout<<"Your weight in Jupiter " << weight_p << "\n";
 }  
else if (num ==5){
 weight_p =  earth_weight* 1.06; 
 std::cout<<"Your weight in Saturn " << weight_p << "\n";
 }  
 else if (num ==6){
 weight_p = earth_weight *0.92; 
 std::cout<<"Your weight in Uranus " << weight_p << "\n";
 }   
 else if (num ==7){
 weight_p = earth_weight *	1.19; 
 std::cout<<"Your weight in Neptune " << weight_p << "\n";
 }   
 else {
 
std::cout<<"Error enter correct number of associated planet\n ";
 }   
  return 0;
  
}
