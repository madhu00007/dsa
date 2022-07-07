//C++ Program to Add Two Numbers

/*
#include <iostream>
using namespace std;
int main ()
{
  int num1,num2,result;
  cout<<"Enter number 1"<<endl;
  cin>> num1;
  cout<<"Enter number 2"<<endl;
  cin>> num2;

  result = num1 + num2;

  cout<<num1<<" + "<<num2<<" = "<<result;

  return 0;
}
*/

//C++ Program to Find Largest Among Three Numbers
/*
#include<iostream>
using namespace std;

int main ()
{
   int n1,n2,n3;

   cout<<"Enter three numbers:";
   cin>>n1>>n2>>n3;

   if(n1>=n2 && n1>=n3)
{
  cout<<"Larger number: "<<n1;
}
   if(n2>=n1 && n2>= n3)
{
  cout<<"Larger number: "<<n2;
}
   if(n3>=n1 && n3>= n2)
{
  cout<<"Larger number: "<<n3;
}
  return 0;
}
*/


//How to Check whether the number is Prime or not
/*
#include<iostream>
 
using namespace std;
int main ()
{
    int i,n;
    cout<<"Enter a Number : ";
    cin>>n;
    for(i=2;i<=n-1;i++)
 {
    if(n%i==0)
    {
      break;
    }
 }
 if(n==i)
 {
  cout<<"Number is prime ";
 }
 else
 {
  cout<<"Number is not prime ";
 }
  return 0;
}
*/

//Print all Primes till N

/*
#include <iostream>

using namespace std;

int main() {

    int num, i, upto;

    // Take input from user
    cout << "Find prime numbers upto : ";
    cin >> upto;

    cout << endl << "All prime numbers upto " << upto << " are : " << endl;

    for(num = 2; num <= upto; num++) {

        for(i = 2; i <= (num / 2); i++) {

            if(num % i == 0) {
                i = num;
                break;
            }
        }

        // If the number is prime then print it.
        if(i != num) {
            cout << num << " ";
        }
    }

    return 0;
}
*/