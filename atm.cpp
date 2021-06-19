/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class balance{
    public:
        double amt;
        
        void enterbalance(){
            cout<<"Enter balance : ";
            cin>>amt;
        }
        
        void viewBal(){
            cout<<"Balance : "<<amt<<endl;
        }
};

class withdraw : public balance{
    
    int w_amt;
    
    public:
        void deduct(){
            cout<<"Enter amount to withdraw : ";
            cin>>w_amt;
            
            if(amt<w_amt){
                cout<< " insufficient balance " <<endl;
            }
            else{
                amt = amt - w_amt;
                cout << "Amount has been withdrawn ."<<endl;
            }
        } 
};

class deposit : public balance{
    
    int d_amt;
    
    public:
        void add(){
            cout<<"Enter amount to deposit : ";
            cin>>d_amt;
            
            amt = amt + d_amt;
            
            cout << "Amount has been Deposited ."<<endl;
        }
};

int main()
{
    int in;
    
    
    cout<<"Welcome"<<endl;
    withdraw bal;
    deposit bal1;
    
    bal.enterbalance();
    
again :
    
    cout<<"Choose from Below : "<<endl;
    cout<<"1.Withdraw"<<endl;
    cout<<"2.Deposit "<<endl;
    cout<<"3.View balance"<<endl;
    cout<<"4.Quit"<<endl;
    
    cin>>in;
    
    switch(in){
        case 1 :
            bal.deduct();
            goto again;
            break;
        case 2 :
            bal1.add();
            goto again;
            break;
        case 3 : 
            bal.viewBal();
            goto again;
            break;
        case 4 :
            break;
        default : 
            cout<<"Incorrect Response \n Try Again... " <<endl;
            goto again;
    }

    return 0;
}
