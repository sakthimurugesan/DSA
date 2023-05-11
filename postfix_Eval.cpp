/*#include<iostream>
#include<stack>
using namespace std;

void postfix_eval(string s)
{
    stack<int> st;
    for(int i = 0 ; i<s.size() ; i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            st.push(s[i]-'0');
        }
        else
        {
            int val1 = st.top();
            st.pop();
            int val2 = st.top();
            st.pop();
            switch(s[i])
            {
                case '+':
                    st.push(val2+val1);
                    break;
                case '-':
                    st.push(val2-val1);
                    break;
                case '*':
                    st.push(val2*val1);
                    break;
                case '/':
                    st.push(val2/val1);
                    break;
            }


        }
    }
    cout<<st.top();
}

int main()
{
    string a;
    cin>>a;
    postfix_eval(a);
}*/

#include <bits/stdc++.h>
using namespace std;

int evaluatePostfix(char* exp)
{
	stack<int> st;
	int i;

	for (i = 0; exp[i]; ++i) {
		
		if (exp[i] == ' ')
			continue;

		else if (isdigit(exp[i])) {
			int num = 0;

			while (isdigit(exp[i])) {
				num = num * 10 + (int)(exp[i] - '0');
				i++;
			}
			i--;

			st.push(num);
		}

		else {
			int val1 = st.top();
			st.pop();
			int val2 = st.top();
			st.pop();

			switch (exp[i]) {
			case '+':
				st.push(val2 + val1);
				break;
			case '-':
				st.push(val2 - val1);
				break;
			case '*':
				st.push(val2 * val1);
				break;
			case '/':
				st.push(val2 / val1);
				break;
			}
		}
	}
	return st.top();
}

int main()
{
    string a;
    getline(cin,a);
    char ar[a.length()+1];
    strcpy(ar,a.c_str());
	cout << evaluatePostfix(ar);
	return 0;
}
