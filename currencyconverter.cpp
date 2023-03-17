#include<iostream>
using namespace std;

int main()
{
 float currency;
 float dollar=81.94;
 float euros=0.012;
 float Ruble=0.93;
 float AUSDollar=0.0018;
 float ArabicDirham=0.045;
 float EgyptPound=0.38;
 float JapaneseYen=1.67;
 
 cout<<"Please Select the option below to convert"<<endl;
 cout<<"1. Convert Indian Rupees to American Dollar"<<endl;
 cout<<"2. Convert American Dollar to Indian Rupees"<<endl;
 cout<<"3. Convert Indian Rupees to European Euros"<<endl;
 cout<<"4. Convert European Euros to Indian Rupees"<<endl;
 cout<<"5. Convert Indian Rupees to Russian Ruble"<<endl;
 cout<<"6. Convert Russian Ruble to Indian Rupees"<<endl;
 cout<<"7. Convert Indian Rupees to Australian Dollar"<<endl;
 cout<<"8. Convert Australian Dollar to Indian Rupees"<<endl;
 cout<<"9. Convert Indian Rupees to Arabic Dirham"<<endl;
 cout<<"10.Convert Arabic Dirham to Indian Rupees"<<endl;
 cout<<"11.Convert Indian Rupees to Egypt Pound"<<endl;
 cout<<"12.Convert Egypt Pound to Indian Rupees"<<endl;
 cout<<"13.Convert Indian Rupees to Japanese Yen"<<endl;
 cout<<"14.Convert Japanese Yen to Indian Rupees"<<endl;
 int p;
 cin>>p;
 cout<<"Enter Value to convert"<<endl;
 cin>>currency;
 
 switch(p){
  case 1:
   cout<<"Converting Your input to American Dollar.."<<endl;
   cout<<currency/dollar<<endl;
   break;
  case 2:
   cout<<"Converting your input to Indian Rupee.."<<endl;
   cout<<currency*dollar<<endl;
   break;
  case 3:
   cout<<"Converting your input to European Euros.."<<endl;
   cout<<currency*euros<<endl;
   break;
  case 4:
   cout<<"Converting Your input to Indian Rupees.."<<endl;
   cout<<currency/euros<<endl;
   break;
  case 5:
   cout<<"Converting Your input to Russian Ruble.."<<endl;
   cout<<currency*Ruble<<endl;
   break;
  case 6:
   cout<<"Converting Your input to Indian Rupees.."<<endl;
   cout<<currency/Ruble<<endl;
   break;
  case 7:
   cout<<"Converting Your Input to Australian Dollar.."<<endl;
   cout<<currency*AUSDollar<<endl;
   break;
  case 8:
   cout<<"Converting Your input to Indian Rupees.."<<endl;
   cout<<currency/AUSDollar<<endl;
   break;
  case 9:
   cout<<"Converting Your input to Arabic Dirham.."<<endl;
   cout<<currency*ArabicDirham<<endl;
   break;
  case 10:
   cout<<"Converting Your input to Indian Rupees.."<<endl;
   cout<<currency/ArabicDirham<<endl;
   break;
  case 11:
   cout<<"Converting Your input to Egypt Pound.."<<endl;
   cout<<currency*EgyptPound<<endl;
   break;
  case 12:
   cout<<"Converting Your input to Indian Rupees.."<<endl;
   cout<<currency/EgyptPound<<endl;
   break;
  case 13:
   cout<<"Converting Your input to Japanese Yen.."<<endl;
   cout<<currency*JapaneseYen<<endl;
   break;
  case 14:
   cout<<"Converting Your input to Indian Rupees.."<<endl;
   cout<<currency/JapaneseYen<<endl;
   break;
 }
 return 0;  
} 
