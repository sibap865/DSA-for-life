#include<bits/stdc++.h>

using namespace std;

void pattern1(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout<<endl;
    }
    
}

void pattern2(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {

            cout <<"* ";
        }
        cout<<endl;
    }
    
}


void pattern3(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            
            cout << j<<" ";
        }
        cout<<endl;
    }

    /*
1 
2 2 
3 3 3 
1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 
    */
    
}

void pattern4(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            
            cout <<i<<" ";
        }
        cout<<endl;
    }
    
}


void pattern5(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i+1; j++)
        {
            
            cout <<"* ";
        }
        cout<<endl;

    }
/*
* * * 
* * 
* 
* * * * * 
* * * * 
* * * 
* * 
* 

*/
}

void pattern6(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i+1; j++)
        {
            
            cout <<j<<" ";
        }
        cout<<endl;

    }
/*
1 2 3 
1 2 
1 
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1 
 

*/
}
void pattern7(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i+1; j++)
        {
            
            cout <<j<<" ";
        }
        cout<<endl;

    }
/*
1 2 3 
1 2 
1 
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1 
 

*/
}
void pattern8(int n){
    for (int i = 0; i <n; i++)
    {
        // space

        for (int  j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }
        

        // star
        for (int  j = 0; j < (2*i+1); j++)
        {
            cout<<"*";
        }
        // space
        for (int  j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }
        // next line
        cout<<endl;
    }
/*
  *  
 *** 
*****
    *    
   ***   
  *****  
 ******* 
*********
 

*/
}


void pattern9(int n){
    for (int i = 0; i <n; i++)
    {
        // space

        for (int  j = 0; j < i; j++)
        {
            cout<<" ";
        }
        

        // star
        for (int j = 0; j <2*n- (2*i+1); j++)
        {
            cout<<"*";
        }
        // space
        for (int  j = 0; j < i; j++)
        {
            cout<<" ";
        }
        // next line
        cout<<endl;
    }
/*
  *  
 *** 
*****
    *    
   ***   
  *****  
 ******* 
*********
 

*/
}

void pattern10(int n){
    pattern8(n);
    pattern9(n);
}
void pattern11(int n){
    for (int i = 0; i < 2*n-1; i++)
    {
        // star
        int star =i;
        if(i>n) star =2*n -i;
        for (int j = 0; j <= star; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    
}
void pattern12(int n){
    int start =1;
    for (int i = 0; i < n; i++)
    {
        if(i%2 ==0) start =1;
        else start =0;

        for (int j = 0; j <= i; j++)
        {
            cout<<start;
            start =1-start;
        }
        cout<<endl;
    }
    
}
void pattern13(int n){
    int space = 2*(n -1);
    for (int i = 1; i <= n; i++)
    {
        // number

        for (int  j = 1; j <= i; j++)
        {
            cout<<j;
        }
        

        // space
        for (int j = 1; j <=space ; j++)
        {
            cout<<" ";
        }
        // number
        for (int  j = i; j >= 1; j--)
        {
            cout<<j;
        }
        // next line
        space -=2;
        cout<<endl;
    }
/*
1    1
12  21      
123321
1      1
12    21
123  321
12344321
*/
}

void pattern14(int n){
    int start = 0;
    for (int i = 1; i <= n; i++)
    {
        // number

        for (int  j = 1; j <= i; j++)
        {
            start +=1;
            cout<<start<<" ";
        }
        // next line
        cout<<endl;
    }}

void pattern15(int n){
    char  start = 'A';
    for (int i = 0; i < n; i++)
    {
        // number
        for (int  j = 0; j <= i; j++)
        {
            cout<<(start)<<" ";
            start +=1;
        }
        // next line
        start = 'A'; // reset start for next line
        cout<<endl;
    }}

    void pattern16(int n){
    char  start = 'A';
    for (int i = n; i > 0; i--)
    {
        // number
        for (int  j = 0; j <i; j++)
        {
            cout<<(start)<<" ";
            start +=1;
        }
        // next line
        start = 'A'; // reset start for next line
        cout<<endl;
    }}

    void pattern17(int n){
    char  start = 'A';
    for (int i = 0; i < n; i++)
    {
        // number
        for (int  j = 0; j <= i; j++)
        {
            cout<<(start)<<" ";
        }
        start +=1;
        // next line
        cout<<endl;
    }}

    void pattern18(int n){
        for (int i = 0; i < n; i++)
        {
        char  start = 'A';
        // space
        for (int j = 0; j < (n-i-1); j++)
        {
            cout<<" ";
        }
        // number
        int breakPoint =(2*i +1)/2;
        for (int  j = 0; j < (2*i +1); j++)
        {
            cout<<(start);
            if (j <(breakPoint)) start +=1;
            else
            start -=1;
            
        }
        // space
        for (int j = 0; j < (n-i-1); j++)
        {
            cout<<" ";
        }
        // next line
        cout<<endl;
    }}
    void pattern19(int n){
    char  start = 'A'+n-1;
    // cout<<start<<endl;
    for (int i = 0; i < n; i++)
    {
        // number
        for (int  j = 0; j <= i; j++)
        {
            cout<<(char)(start+j)<<" ";
        }
        start -=1;
        // next line
        cout<<endl;
    }}
    void pattern20(int n){
        int space  = 0;
       for (int i = 0; i < n; i++)
       {
         // star
         for (int j = 1; j <= n-i; j++)
         {
            cout<<"*";
         }
         
        // space
        for (int j = 1; j <= space; j++)
        {
            cout<<" ";
        }   
        // star
        for (int j = 1; j <= n-i; j++)
        {
            cout<<"*";
        }
        space +=2;
        cout<<endl;
       }
       
    }
   void pattern21(int n){
        int space  = 2*(n-1);

       for (int i = 1; i <= 2*n-1; i++)
       {
         int star  = i;
         if (i > n) star = 2*n - i;
         // star
         for (int j = 1; j <= star; j++)
         {
            cout<<"*";
         }
         
        // space
        for (int j = 1; j <= space; j++)
        {
            cout<<" ";
        }   
        // star
        for (int j = 1; j <= star; j++)
         {
            cout<<"*";
         }
         if(i<n) space-=2;
         else space +=2;
        cout<<endl;
       }
       
    }
   void pattern22(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n-1 || j == 0 || j == n-1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
   }
   void pattern23(int n){
    for (int i = 0; i < 2*n -1; i++)
    {
        for (int j = 0; j <2*n -1; j++)
        {
            int top = i;
            int left = j;   
            int bottom = (2*n -2) - i;
            int right = (2*n -2) - j;

            int minValue = min({top, left, bottom, right});
            cout<<minValue<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for (int i = 0; i < 2*n -1; i++)
    {
        for (int j = 0; j <2*n -1; j++)
        {
            int top = i;
            int left = j;   
            int bottom = (2*n -2) - i;
            int right = (2*n -2) - j;

            int minValue = min({top, left, bottom, right});
            cout<<n-minValue<<" ";
        }
        cout<<endl;
    }
    
   }
    int main(){
    int t,n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        pattern23(n);
    }
}



