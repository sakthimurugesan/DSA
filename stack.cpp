#include <bits/stdc++.h>
using namespace std;


int evaluatePostfix(string s)
{
	stack<int> st;
    

	for (int i = 0; i < s.size(); ++i) {
		
		if (isdigit(s[i]))
		{
			int n = 0;
			while(s[i]!=' ')
			{
				int tem = (int)(s[i] - '0');
				n = n * 10 + tem;
				i++;
			}
			st.push(n);
		}
		
		else {
			int val1 = st.top();
			st.pop();
			int val2 = st.top();
			st.pop();
			switch (s[i]) {
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
	string s1;
	getline(cin,s1);
	cout<<evaluatePostfix(s1);
}
