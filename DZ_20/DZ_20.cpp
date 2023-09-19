#include <iostream>
#define IS_EVEN(X) (X%2 == 0 ? true : false)
#define SUM_N(N) int c = 0; \
    for(int i = 1; i <= (N); i++) \
        c += i; \
    cout << c << endl;
#define POW(N, P) int num = 1; \
    for (int j = 0; j < P; j++) \
        num *= N; \
    cout << num << endl;

using namespace std;

int line_star(int n)
{
    if (n < 1)
        return 0;
    else {
        cout << "*";
        return line_star(n - 1);
    }
}
int numbers(int N, int c)
{
    if (N < 1) {
        cout << "Error!" << endl;
        return 0;
    }
    else if (c > N)
        return 0;
    else {
        cout << c;
        return numbers(N, c + 1);
    }
}

int main()
{
    //1
    int num1;
    cout << "Enter number: ";
    cin >> num1;
    if (IS_EVEN(num1) == 1)
        cout << "true" << endl;
    else
        cout << "false" << endl;

    //2
    int n;
    cout << "Enter number: ";
    cin >> n;
    SUM_N(n);

    //3
    int number;
    cout << "Enter number: ";
    cin >> number;
    int power;
    cout << "Enter power: ";
    cin >> power;
    POW(number, power);

    //4
    int N;
    cout << "Enter number: ";
    cin >> N;
    line_star(N);
    cout << endl;
    
    //5
    int N_N;
    cout << "Enter number: ";
    cin >> N_N;
    int C = 1;
    numbers(N_N, C);
    cout << endl;
}
