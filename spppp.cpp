// // calculator
// #include <iostream>
// using namespace std;
// int main()
// {
//    double num1, num2;
//    string sign;
//    cout << "entre the first number";
//    cin >> num1;
//    cout << "select your sign(+,-,*,/)";
//    cin >> sign;
//    cout << "entre the secound number";
//    cin >> num2;
//    if( sign =="+" )
//   {
//    cout<<"adding of two numbers"<< num1+num2<<endl;
//   }
//   else if (sign== "-")
//   {
//    cout<<"difference between two numbers"<< num1-num2<<endl;
//   }
//   else if (sign =="*"    )
//   {
//    cout<<"multiplication of two numbers"<< num1*num2<< endl;
//   }
//   else if (sign=="/")
//   {
//    cout<<"dividing of two numbers"<<num1/num2<<endl;
//   }
//   else
//    {
//    cout<<"invalid sign"<< endl;
//   }
//   return 0;
// }

// pension software
// #include <iostream>
// using namespace std;
// int main()
// {
//     int age;
//     char citizen;
//     long long annual_income;
//     cout << "press x if you are citizen of india ";
//     cin >> citizen;
//     cout << "how are you old";
//     cin >> age;
//     cout << "entre thr annual income";
//     cin>>annual_income;
//         if (citizen == 'x' || citizen == 'X')
//         {
//             if (age >= 60)
//             {
//                 if (annual_income <= 200000)
//                     cout << "congratulation your pension is approvel.....Thanks for coming 🙏";
//                 else
//                     cout << "your income is above then limit";
//             }
//             else
//                 cout << "your age is not under the limit";
//         }
//         else
//             cout << "you are a NRI so your are not aligible for pension ";

//     cout<<"thanks ";
//     return 0;
// }

// palidrome
// #include <iostream>
// using namespace std;
// int main()
// {int n,rev=0,a,m;
// cin>>n;
// m=n;
// while(n>0)
// {a=n%10;
// rev=rev*10+a;
// n=n/10;}
// cout<<rev;
// if (m==rev)
// {cout<<"palindrome";}
// else
//  {cout<<"not";}
// return 0;
// }

// patterns

// #include <iostream>
// using namespace std ;
// int main ()
// {
//     int i,j;
//     for( i=1;i<=5;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//         cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std ;
// int main ()
// {
//     int i,j;
//     for( i=1;i<=5;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//         cout<<char (64 + i);
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std ;
// int main ()
// {
//     int i,j;
//     for( i=1;i<=5;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//         cout<<char (64 + j);
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j;
//     for (i = 5; i >= 1; i--)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j;
//     for (i = 1; i <= 5; i++)
//     {
//         for (j = 1; j <= 5 - i; j++)
//         {
//             cout << " ";
//         }
//         cout << "*" << endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j, k;
//     for (i = 1; i <= 5; i++)
//     {
//         for (j = 1; j <= 5 - i; j++)
//         {
//             cout << " ";
//         }
//         for (k = 1; k <= i; k++)
//             {
//                 cout << "*";
//             }
//             cout<<endl;
//     }
// return 0;
// }

// # include <iostream>
// using namespace std ;
// int main ()
// {
//     int i, j, k;
//     for( i=1;i<=5;i++)
//     {
//         for(j=5;j>=5-i;j--)
//         {
//         cout<<" ";
//         }
//         for( k=1; k<=2*i-1; k++ )
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// # include <iostream>
// using namespace std ;
// int main ()
// {
//     int i, j, k;
//     for( i=1;i<=5;i++)
//     {
//         for(j=1;j<=5-i;j++ )
//         {
//         cout<<" ";
//         }
//         for( k=1; k<=2*i-1; k++ )
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j, k;
//     for (i = 5; i >= 1; i--)
//     {
//         for (j = 1; j <= 5 - i; j++)
//         {
//             cout << " ";
//         }
//         for (k = 1; k <= 2 * i - 1; k++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int n = 5; // total lines for the upper half

//     // Upper half
//     for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <= i; j++) {
//             cout << "A ";
//         }
//         cout << endl;
//     }

//     // Lower half
//     for(int i = n - 1; i >= 1; i--) {
//         for(int j = 1; j <= i; j++) {
//             cout << "A ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// ARRAY.....

// #include <iostream>
// using namespace std;
// int main()
// {
//     int size, i, j,temp;
//     cin >> size;
//     int a[size];
//     cout << "entre the value of arrays";
//     for (i = 0; i < size; i++)
//     {
//         cin >> a[i];
//     }
//     for (i = 0; i < size; i++)
//     {
//         for (j = 0; j < size - i - 1; j++)
//         {
//             if (a[j] > a[j + 1])
//             {
//                 temp = a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=temp;
//             }
//         }
//     }
//     cout<<"the array is ";
//     for( i=0;i<size;i++)
//     {
//         cout<<a[i];
//         cout<<",";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main ()
// {
//     int n,i;
//     cout<<"how many elements are stored in array";
//     cin>>n;
//     int a[n];
//     cout<<"entre the array elements";
//     for( i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     cout<<"The elements are";
//     for(i=0;i<n;i++)
//     {
//         cout<<a[i];
//         cout<<",";
//     }
//     return 0;

