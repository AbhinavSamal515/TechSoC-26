#include <iostream>
using namespace std;
int main()
{
    int n;double total=0,temp=0;double c;
    cout << "Enter Maximum Capacity of the Port : ";cin >> c;cout << endl;
    cout << "Enter Number of Containers : ";cin >> n;cout << endl;
    double x[n];
    for(int i=0;i<n;i++)
    {
        cout << "Enter the weight of Container " << i+1 << " : ";cin >> x[i];cout << endl;
        total += x[i];
    }
    cout << endl;
    cout << "Average Weight of Containers : " << total/n << endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(x[j] > x[j+1])
            {
                temp = x[j];x[j] = x[j+1];x[j+1] = temp;
            }
        }
    }
    while(true){
    cout << "1.Shipment Eqnuiry" << endl << "2.Container Sorting" << endl << "3.Search for Container" << endl << "4.Find the nth heaviest container " << endl << "5.Exit" << endl;
    cout << endl ;cout << "Enter your choice : ";int in=0;cin >> in;cout << endl;
    switch(in)
    {
        case 1:
        cout << "Lightest Container : " << x[0] << endl;
    cout << "Heaviest Container : " << x[n-1] << endl;
    cout << "Classification  :" << ((total>(int)200)?"Heavy":"Light") << endl;
    cout << "Port Capacity : " << c <<endl;
    cout << "Loading Status : " << ((total<c)?"PASS":"FAIL") << endl;cout << endl;cout << "Sorted Containers : ";
    break;
    case 2 :
    cout << "Sorted Containers : ";
    for (int i=0;i<n;i++)
    {
        cout << x[i] << " , " ;
    }cout << endl;
    break;
    case 3 :
    {
    int f=0;
    cout << "Enter the weight of the container to search for : ";cin >> f;cout << endl;
    int l=0,h=n-1,m=(h+l)/2;in=-1;
    while(l!=m || h!=m)
    {
        if(x[m]==f){cout << "Container found at index : " << m+1 << endl; break;}
        else if(x[m]<f)l=m;
        else h=m;
        m=(h+l)/2;
    }
    if(in<0)cout << "Container not found" << endl;
    cout <<endl;break;}
    case 4 :
    cout << "Enter container serial No : ";cin >> in;cout << endl;
    cout << "Container at index " << in << " is : " << x[in-1] << endl;cout << endl;break;
        case 5 :
        cout << "Exiting the program" << endl;cout << endl;exit(0);break;
        default :
        cout << "Invalid Choice" << endl;cout << endl;break;
    }
}
return 0;
}