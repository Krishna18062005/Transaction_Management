#include <iostream> //Team_Matrix
#include <string>
#include <vector>
using namespace std;

int main()
{
    cout << "Enter how many Transactions you wanted\n";
    int Ts;    // for transaction con
    cin >> Ts; // get input

    vector<string> Pr(Ts); // for payer names
    vector<string> Pe(Ts); // for payee names
    vector<int> am(Ts);    // for amounts

    for (int i = 0; i < Ts; i++)
    {
        cout << "Enter " << i + 1 << " payer name: ";
        cin >> Pr[i];
        cout << "Enter " << i + 1 << " payee name: ";
        cin >> Pe[i];
        cout << "Enter " << i + 1 << " Amount: ";
        cin >> am[i];
    }

    vector<string> in; // for payee names
    vector<int> st;    // for amounts

    for (int i = 0; i < Ts; i++)
    {
        int sum = am[i];
        bool fD = false;

        for (int j = 0; j < Ts; j++)
        {
            if (Pe[i] == Pe[j]&&i!=j)
            {
                sum += am[j];
                fD = true;
            }
        }

        bool aA = false;
        for (int l = 0; l < in.size() && !aA; l++)
        {
            if (Pe[i] == in[l])
            {
                aA = true;
            }
        }

        if (!fD)
        {
            in.push_back(Pe[i]);
            st.push_back(am[i]);
        }
        else if (sum > 0 && !aA)
        {
            in.push_back(Pe[i]);
            st.push_back(sum);
        }
    }

    for (int i = 0; i < in.size(); i++)
    {
        cout << "Payee name: " << in[i];
        cout << "\nTotal amount: " << st[i] << "\n";
    }

    return 0;
}
