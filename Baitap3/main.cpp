#include <iostream>
#include <math.h>

using namespace std;
bool sodaonguoc (int n)
{
    int dem = 0;
    int temp=n;
    while (temp !=0)
    {
        temp=temp /10;
        dem++;
    }
    temp=n;
    dem--;
    int x=0;
    while (temp!=0)
    {
        x=x + (temp % 10) * pow(10,dem);
        dem--;
        temp=temp/10;
    }
    if(x==n)
    {
        cout<<n<<" la so doi xung";
    }
    else
    {
        cout<<n<<" khong la so doi xung";
    }
}

int main()
{
    int a[5];
    a[0]=1123;
    a[1]=1221;
    a[2]=2112;
    a[3]=3890;
    a[4]=4114;
    cout<<"Day so vua nhap :";
    for (int i=0; i<5; i++)
    {
        cout<<" "<<a[i];
    }
    cout<<"\n Cac so dao nguoc la :";
    for(int i=0; i<5; i++)
    {
        if( sodaonguoc(a[i])) {

        cout<<" \n "<<a[i]<<endl;
        }
    }

}
