#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
class Box{
    public:
    /* friend methods */
    friend ostream& operator<<(ostream& out, Box& B); 
    /* Constructors */
    Box(): l(0), b(0), h(0) {};
    Box(const int l,const int b,const int h): l(l), b(b), h(h) {};
    Box(Box &b): l(b.getLength()), b(b.getBreadth()), h(b.getHeight()) {};

    /* Member methods */
    inline
    int getLength(){ return l; }
    inline
    int getBreadth(){ return b; }
    inline
    int getHeight(){ return h; }
    inline
    long long CalculateVolume(){
        long long length = l;
        long long breadth = b;
        long long height = h;
        return length*breadth*height; 
    }

    bool operator<(Box &b){
        if (this -> getLength() < b.getLength() ||
            this -> getBreadth() < b.getBreadth() && 
            this -> getLength() == b.getLength() ||
            this -> getHeight() < b.getHeight() &&
            this -> getBreadth() == b.getBreadth() &&
            this -> getLength() == b.getLength()){ 
                return true;
            }
        return false;
    }

    private:
    int l;
    int b;
    int h;
};

ostream& operator<<(ostream& out, Box& B){
    out << B.getLength() << " "
        << B.getBreadth() << " "
        << B.getHeight();
    return out;
}


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}