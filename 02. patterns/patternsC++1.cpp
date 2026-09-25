#include <iostream>
using namespace std;

int main()
{
/*

    // pattern 1 // making pattern like this (n x n) of "*"
    int n;
    cin >> n;
    int i =1;

    while (i <= n)
    {
        
        int j = 1;
        while (j <= n)
        {
            cout << "*";
            j++;

        }
            cout << endl;
        i++;    
    }
        

    // pattern 2 // making pattern of 111 next row 222 next row 333 like this or it can contain more row and column

    int n;
    cin >> n;
    int i = 1;
    
    while(i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << i;
            j++;  
        }
        cout << endl;
        i++;
        

    }


 // LECTURE 4

// pattern 3 // making pattern of 1234 , 1234 , 1234 , 1234 

    int n;
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }



// HW === make pattern like htis 321 , 321 ,321 like this

    int n;
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << n-j+1;
            j++;

        }
        cout << endl;
        i++;

    }


// print 123, 456, 789 like this

    int n; 
    cin >> n;
    int i =1;
    int a =1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << a << " ";
            a++;
            j++;
        }
        cout << endl;
        i++;
    }


// print right angle triangle like pattern like *, **, ***, ****, *****;

    int n;
    cin >> n;
    int i = 1;
    
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << "*";
            j++;
            
        }
        cout << endl;
        i++;
    }



// print right angle triangle like pattern like 1, 22, 333, 4444 

    int input;
    cin >> input;
    int row = 1;

    while (row <= input)
    {
        int column = 1;
        while (column <= row)
        {
            cout << row;
            column++;
        }
        cout << endl;
        row++;
    }


//print right angle triangle 1 ,2 3 ,4 5 6 ,7 8 9 10
// HW on Lecture 4

    int input;
    cin >> input;
    int row = 1;
    int a = 1;

    while (row <= input)
    {
        int column = 1;
        while (column <= row)
        {
            cout << a << "\t";
            column++;
            a++;
        }
        cout << endl;
        row++;
        
    }


//print right angle triangle 1, 23, 345, 4567 ; print this


// 1st way to do this pattern 
    int input;
    cin >> input;
    int row = 1;

    while (row <= input)
    {
        // putting row value in other int and then adding 1 in it to increase
        int column = 1;
        int value = row;
        while (column <= row)
        {
            cout << value;
            column++; 
            value++;
        }
        row++;
        cout << endl;
    }


// 2nd way to do this pattern
// unable to do it now!!!

    int input;
    cin >> input;
    int row = 1;

    while (row <= input)
    {
        // putting row value in other int and then adding 1 in it to increase
        int column = 1;
        while (column <= row)
        {
            cout << "";
            column++; 
        }
        row++;
        cout << endl;
    }


// print 1, 21, 321, 4321 right angle triangle

    int input;
    cin >> input;
    int row = 1;
    while(row <= input)
    {
        int column = 1;
        while (column <= row)
        {
            cout << row-column+1;
            column++;
        }
        cout << endl;
        row++;
    }


//  AAA, BBB , CCC print this pattern 

    int input;
    cin >> input;
    int row = 1;
    while (row <= input)
    {
        int column = 1;
        while (column <= input)
        {
            char change = 'A'+row-1;
            cout << change;
            column++;
        }
        cout << endl;
        row++;
    }

   // print abc, abc , abc .... 

   int input;
   cin >> input;
   int row = 1;
   while (row <= input)
   {
    int column = 1;
    while (column <= input)
    {
        char change = 'A'+column-1;
        cout << change;
        column++;
    }
    cout << endl;
    row++;
   }


// print abc, def, ghi, .... 

    int n; 
    cin >> n;
    int i = 1;
    int a = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char ch = ('A' + a - 1);
            cout << ch;
            j++;
            a++;
        }
        cout << endl;
        i++;
    }



//print abc , bcd, cde,..... 

    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            // can also take one ascii digit back like behind A is @
            // can also put j to 0 and remove = to sign and just keep < this sign
            //char ch = ('@' + i + j - 1);
            // down here is the formula to solve ('A' + i + j - 2);
            char ch = ('A' + i + j - 2);
            cout << ch;
            j++;
            
        }
        cout << endl;
        i++;
    }



//print right angle triangle A, BB, CCC,....

    int n;
    cin >> n;
    int i = 1;
    while (i<=n)
    {
        int j = 1;
        while (j<=i)
        {
            char ch = ('A' + i - 1);
            cout << ch;
            j++;
        }
        cout << endl;
        i++;
    }


// print right angle triangle A, BC, DEF, GHIJ...


    int n;
    cin >> n;
    int i = 1;
    int a = 1;

    while (i<=n)
    {
        int j = 1;
        while (j <= i)
        {
            char ch = ('A' + a - 1);
            cout << ch;
            a++;
            j++;
        }
        cout << endl;
        i++;
    }


// print A, BC , CDE, DEFG... right angle triangle

    int n;
    cin >> n;
    int i = 1;
    while (i<=n)
    {
        int j = 1;
        while (j<=i)
        {
            char ch = 'A' + i + j - 2;
            cout << ch;
            j++;
        }
        cout << endl;
        i++;
    }


// print D, CD, BCD, ABCD,... right angle triangle

    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        char ch = ('A' + n - i);
        while (j <= i)
        {
            cout << ch;
            j++;
           ch++;
        }
        cout << endl;
        i++;
    }


   // print ABC, BCD, CDE with different meathod
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        char ch = 'A' + i - 1;
        while (j <= n)
        {
            cout << ch;
            j++;
            ch++;
        }
        cout << endl;
        i++;
    }


   // Print ---*, --**, -***, ****, .... - means you have to put space.

    int n;
    cin >> n;
    int i = 1;
    while (i<=n)
    {
        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }
        int j = 1;
        while (j<=i)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;

    }

// print ****, ***, ** , * ... right angle triangle

    int n;
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n-i+1)
        {
            cout << "*";
            j++;
        }
        i++;
        cout << endl;
    }


//print ****, -***, --**, ---*, ...

    int n;
    cin >> n;
    int i = 1;
    while (i<=n)
    {
        int space = i-1;
        while (space)
        {
            cout << " ";
            space--;
        }
        int j = 1;
        while (j<=n+1-i)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }


   //print 1111, -222, --33, ---4, .....

    int n;
    cin >> n;
    int i = 1;
    while (i<=n)
    {
        int space = i-1;
        while (space)
        {
           cout << " ";
           space--; 
        }
        int j = 1;
        while (j <= n+1-i)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;

    }


   //print ---1, --22, -333, 4444, .....

    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int space = n-i;
        while (space)
        {
            cout << " ";
            space--;
        }
        int j = 1;
        while (j<=i)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }



   // print 1234, -234, -34, ---4, ... 


    int n;
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        int space = i-1;
        while (space)
        {
            cout << " ";
            space--;
        }
        int j = 1;
        while (j<=n-i+1)
        {
            cout << i+j-1;
            j++;
        }
        cout << endl;
        i++;

    }

    // print ---1, --23, -456, 78910,...
    int n;
    cin >> n;
    int i = 1;
    int a = 1;
    while (i <= n)
    {
        int space = n-i;
        while (space)
        {
            cout << " " << " ";
            space--;
        }
        int j = 1;
        while (j<=i)
        {
            cout << a << " ";
            j++;
            a++;
        }
        cout << endl;
        i++;
    }


// print ---1, --121, -12321, 1234321,.....

    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        // first triangle
        int space = n-i;
        while (space)
        {
            cout << " ";
            space--;
        }
        // second triangle 
        int j = 1;
        while (j <= i)
        {
            cout << j;
            j++;
        }
        // third triangle
        int thirdpart = i - 1;
        while (thirdpart)
        {
            cout << thirdpart ;
            thirdpart--;
        }
        i++;
        cout << endl;
    }
   
   

// print .. big pattern .. check your self

    int n;
    cin >> n;
    int i = 1;
    while (i<=n)
    {
        int j = 1;
        while (j<=n+1-i)
        {
            cout << j;
            j++;
        }
        int sta = i-1;
        while (sta)       
        {
        cout << "**";
        sta--;
        }
        int thi = 1;
        int c = n+1-i;
        while (thi <= n+1-i)
        {
            cout << c;
            thi++;
            c--;
        }
        cout << endl;
        i++;
    }

    */


}

