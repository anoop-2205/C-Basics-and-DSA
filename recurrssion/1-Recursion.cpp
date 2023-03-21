//when a function call itself directly or indirecty is called recurssion!

//BIG OR COMPLEX PROBLEM SOLUTION DEPEND ON SAME TYPE TYPE OF MINNOR PROBLEM!

//EXAMPLE:--
     //       5!=5X4X3X2X1  ==5X4!

        //      n! = n x (n-1)!
    //          f(n) = n x f(n-1)

  // BASE CASE =WHERE PROGRAM EXCDEUSSION STOP .(return is mandatory)
  // RECURRSION RELATION -RECURSIVE RELATION


  /// FACTORIAL USING RECURSION.........

  #include<iostream>
  using namespace std;

  int factorial(int n){
    //base case
    if(n==0)
    return 1;

 /*   int smallerproblem=factorial(n-1);
    int biggerproblem=n*smallerproblem;

    return biggerproblem;
*/

return n*factorial(n-1);
 }

  int main(){
    int n;
    cout<<"Enter the number of factorial to be calculated: ";
    cin>>n;
    int ans =factorial(n);

    cout<<ans<<endl;
    return 0;
  }