#include<iostream>
#include<string>
using namespace std;
// inheritance 
//  base class 
class fruit{
    protected:
    string taste;
    private:
    string colour;
    public:
 int quantity;
 void vairaity(){
     cout << "i have different type of  vairiety and all my vairity has unique characterstics" << endl;
 }
 void smell(){
     cout << " i have different type of smells!" << endl;
 }
  void apperance(){
      cout<< " I have different type of colours" << endl;
  }
 void setColour(string clr){
     colour = clr;
 }
 string getColour(){
   return colour;
 }
 void setQuantity(int qty){
     quantity = qty;
 }
 int getQuantity(){
     return quantity;
 }
 
};

// let's derive a class 
 class features : public fruit
  
  public:
 void setTaste(string tas){
     taste = tas;
 }
 void displayinfo(string c){
     cout << " i taste " << taste <<endl;
     cout << "my colouris" << c << endl;
 };
int main() {

    return 0;
}