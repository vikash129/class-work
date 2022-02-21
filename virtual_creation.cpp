#include <iostream>
#include <string>

using namespace std;
class CWH{
    protected:
        string title[30];
        float rating;
    public:

        CWH(string s,float rating){
            strcpy(s,title);
            this->rating = rating ;
        };
        virtual void display();
};

class Video : public CWH {
    float length ;
  public:
  
  Video(string s , float r , float vl) : CWH(s , r){
      length = vl;
      
  };
  void display(){
      cout << "in Video Class\n";
      cout << "title = " << title << endl ;
            cout << "rating = " << rating << endl ;
                  cout << "length = " << length << endl<<endl ;
  }
 
};

int main()
{
    string title = new char[30];
    float rating,length ;
    
    
    
    Video( "" , 4.9 ) ;
 
    
    DerivedC derived_C;
    DerivedC *ptr_derived_C;
    
    ptr_baseA = &derived_C;
    
// ptr_derived_C->derived_var = 200;
// ptr_derived_C->base_var = 300;
// ptr_derived_C->display();


 ptr_baseA->display(); //with virtual it will call the derived_C members otherwise it will have default behaviour
    return 0;
}
