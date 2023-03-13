#include <iostream>
using namespace std;
class foo{
    private:
        int numer;
        float money;
    public:
        void getdata(){
            cout << "Enter Number: ";
            cin >> numer;
            cout << "Enter Money: ";
            cin >> money;
        }
        void showdata()const{
            cout << "Number: " << numer << endl;
            cout << "Money: " << money << endl;
        }
};

int main(){
        const int max = 5;
        char ch;
        int count = 0;
        foo f1[max];

        do
        {
            cout << "Dlina: " << count + 1 << endl;
            f1[count++].getdata();
            cout << "Once Again?: ";
            cin >> ch;
            if(count>=max){
                cout << "\nМассив Полон: \n";
                break;
            }
        } while (ch != 'n');

        for (int i = 0; i < max; i++)
        {
            cout << "\ndline: " << i + 1;
            cout << endl;
            f1[i].showdata();
        }
        cout << endl;
        return 0;
}