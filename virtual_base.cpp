#include<iostream>
using namespace std;
/*
using virtual base method in c++ program to create class method
student , test , sports , result --> we use the names as class method 
*/
class student{
    protected:
    int roll_no;
    public :
    void set_number(int a){roll_no = a;}
    void print_number(void){cout<< " Your roll No. is  " << roll_no << endl;}
};
class test : virtual public student{
    protected:
    float math , physics;
    public :
    void set_marks(float m1 , float m2){
        math = m1;
        physics = m2;
    }
    void print_marks(void){
        cout << " your marks is here:" << endl;
            cout << " math :"<< math << endl;
         cout << " physics:" << physics << endl;
    }

};
class sports : virtual public student{
    protected:
    int score;
    public:
    void set_score(int sc){score = sc;}
    void print_score(void){
        cout << " Your Score in PT is :" << score << endl;
    }
};
class result : public test , public sports{
    private:
    float total;
    public:
    void display(void){
        total = physics + math +  score;
        print_number();
        print_marks();
        print_score();
        cout << " Your total Score is :" <<  total << endl;
    }
};
int main(){
     result Arijit ;
     Arijit.set_number(5026);
     Arijit.set_marks(93.89 , 97.08);
     Arijit.set_score(9); // PT exam is conduct in 10 marks 
     Arijit.display();
    return 0;
}