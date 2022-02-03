#include <iostream>

using namespace std;




class BOB_Deposits{

   int principle , years ;
   float interestRate ,returnValue;
   
    public :
    BOB_Deposits(){
    // cout <<"welcome to our BOB BANK DEPOSITS Calculator\n\n";
    };
      BOB_Deposits(int p , int y , float r);
      BOB_Deposits(int p , int y , int r);
        
        void display(){
            cout <<"principle amount is  "<< principle  
            << "\nreturn value after " << years << "years"
            << " with interest rate " << interestRate 
            << " is " << returnValue<< endl ;
        };
};

BOB_Deposits :: BOB_Deposits(int p , int y , float r){
    //returnValue = principle * (1 + r )^y
    
  principle = p ; //1000
  years = y ; //3
  interestRate = r ;  //3% = 0.03
  returnValue = p ; // 100
 
 for(int i = 0 ; i < y ; i++){
     returnValue *= (1 + interestRate); //1030 , 1060.9 , 1092.727
     cout << returnValue << endl;
 } ;
 
};


BOB_Deposits :: BOB_Deposits(int p , int y , int r){
 
    
  principle = p ; 
  years = y ; 
  interestRate = (float) r / 100 ;
  returnValue = p ; 
 
 for(int i = 0 ; i < y ; i++){
     returnValue *= (1 + interestRate); //1030 , 1060.9 , 1092.727
     cout << returnValue << endl;
 } ;
 
};



int main()
{
    
    int p = 1000 , r_percent = 3 , y = 3 ; 
    float r = 0.03 ; 
    
    BOB_Deposits bd1 , bd2;
    
    
   cout << "enter value of principle , rate and years : " ;
   cin >> p >> r  >> y ;
   
   bd1 =  BOB_Deposits(p , y  , r_percent);
   bd1.display();
   
   cout << endl;
   
   cout << "enter value of principle , rate and years : " ;
   cin >> p >> r  >> y ;
   
   
   bd2 = BOB_Deposits(p , y  , r);
   bd2.display();
    
    return 0;
}
