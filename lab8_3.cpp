/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main(){
    
    int age;
    int height;
    int bounty;
    string racter;
    
    cout <<"Enter your age: ";
    cin >> age;
    
    if(age<=25){
        
        cout <<"Enter your height: ";
        cin >> height;
        
        if (height<100) {
            
            racter = "Chopper";
            
        }else if(height<180){
            
            racter = "Usopp";
            
        }else {
            
            cout << "Enter your bounty: ";
            cin >> bounty;
            
            if(bounty > 1100000000){
                
                racter = "Zoro";
                
            }else{
                
                racter = "Sanji";
            }
            
        }
        
    }else if (age <= 60){
        
        cout << "Enter your bounty: ";
        cin >> bounty;
        
        if(bounty > 500000000){
            
            racter = "Jinbe";
            
        }else {
            
            racter = "Franky";
            
        }
    }else {
        
         racter = "Brook";
        
    }
    
    cout << "Your character = " << racter;
    
    return 0; 
}
