#include <iostream>
#include <string>
using namespace std;

class animal
{
 public:
  int legs;
  void print(){
    cout<<legs<<endl;}
};

 class monkey : public animal
{
   private:
    string color;
   public: 
    monkey(string clr){
        color = clr;}
    void print1(){
       cout<<color<<endl;}
};

int main(){
 monkey makaka("brown");
 makaka.legs = 2;
 makaka.print();
 makaka.print1();
}
