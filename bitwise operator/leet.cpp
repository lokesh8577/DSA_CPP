// #include<iostream>
// using namespace std;
// int main(){
//     //decimal to binary
//     int n; 
//     cout<<"enter the value of n : "<<endl;
//     cin>>n;
//     while(n!=0){
//         int r=n%2;
//         cout<<r;
//         n=n/2;
//     }
//     return 0;

// }
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the value of n:";
//     cin>>n;
//     int i=0;
//     int ans=0;
//     while(n!=0){
//         int bit=n%2;
//         ans=ans+bit*pow(10,i);
//         i++;
//         n=n>>1;
// }
// cout<<"binary representation of "<<n<<" is "<<ans;
// return 0;
// }  //time complexity is o(logn) and space complexity is o(1)  //


//nagative intiger to binary
// #include <iostream>
// using namespace std;

// // Function to print binary representation
// void printBinary(int num) {
//     const int BITS = 32;  // Assuming 32-bit integer

//     for (int i = BITS - 1; i >= 0; i--) {
//         // Extract each bit
//         int bit = (num >> i) & 1;
//         cout << bit;
//     }
//     cout << endl;
// }

// int main() {
//     int num;

//     // Input the integer
//     cout << "Enter a negative integer: ";
//     cin >> num;

//     if (num >= 0) {
//         cout << "Please enter a negative integer." << endl;
//         return 1;
//     }

//     // Print binary representation
//     cout << "Binary representation of " << num << " is: ";
//     printBinary(num);

//     return 0;
// }

//binary to decimal
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int n,i=0;
//     cout<<"enter the binary number"<<endl;
//     cin>>n;
//     int ans=0;
//     while (n!=0){
//        int bit= n%10;
//        if(bit==1){
//        ans=ans+bit*pow(2,i);
//        }
//        i++;
//        n=n/10;
//     }
//     cout<<"decimal number is "<<ans<<endl;
//     return 0;
// }
    
 //power of 2
    // #include<iostream>
    // #include<math.h>
    // using namespace std;
    //  int main(){
    //     int n;
    //     cout<<"enter the value of n"<<endl;
    //     cin>>n;
    //     bool ans=1;
    //     for(int i=0;i<=n;i++){
    //            int out=0;
    //           out= out+pow(2,i);
    //           if(out==n){
    //               ans=1;
    //               break;
    //           }
    //           else{
    //             ans=0;
    //             }
    //         }  
    //         if(ans==1){
    //            cout<<bool(ans);
    //             }
    //             else{
    //                 cout<<bool(ans);
    //                 }
    //                 return 0;
    //                 }


    //switch satement
    #include<iostream>
    using namespace std;
    int main(){
        int n;
        cout<<"enter the value of n"<<endl;
        cin>>n;
        switch(n){
            case 1:
            cout<<"one"<<endl;
            break;
            case 2:
            cout<<"two"<<endl;
            break;
            case 3:
            cout<<"three"<<endl;
            break;
            default:
            cout<<"not found"<<endl;
            break;
            }
            return 0;
    }
