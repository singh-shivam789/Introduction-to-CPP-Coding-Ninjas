//Aim -> Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E)
// and Step Size (W), you need to convert all Fahrenheit values from Start to End at the gap of W,
// into their corresponding Celsius values and print the table.
#include<iostream>
using namespace std;
//(32°F − 32) × 5/9 = 0°C
void printTable(float start, float end, float step){
    int celsius;
    for(start; start<=end; start+=step)
    {
        celsius = (start - 32) * 5.0 / 9;
        cout<<start<<"\t"<<celsius<<endl;
    }
}

int main(){
  float start, step, end;
  cin>>start>>end>>step;
  printTable(start,end,step);
}