// }

// #include <iostream>
// using namespace std;
//     int main()
//     {
//         int i,j=0,n;
//         cout<<"how many eleents are stored in array";
//         cin>>n;
//         int a[n];
//         cout<<"entre the elements";
//         for(i=0;i<n;i++)
//         {
//             cin>>a[i];
//         }
//         for(i=0;i<n;i++)
//         {
//             j=j+a[i];
//         }
//         cout<<"sum of all elements who stored in array"<<j;
//         return 0;
//     }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, n, j=0, avg;
//     cout << "how many elements are stored in array";
//     cin >> n;
//     int a[n];
//     for (i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     for (i = 0; i < n; i++)
//     {
//         j = j + a[i];
//     }
//     avg = j / n;
//     cout << "average of all elements = " << avg;
//     return 0;
// }




// linear searching
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i,size,num,j=0,flag=0;
//     cin>>size;
//     int a[size];
//     cout<<"entre the array elements ";
//     for(i=0;i<size;i++)
//     {
//         cin>>a[i];
//     }
//     cin>>num;
// for(i=0;i<size;i++)
// {
//     if(a[i]==num)
//     {
//         flag=11;
//         j=i+1;
//     }
// }
// if (flag==1)
// {
//     cout<<"the element. is found"<<j<<"position";
// }
// else{
//     cout<<"element not found";
// } 
// return 0;
// }





// // binary searching
// #include  <iostream>
// using namespace std;
// int main()
// {
// int size,i,num,first ,last,mid;
// cin>>size;
// int a[size];
// cout<<"entre the array elements";
// for(i=0;i<size;i++)
// {
// cin>>a[i];
// }
// cout<<"enter the element who find in array";
// cin>>num;
// first=0;
// last=size;
// mid=(last+first)/2;
// whil
// }





// 2D-array
// addition of two matrix
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i,j, row ,coloumn;
//     cout<<"entre the size of matrix";
//     cin>>row>>coloumn;
//    int a[row][coloumn];
//   int  b[row][coloumn];
//    int c[row][coloumn];
//    cout<<"entre the elements of 1st matrix";
//    for(i=0;i<3;i++)
//    {
//     for(j=0;j<3;j++)
//     {
//         cin>>a[i][j];
//     }
//    }
//   cout<<"entre the elements of 2nd matrix";
//   for(i=0;i<3;i++)
//   {
//   for(j=0;j<3;j++)
//   {
//     cin>>b[i][j];
//   }
//   }
//   cout<<"addition of two matrix is =";
//   for(i=0;i<3;i++)
//   {
//     for(j=0;j<3;j++)
//     { 
//         c[i][j]=a[i][j]+b[i][j];
//         cout<<c[i][j]<<'\t';
//     }
//     cout<<endl;
//   }
//   return 0;
// }




// subtract of two matrix
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i,j, row ,coloumn;
//     cout<<"entre the size of matrix";
//     cin>>row>>coloumn;
//    int a[row][coloumn];
//   int  b[row][coloumn];
//    int c[row][coloumn];
//    cout<<"entre the elements of 1st matrix";
//    for(i=0;i<3;i++)
//    {
//     for(j=0;j<3;j++)
//     {
//         cin>>a[i][j];
//     }
//    }
//   cout<<"entre the elements of 2nd matrix";
//   for(i=0;i<3;i++)
//   {
//   for(j=0;j<3;j++)
//   {
//     cin>>b[i][j];
//   }
//   }
//   cout<<"addition of two matrix is =";
//   for(i=0;i<3;i++)
//   {
//     for(j=0;j<3;j++)
//     { 
//         c[i][j]=a[i][j]-b[i][j];
//         cout<<c[i][j]<<'\t';
//     }
//     cout<<endl;
//   }
//   return 0;
// }




// multiplication of two matrix
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i,j,k, row ,coloumn;
//     cout<<"entre the size of matrix";
//     cin>>row>>coloumn;
//    int a[row][coloumn];
//   int  b[row][coloumn];
//    int c[row][coloumn];
//    cout<<"entre the elements of 1st matrix";
//    for(i=0;i<row;i++)
//    {
//     for(j=0;j<coloumn;j++)
//     {
//         cin>>a[i][j];
//     }
//    }
//   cout<<"entre the elements of 2nd matrix";
//   for(i=0;i<row;i++)
//   {
//   for(j=0;j<coloumn;j++)
//   {
//     cin>>b[i][j];
//   }
//   }
//   cout<<"multiplication of two matrix is =";
//   for(i=0;i<row;i++)
//   {
//     for(j=0;j<coloumn;j++)
//     { 
//         c[i][j]=0;
//         for(k=0;k<3;k++)
//         {
//             c[i][j]=c[i][j]+a[i][j]*b[i][j];
//         }
//         cout<<c[i][j]<<'\t';
//     }
//     cout<<endl;
//   }
//   return 0;
// }