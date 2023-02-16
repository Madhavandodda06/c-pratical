#include<iostream>
using namespace std;
class P
{
	int x=5;
	public:
		void getdata()
		{
			cout<<"\n base class x="<<x;
		}
};
class G:public P
{
	int y=5;
	public:
		void getdata1()
		{
			cout<<"\n derived class y= "<<y;
		}
};
int main()
{
	G g;
	g.getdata();
	g.getdata1();
}