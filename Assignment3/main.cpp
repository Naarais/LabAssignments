/* Naarais Aguilar #004100199
Lab Assignment 3
10/3/15
*/

#include <iostream>
#include <assert.h>

using namespace std;

class AddExp{
public:
float addition(float, float);
float exponential(float, float);
private:
float x;
float y;
};

float AddExp::addition(float x, float y){
return x + y;
}

float AddExp::exponential(float x, float y){
int result = 1;
for(int i=0; i<y; i++){
   result = result * x;
}
return result;
}

int main(){
AddExp FirstTest;
assert(FirstTest.addition(10, 2) == 12);
assert(FirstTest.exponential(2, 3) == 8);

float x, y;
cout << "X = :\t";
cin >> x;
cout << "Y = :\t";
cin >> y;
cout << endl;
cout << "\n" << x << " + " << y << "  = \t " << FirstTest.addition(x, y);
cout << "\n" << x << " ^ " << y << " \t= \t " << FirstTest.exponential(x, y) << endl;

}
