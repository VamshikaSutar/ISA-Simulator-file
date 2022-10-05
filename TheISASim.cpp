#include<simplecpp>

main_program{
//Write your code here
int altitude;
cout << "Please enter the altitude in meters" << endl;

cin >> altitude;
double MSLTemperature = 288.15, MSLPressure = 101325, MSLDensity = 1.225, MSLgo = 9.80665, R = 287.00, a1 = -0.0065, T, P, D;
if(altitude <= 11000)
{ T = MSLTemperature + a1*altitude ;
  P = MSLPressure*(pow((T/MSLTemperature),-(MSLgo/(a1*R))));
  D = MSLDensity*(pow((T/MSLTemperature),-((MSLgo/(a1*R)) - 1)));

cout << "The temperature at altitude of " << altitude << " meters is " << T << endl;
cout << "The pressure at altitude of " << altitude << " meters is " << P << endl;
cout << "The density at altitude of " << altitude << " meters is " << D << endl;

}
double T2 = MSLTemperature + a1*11000.00;
double P2o = MSLPressure*(pow((T2/MSLTemperature),-(MSLgo/(a1*R))));
double D2o = MSLDensity*(pow((T2/MSLTemperature),-( (MSLgo/(a1*R) - 1))));
 if(altitude >11000 and altitude <= 25000)
 { T = T2;
  P = P2o*pow(2.718,-(MSLgo*(altitude - 11000))/(T2*R));
  D = D2o*pow(2.718,-(MSLgo*(altitude - 11000))/(T2*R));

 cout << "The temperature at altitude of " << altitude << " meters is " << T << endl;
  cout << "The pressure at altitude of " << altitude << " meters is " << P << endl;
cout << "The density at altitude of " << altitude << " meters is " << D << endl;
 }
 double T3o = T2, a2 = 0.003;
double P3o = P2o*pow(2.718,-(MSLgo*(14000))/(T2*R));
double D3o = D2o*pow(2.718,-(MSLgo*(14000))/(T2*R));

  if(altitude >25000 and altitude<= 47000)
 { T = T2 + a2*(altitude - 25000);
  P = P3o*(pow((T/T2),-(MSLgo/(a2*R))));
  D = D3o*(pow((T/T2),-( (MSLgo/(a2*R) - 1))));

 cout << "The temperature at altitude of " << altitude << " meters is " << T << endl;
  cout << "The pressure at altitude of " << altitude << " meters is " << P << endl;
cout << "The density at altitude of " << altitude << " meters is " << D << endl;
 }
double T4 = T2 + a2*(47000 - 25000);
double P4o = P3o*(pow((T4/T2),-(MSLgo/(a2*R))));
double D4o = D3o*(pow((T4/T2),-( (MSLgo/(a2*R) - 1))));
  if(altitude>=47000 and altitude<= 53000)
{T = T4;
  P = P4o*pow(2.718,-(MSLgo*(altitude - 47000))/(T4*R));
  D = D4o*pow(2.718,-(MSLgo*(altitude - 47000))/(T4*R));
 cout << "The temperature at altitude of " << altitude << " meters is " << T << endl;
  cout << "The pressure at altitude of " << altitude << " meters is " << P << endl;
cout << "The density at altitude of " << altitude << " meters is " << D << endl;
}
double T5o = T4, a3 = -0.0045;
double P5o = P4o*pow(2.718,-(MSLgo*(53000-47000))/(T4*R));
double D5o = D4o*pow(2.718,-(MSLgo*(53000 - 47000))/(T4*R));
 if(altitude>53000 and altitude<= 79000)
{ T = T5o + a3*(altitude - 53000);
  P = P5o*(pow((T/T5o),-(MSLgo/(a3*R))));
  D = D5o*(pow((T/T5o),-( (MSLgo/(a3*R) - 1))));
 cout << "The temperature at altitude of " << altitude << " meters is " << T << endl;
  cout << "The pressure at altitude of " << altitude << " meters is " << P << endl;
cout << "The density at altitude of " << altitude << "meters is " << D << endl;
}
double T6 = T5o + a3*(79000 - 53000);
double P6o = P5o*(pow((T6/T4),-(MSLgo/(a3*R))));
double D6o = D5o*(pow((T6/T4),-( (MSLgo/(a3*R) - 1))));
 if(altitude>79000 and altitude<= 90000)
{ T = T6;
  P = P6o*pow(2.718,-(MSLgo*(altitude - 79000))/(T6*R));
  D = D6o*pow(2.718,-(MSLgo*(altitude - 79000))/(T6*R));
 cout << "The temperature at altitude of " << altitude << "meters is " << T << endl;
  cout << "The pressure at altitude of " << altitude << "meters is " << P << endl;
cout << "The density at altitude of " << altitude << "meters is " << D << endl;
}





}
