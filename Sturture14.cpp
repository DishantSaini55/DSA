// #include<iostream>
// using namespace std;
// struct employee
// {
//     /* data */
//     int eId;
//     float salary;
//     char favchar;


// };

//  int main(){
//     struct employee DISHANT ;
    
//     DISHANT.eId=101;
//     DISHANT.salary=80000;
//     DISHANT.favchar='c';
//     cout<<"THE EMPLOYEE ID OF DISHANT IS=  "<<DISHANT.eId<<endl;
//     cout<<"THE FAV CHAR OF DISHANT IS=  "<<DISHANT.favchar<<endl;
//     cout<<"THE SALARY ID OF DISHANT IS=  "<<DISHANT.salary<<endl;




    
//     return 0;
// }




#include<iostream>
using namespace std;
typedef struct employee
{
    /* data */
    int eId;
    float salary;
    char favchar;


}ep;

 int main(){
    union DISHANT 
    {                                                           //DHEKH UNION MAIN HAIN NA
                                                                //AGAR TUJHE EK HI KA OUTPUT CHAHIYE
                                                                //YA TO RICE YA TO PRICE TO HUM ISSE 
                                                                //USE KARENGE VARNA STRUCT KO USE KARENGE
        /* data */
        int rice;  //4
        float price;  //1
        char name;  //4
    };
    union DISHANT m1;
    m1.rice=2;
    cout<<m1.rice<<endl; 


    ep DISHANT ;
    
    // DISHANT.eId=101;
    // DISHANT.salary=80000;
    // DISHANT.favchar='c';
    // cout<<"THE EMPLOYEE ID OF DISHANT IS=  "<<DISHANT.eId<<endl;
    // cout<<"THE FAV CHAR OF DISHANT IS=  "<<DISHANT.favchar<<endl;
    // cout<<"THE SALARY ID OF DISHANT IS=  "<<DISHANT.salary<<endl;






    //ENUMS 
    int main() 
    
    enum Meal{ breakfast, lunch, dinner};
    Meal m1 = lunch;
    cout<<m1;
    
    // //ISKE ANADR HAIN NA JAISE AGAR HUM MEAL KAIN ANDAR TEEN CHEEZ DAL DE TO PHIR
    // //USME SAIN HUM EK CALL KARE TAB VO USKI VLAUE BATA DEGA AUR VALUE SHURU 0 SAIN HOGI
    // //JAISE ISSI PROOGRAM MAIN BREAKFAST KI VALUE 0 AND LUNCH KI VALUE 1



    




    
    return 0;
}

